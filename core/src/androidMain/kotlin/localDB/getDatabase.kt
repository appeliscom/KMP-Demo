package localDB

import android.content.Context
import androidx.room.Room
import androidx.sqlite.driver.bundled.BundledSQLiteDriver
import com.appelis.kmp_demo.core.localDB.database.LocalDatabase

fun getDatabase(ctx: Context): LocalDatabase {
    val appContext = ctx.applicationContext
    val dbFile = appContext.getDatabasePath("localDatabase.db")
    return Room.databaseBuilder<LocalDatabase>(
        context = appContext,
        name = dbFile.absolutePath
    )
        .setDriver(BundledSQLiteDriver())
        .fallbackToDestructiveMigration(false)
        .build()
}