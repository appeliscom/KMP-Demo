package com.appelis.kmp_demo.core.auth.data.repository

import com.appelis.kmp_demo.core.auth.domain.DeviceSettingsRepository
import com.appelis.kmp_demo.core.localDB.database.AppDatabase
import com.appelis.kmp_demo.core.localDB.entity.DeviceSettingsRoomDTO
import org.koin.core.annotation.Single

@Single
class DeviceSettingsRepositoryImpl(db: AppDatabase): DeviceSettingsRepository {
    private val dao = db.deviceSettingsDao()
    override suspend fun createDevice(uuid: String) {
        dao.insert(DeviceSettingsRoomDTO(deviceUUID = uuid))
    }

    override suspend fun getDeviceUuid(): String? {
        return dao.getDeviceUUID()
    }

    override suspend fun updateMobileDeviceId(mobileDeviceId: String) {
        dao.updateMobileDeviceId(mobileDeviceId)
    }

    override suspend fun getRefreshToken(): String? {
        return dao.getRefreshToken()
    }

    override suspend fun updateRefreshToken(refreshToken: String) {
        dao.updateRefreshToken(refreshToken)
    }
}