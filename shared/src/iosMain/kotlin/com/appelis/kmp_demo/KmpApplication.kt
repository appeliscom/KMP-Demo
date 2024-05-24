package com.appelis.kmp_demo

import com.appelis.kmp_demo.di.sharedModule
import org.koin.core.context.startKoin
import org.koin.core.module.Module
import org.koin.dsl.KoinAppDeclaration

object KmpApplication {
    fun initSharedModule(
        nativeModule: Module,
        platformModule: Module,
        appDeclaration: KoinAppDeclaration? = null,
    ) {
        // setup DI

        startKoin {
            if (appDeclaration != null) {
                // AppDeclaration allows custom setup from where initDI is called
                appDeclaration()
            }
            modules(nativeModule, platformModule, sharedModule)
        }

        // Do other stuff like analytics, logging, crashlytics etc.
    }
}

