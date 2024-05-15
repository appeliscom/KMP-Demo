package com.appelis.kmp_demo.core.auth.data.repository

import com.appelis.kmp_demo.core.auth.domain.DeviceSettingsRepository

class DeviceSettingsRepositoryImpl: DeviceSettingsRepository {
    override suspend fun getDeviceKey(): String {
        TODO("Not yet implemented")
    }

    override suspend fun updateMobileDeviceId(mobileDeviceId: String) {
        TODO("Not yet implemented")
    }

    override suspend fun getPublicToken(): String? {
        TODO("Not yet implemented")
    }

    override suspend fun updatePublicToken(token: String) {
        TODO("Not yet implemented")
    }

    override suspend fun getRefreshToken(): String? {
        TODO("Not yet implemented")
    }

    override suspend fun updateRefreshToken(refreshToken: String) {
        TODO("Not yet implemented")
    }
}