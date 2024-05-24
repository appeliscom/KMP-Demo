package localDB

import androidx.room.Room
import androidx.sqlite.driver.bundled.BundledSQLiteDriver
import com.appelis.kmp_demo.core.localDB.database.AppDatabase
import com.appelis.kmp_demo.core.localDB.database.instantiateImpl
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.IO
import platform.Foundation.NSHomeDirectory

fun getDatabase(): AppDatabase {
    val dbFilePath =  NSHomeDirectory() + "/Documents/room.db"
    return Room.databaseBuilder<AppDatabase>(
        name = dbFilePath,
        factory = { AppDatabase::class.instantiateImpl() }
    )
        .fallbackToDestructiveMigration(false)
        .setDriver(BundledSQLiteDriver())
        .setQueryCoroutineContext(Dispatchers.IO)
        .build()
}