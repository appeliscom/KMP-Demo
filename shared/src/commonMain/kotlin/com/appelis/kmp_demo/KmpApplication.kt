package com.appelis.kmp_demo

import com.appelis.kmp_demo.core.network.ApiType
import com.appelis.kmp_demo.core.network.ApiUrlProvider
import com.appelis.kmp_demo.core.network.GrpcConnection
import com.appelis.kmp_demo.di.DI
import org.koin.core.module.Module
import org.koin.dsl.KoinAppDeclaration

object KmpApplication {
    fun initSharedModule(
        nativeModule: Module,
        platformModule: Module,
        appDeclaration: KoinAppDeclaration? = null,
    ) {
        // setup DI
        DI.initDI(
            nativeModule,
            platformModule,
            appDeclaration
        )

        // Do other stuff like analytics, logging, crashlytics etc.
    }
}

