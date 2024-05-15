package com.appelis.kmp_demo.core.auth.domain


import com.appelis.kmp_demo.core.auth.toClean.domain.settings.DeviceSettings
import com.appelis.kmp_demo.core.auth.toClean.domain.translation.Language
import kotlinx.coroutines.flow.Flow

interface DeviceSettingsRepository {
//    suspend fun updateLanguage(language: Language)
//    fun getDeviceLanguageFlow(): Flow<String>
//    suspend fun getDeviceLanguage(): String?
//    suspend fun getDeviceSettings(): DeviceSettings?
    suspend fun getDeviceKey(): String
//    suspend fun getMobileDeviceId(): String?
    suspend fun updateMobileDeviceId(mobileDeviceId: String)
//    suspend fun insert(deviceSettings: DeviceSettings)
    suspend fun getPublicToken(): String?
    suspend fun updatePublicToken(token: String)
    suspend fun getRefreshToken(): String?
    suspend fun updateRefreshToken(refreshToken: String)
}
