package com.appelis.kmp_demo.core.localDB.dao

import androidx.room.Dao
import androidx.room.Insert
import androidx.room.OnConflictStrategy
import androidx.room.Query
import com.appelis.kmp_demo.core.localDB.entity.DeviceSettingsRoomDTO

@Dao
interface DeviceSettingsDao: GenericDao<DeviceSettingsRoomDTO> {
    @Query("SELECT * FROM device_settings LIMIT 1")
    suspend fun getDeviceSettings(): DeviceSettingsRoomDTO?

    @Query("SELECT device_uuid FROM device_settings LIMIT 1")
    suspend fun getDeviceUUID(): String?

    @Query("SELECT mobile_device_id FROM device_settings LIMIT 1")
    suspend fun getMobileDeviceId(): String?

    @Query("UPDATE device_settings SET mobile_device_id=:mobileDeviceId")
    suspend fun updateMobileDeviceId(mobileDeviceId: String)

    @Query("SELECT refresh_token FROM device_settings LIMIT 1")
    suspend fun getRefreshToken(): String?

    @Query("UPDATE device_settings SET refresh_token=:refreshToken")
    suspend fun updateRefreshToken(refreshToken: String)
}
