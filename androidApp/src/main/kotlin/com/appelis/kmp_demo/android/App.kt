package com.appelis.kmp_demo.android

import android.app.Application
import com.appelis.kmp_demo.KmpApplication
import com.appelis.kmp_demo.android.di.platformModule
import org.koin.android.ext.koin.androidContext

class App : Application() {
    override fun onCreate() {
        super.onCreate()
        initializeKmp()
    }

    private fun initializeKmp() {
        KmpApplication.initSharedModule(
            platformModule = platformModule,
        ) {
            androidContext(this@App)
        }
    }
}