package com.appelis.kmp_demo.core.auth.data.util

import com.appelis.core.data.network.ErrorHandlingManager
import com.appelis.kmp_demo.core.auth.toClean.data.network.NetworkException
import com.appelis.kmp_demo.core.auth.toClean.data.network.retryIO
import com.appelis.kmp_demo.core.auth.domain.DeviceTokenProvider
import com.appelis.kmp_demo.core.auth.domain.IdentityRepository
import com.appelis.kmp_demo.core.auth.toClean.data.auth.CreateTokenHandler
//import com.appelis.kmp_demo.core.auth.toClean.data.auth.IdentityNetworkDataSource
import com.appelis.kmp_demo.core.auth.domain.DeviceSettingsRepository
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.sync.Mutex
import kotlinx.coroutines.sync.withLock

internal class DeviceTokenProviderImpl(
    private val identityRepository: IdentityRepository,
    private val appKey: String,
    private val deviceSettingsRepository: DeviceSettingsRepository,
//    private val identityNetworkDataSource: IdentityNetworkDataSource,
    private val createTokenHandler: CreateTokenHandler
) : DeviceTokenProvider {
    private val accessToken = MutableStateFlow("")
    private val mutex = Mutex()

    override suspend fun getAccessToken(): String {
        mutex.withLock {
            val accessToken = accessToken.value
            return accessToken.ifEmpty {
                updateDeviceTokenCall()
            }
        }
    }

    override suspend fun updateDeviceTokenCall(): String {
        val accessToken = refreshAccessOrCreate()
        this.accessToken.value = accessToken
        return accessToken
    }

    private suspend fun refreshAccessOrCreate(): String {
        val refreshToken = deviceSettingsRepository.getRefreshToken()
        return if (refreshToken.isNullOrBlank()) {
            createToken()
        } else {
            try {
//                identityNetworkDataSource.refresh()
                return ""
            } catch (e: NetworkException) {
                if (e.code == ErrorHandlingManager.ErrorCodes.AUTH_ERROR) {
                    createToken()
                } else {
                    throw e
                }
            }
        }
    }

    private suspend fun createToken(): String {
        return retryIO(block = {
//            val token = identityNetworkDataSource.create()
//            createTokenHandler.tokenCreated(token)
//            return@retryIO token
                               ""
        }, handleError = { e ->
            if (e is NetworkException && e.code == ErrorHandlingManager.ErrorCodes.MOBILE_DEVICE_NOT_FOUND) {
                mobileDeviceNotFound(e)
            }
        })
    }

    override suspend fun handleError(e: NetworkException) {
        when (e.code) {
            ErrorHandlingManager.ErrorCodes.MISSING_AUTH_TOKEN,
            ErrorHandlingManager.ErrorCodes.AUTH_ERROR,
            ErrorHandlingManager.ErrorCodes.AUTH_SERVER_ERROR -> {
                mutex.withLock {
                    val devToken = updateDeviceTokenCall()
                    if (devToken.isBlank()) {
                        throw e
                    }
                }
            }
            ErrorHandlingManager.ErrorCodes.MOBILE_DEVICE_NOT_FOUND -> {
                mobileDeviceNotFound(e)
            }
            ErrorHandlingManager.ErrorCodes.USER_NOT_LOGGED -> {
                throw e
            }
            else -> ErrorHandlingManager.genericHandleError(e)
        }
    }

    private suspend fun mobileDeviceNotFound(e: NetworkException) {
        val deviceKey = deviceSettingsRepository.getDeviceKey()
        val response = identityRepository.registerDevice(
            appKey,
            deviceKey
        )

        deviceSettingsRepository.updateMobileDeviceId(response)
    }
}