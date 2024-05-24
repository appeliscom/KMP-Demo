package com.appelis.kmp_demo.core.localDB.database

import androidx.room.Database
import androidx.room.RoomDatabase
import com.appelis.kmp_demo.core.localDB.dao.DeviceSettingsDao
import com.appelis.kmp_demo.core.localDB.entity.DeviceSettingsRoomDTO

@Database(
    entities = [DeviceSettingsRoomDTO::class],
    version = 3
)
abstract class AppDatabase: RoomDatabase() {
    abstract fun deviceSettingsDao(): DeviceSettingsDao
}