package com.appelis.kmp_demo

import com.appelis.kmp_demo.di.sharedModule
import org.koin.core.context.startKoin
import org.koin.core.module.Module
import org.koin.dsl.KoinAppDeclaration
import io.github.aakira.napier.DebugAntilog
import io.github.aakira.napier.Napier

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
        Napier.base(DebugAntilog())
        // Do other stuff like analytics, logging, crashlytics etc.
    }
}

