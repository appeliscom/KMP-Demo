package com.appelis.kmp_demo.core.network

import com.appelis.identity.TokenError
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
                else -> throw e
            }
        }
    }

    fun handleTokenError(tokenErr: TokenError?) {
        when (tokenErr) {
            TokenError.UNKNOWN_TOKEN_ERROR -> throw NetworkException(code = NetworkException.ErrorCode.UNKNOWN)
            TokenError.INVALID_TOKEN -> throw NetworkException(code = NetworkException.ErrorCode.AUTH_ERROR)
            null -> return
        }
    }
}