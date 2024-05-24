package localDB

import android.content.Context
import androidx.room.Room
import androidx.sqlite.driver.bundled.BundledSQLiteDriver
import com.appelis.kmp_demo.core.localDB.database.AppDatabase

fun getDatabase(ctx: Context): AppDatabase {
    val appContext = ctx.applicationContext
    val dbFile = appContext.getDatabasePath("localDatabase.db")
    return Room.databaseBuilder<AppDatabase>(
        context = appContext,
        name = dbFile.absolutePath
    )
        .setDriver(BundledSQLiteDriver())
        .fallbackToDestructiveMigration(true)
        .build()
}