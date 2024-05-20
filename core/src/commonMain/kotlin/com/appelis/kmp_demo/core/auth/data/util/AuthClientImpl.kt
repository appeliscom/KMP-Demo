package com.appelis.kmp_demo.core.auth.data.util

import com.appelis.kmp_demo.core.network.NetworkException
import com.appelis.kmp_demo.core.network.retryIO
import com.appelis.kmp_demo.core.auth.domain.AuthClient
import com.appelis.kmp_demo.core.auth.domain.IdentityRepository
import com.appelis.kmp_demo.core.auth.domain.DeviceSettingsRepository
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.sync.Mutex
import kotlinx.coroutines.sync.withLock
import org.koin.core.annotation.Single

@Single
internal class AuthClientImpl(
    private val identityRepository: IdentityRepository,
    private val deviceSettingsRepository: DeviceSettingsRepository
) : AuthClient {
    private val accessToken = MutableStateFlow("")
    private val getAccessTokenMutex = Mutex()
    private val refreshAccessTokenMutex = Mutex()

    override suspend fun getAccessToken(): String {
        getAccessTokenMutex.withLock {
            val accessToken = accessToken.value
            return accessToken.ifEmpty {
                refreshAccessToken()
            }
        }
    }

    override suspend fun getRefreshedAccessToken(invalidAccessToken: String): String {
        refreshAccessTokenMutex.withLock {
            if (accessToken.value != invalidAccessToken) {
                // accessTokenAlready refreshed by other caller, return current (already refreshed) accessToken
                return accessToken.value
            }
            val refreshToken = deviceSettingsRepository.getRefreshToken()
            val accessToken: String = if (refreshToken.isNullOrBlank()) {
                createToken()
            } else {
                try {
                    refreshAccessToken(refreshToken)
                } catch (e: NetworkException) {
                    if (e.code == NetworkException.ErrorCode.AUTH_ERROR) {
                        createToken()
                    } else {
                        throw e
                    }
                }
            }
            this.accessToken.value = accessToken
            return accessToken
        }
    }

    private suspend fun refreshAccessToken(): String {
        val refreshToken = deviceSettingsRepository.getRefreshToken()
        val accessToken: String = if (refreshToken.isNullOrBlank()) {
            createToken()
        } else {
            try {
                refreshAccessToken(refreshToken)
            } catch (e: NetworkException) {
                if (e.code == NetworkException.ErrorCode.AUTH_ERROR) {
                    createToken()
                } else {
                    throw e
                }
            }
        }
        this.accessToken.value = accessToken
        return accessToken
    }

    private suspend fun createToken(): String {
        return retryIO(times = 3, block = {
            val deviceUuid = deviceSettingsRepository.getDeviceUuid()
            val token = identityRepository.createToken(deviceUuid = deviceUuid)
            deviceSettingsRepository.updateRefreshToken(token.refreshToken)
            return@retryIO token.accessToken
        }, handleError = { e ->
            if (e is NetworkException && e.code == NetworkException.ErrorCode.MOBILE_DEVICE_NOT_FOUND) {
                registerDevice()
            }
        })
    }

    private suspend fun refreshAccessToken(refreshToken: String): String {
        return retryIO(block = {
            val token = identityRepository.refreshToken(refreshToken)
            deviceSettingsRepository.updateRefreshToken(token.refreshToken)
            return@retryIO token.accessToken
        }, handleError = { e ->
            if (e is NetworkException && e.code == NetworkException.ErrorCode.MOBILE_DEVICE_NOT_FOUND) {
                registerDevice()
            }
        })
    }

    override suspend fun registerDevice() {
        val deviceUuid = deviceSettingsRepository.getDeviceUuid()
        val response = identityRepository.registerDevice(deviceUuid)
        deviceSettingsRepository.updateMobileDeviceId(response)
    }
}