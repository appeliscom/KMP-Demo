package com.appelis.kmp_demo.core.auth.domain

interface IdentityRepository {
    suspend fun createToken(deviceUuid: String): TokenPayload
    suspend fun refreshToken(refreshToken: String): TokenPayload
//    suspend fun logout(token: String)
//    suspend fun updateDevice(token: String, language: Language, notificationToken: String?)
    suspend fun registerDevice(appKey: String, deviceKey: String): String
//    suspend fun getDeviceEvents(token: String, size: Int): List<DeviceEvent>
//    suspend fun getDevice(token: String): MobileDevice
}