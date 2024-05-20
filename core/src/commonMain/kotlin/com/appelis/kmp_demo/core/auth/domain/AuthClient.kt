package com.appelis.kmp_demo.core.auth.domain

interface AuthClient {
    suspend fun getAccessToken(): String
    suspend fun getRefreshedAccessToken(invalidAccessToken: String): String
    suspend fun registerDevice()
//    suspend fun handleError(e: NetworkException)
}
