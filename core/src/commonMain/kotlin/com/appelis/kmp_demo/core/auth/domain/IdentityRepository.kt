package com.appelis.kmp_demo.core.auth.domain

interface IdentityRepository {
    suspend fun createToken(deviceUuid: String): TokenPayload
    suspend fun refreshToken(refreshToken: String): TokenPayload
    suspend fun registerDevice(deviceKey: String): String
}