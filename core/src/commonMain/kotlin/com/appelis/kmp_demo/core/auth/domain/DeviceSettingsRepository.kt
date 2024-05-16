package com.appelis.kmp_demo.core.auth.domain

interface DeviceSettingsRepository {
    suspend fun getDeviceUuid(): String
    suspend fun updateMobileDeviceId(mobileDeviceId: String)
    suspend fun getPublicToken(): String?
    suspend fun updatePublicToken(token: String)
    suspend fun getRefreshToken(): String?
    suspend fun updateRefreshToken(refreshToken: String)
}
