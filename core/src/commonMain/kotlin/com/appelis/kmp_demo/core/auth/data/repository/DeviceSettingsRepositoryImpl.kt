package com.appelis.kmp_demo.core.auth.data.repository

import com.appelis.kmp_demo.core.auth.domain.DeviceSettingsRepository

class DeviceSettingsRepositoryImpl: DeviceSettingsRepository {
    // TODO: implement with sql delight
    var deviceUuid: String = "9d6c6194-1712-48a1-b60c-ef3bf24edf85"
    var mobileDeviceId: String = ""
    var publicToken: String = ""
    var refreshToken: String = ""

    override suspend fun getDeviceUuid(): String {
        return deviceUuid
    }

    override suspend fun updateMobileDeviceId(mobileDeviceId: String) {
        this.mobileDeviceId = mobileDeviceId
    }

    override suspend fun getPublicToken(): String? {
        return publicToken
    }

    override suspend fun updatePublicToken(token: String) {
        this.publicToken = token
    }

    override suspend fun getRefreshToken(): String? {
        return refreshToken
    }

    override suspend fun updateRefreshToken(refreshToken: String) {
        this.refreshToken = refreshToken
    }
}