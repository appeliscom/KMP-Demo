package com.appelis.kmp_demo.core.localDB.entity

import androidx.room.ColumnInfo
import androidx.room.Entity
import androidx.room.PrimaryKey

@Entity(tableName = "device_settings")
data class DeviceSettingsRoomDTO(
    @PrimaryKey
    val id: Int = -1,
    @ColumnInfo(name = "device_uuid")
    val deviceUUID: String? = null,
    @ColumnInfo(name = "mobile_device_id")
    val mobileDeviceId: String? = null,
    @ColumnInfo(name = "refresh_token")
    val refreshToken: String? = null
)
