package com.appelis.kmp_demo.android

import android.app.Application
import com.appelis.kmp_demo.KmpApplication
import com.appelis.kmp_demo.android.di.nativeModule
import com.appelis.kmp_demo.di.makePlatformGrpcClientModule
import com.appelis.kmp_demo.leaflet_data.LeafletSuspendClientImpl
import org.koin.android.ext.koin.androidContext

class App : Application() {
    override fun onCreate() {
        super.onCreate()
        initializeKmp()
    }

    private fun initializeKmp() {
        KmpApplication.initSharedModule(
            nativeModule = nativeModule,
            platformGrpcClientModule = makePlatformGrpcClientModule(
                LeafletSuspendClientImpl()
            )
        ) {
            androidContext(this@App)
        }
    }
}