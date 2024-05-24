package localDB

import androidx.room.Room
import androidx.room.RoomDatabase
import androidx.sqlite.driver.NativeSQLiteDriver
import androidx.sqlite.driver.bundled.BundledSQLiteDriver
import com.appelis.kmp_demo.core.localDB.database.LocalDatabase
import com.appelis.kmp_demo.core.localDB.database.instantiateImpl
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.IO
import platform.Foundation.NSHomeDirectory
import platform.Foundation.NSURL

fun getDatabase(): LocalDatabase {
    val dbFilePath =  NSHomeDirectory() + "/Documents/room.db"
    return Room.databaseBuilder<LocalDatabase>(
        name = dbFilePath,
        factory = { LocalDatabase::class.instantiateImpl() }
    )
        .fallbackToDestructiveMigration(false)
        .setDriver(BundledSQLiteDriver())
        .setQueryCoroutineContext(Dispatchers.IO)
        .build()
}