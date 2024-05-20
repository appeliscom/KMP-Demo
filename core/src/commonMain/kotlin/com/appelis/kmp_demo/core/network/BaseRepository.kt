package com.appelis.kmp_demo.core.network

import com.appelis.kmp_demo.core.auth.domain.AuthClient

abstract class BaseRepository(private val authClient: AuthClient) {
    suspend fun <T : Any?> fetch(block: suspend (accessToken: String) -> T): T {
        val accessToken = authClient.getAccessToken()
        return try {
            block(accessToken)
        } catch (e: NetworkException) {
            when (e.code) {
                // auth
                NetworkException.ErrorCode.MISSING_AUTH_TOKEN,
                NetworkException.ErrorCode.AUTH_ERROR,
                NetworkException.ErrorCode.AUTH_SERVER_ERROR -> {
                    // refresh token and try again
                    val refreshedAccessToken =
                        authClient.getRefreshedAccessToken(invalidAccessToken = accessToken)
                    block(refreshedAccessToken)
                }
                // no mobile device
                NetworkException.ErrorCode.MOBILE_DEVICE_NOT_FOUND -> {
                    // register mobile device and try again
                    authClient.registerDevice()
                    block(authClient.getAccessToken())
                }
                else -> throw e
            }
        }
    }
}