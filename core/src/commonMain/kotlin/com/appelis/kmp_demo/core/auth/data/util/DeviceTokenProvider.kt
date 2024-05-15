package com.appelis.kmp_demo.core.auth.data.util

import com.appelis.core.data.network.ErrorHandlingManager
import com.appelis.kmp_demo.core.auth.toClean.data.network.NetworkException
import com.appelis.kmp_demo.core.auth.toClean.data.network.retryIO
import com.appelis.kmp_demo.core.auth.domain.DeviceTokenProvider
import com.appelis.kmp_demo.core.auth.domain.IdentityRepository
import com.appelis.kmp_demo.core.auth.domain.DeviceSettingsRepository
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.sync.Mutex
import kotlinx.coroutines.sync.withLock

internal class DeviceTokenProviderImpl(
    private val appKey: String,
    private val identityRepository: IdentityRepository,
    private val deviceSettingsRepository: DeviceSettingsRepository
) : DeviceTokenProvider {
    private val accessToken = MutableStateFlow("")
    private val getAccessTokenMutex = Mutex()
    private val refreshAccessTokenMutex = Mutex()

    override suspend fun getAccessToken(): String {
        getAccessTokenMutex.withLock {
            val accessToken = accessToken.value
            return accessToken.ifEmpty {
                getRefreshedAccessToken("")
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
                    if (e.code == ErrorHandlingManager.ErrorCodes.AUTH_ERROR) {
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

    private suspend fun createToken(): String {
        return retryIO(block = {
            val deviceUuid = deviceSettingsRepository.getDeviceUuid()
            val token = identityRepository.createToken(deviceUuid = deviceUuid)
            deviceSettingsRepository.updateRefreshToken(token.refreshToken)
            return@retryIO token.accessToken
        }, handleError = { e ->
            if (e is NetworkException && e.code == ErrorHandlingManager.ErrorCodes.MOBILE_DEVICE_NOT_FOUND) {
                mobileDeviceNotFound(e)
            }
        })
    }

    private suspend fun refreshAccessToken(refreshToken: String): String {
        return retryIO(block = {
            val token = identityRepository.refreshToken(refreshToken)
            deviceSettingsRepository.updateRefreshToken(token.refreshToken)
            return@retryIO token.accessToken
        }, handleError = { e ->
            if (e is NetworkException && e.code == ErrorHandlingManager.ErrorCodes.MOBILE_DEVICE_NOT_FOUND) {
                mobileDeviceNotFound(e)
            }
        })
    }

//    override suspend fun handleError(e: NetworkException) {
//        when (e.code) {
//            ErrorHandlingManager.ErrorCodes.MISSING_AUTH_TOKEN,
//            ErrorHandlingManager.ErrorCodes.AUTH_ERROR,
//            ErrorHandlingManager.ErrorCodes.AUTH_SERVER_ERROR -> {
//                mutex.withLock {
//                    val accessToken = getRefreshedAccessToken()
//                    if (accessToken.isBlank()) {
//                        throw e
//                    }
//                }
//            }
//            ErrorHandlingManager.ErrorCodes.MOBILE_DEVICE_NOT_FOUND -> {
//                mobileDeviceNotFound(e)
//            }
//            ErrorHandlingManager.ErrorCodes.USER_NOT_LOGGED -> {
//                throw e
//            }
//            else -> ErrorHandlingManager.genericHandleError(e)
//        }
//    }

    private suspend fun mobileDeviceNotFound(e: NetworkException) {
        val deviceKey = deviceSettingsRepository.getDeviceUuid()
        val response = identityRepository.registerDevice(
            appKey,
            deviceKey
        )

        deviceSettingsRepository.updateMobileDeviceId(response)
    }
}