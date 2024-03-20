package com.appelis.kmp_demo.di

import org.koin.core.context.startKoin
import org.koin.core.module.Module
import org.koin.dsl.KoinAppDeclaration

internal object DI {
    fun initDI(
        nativeModule: Module,
        appDeclaration: KoinAppDeclaration?) {
        startKoin {
            if (appDeclaration != null) {
                // AppDeclaration allows custom setup from where initDI is called
                appDeclaration()
            }
            modules(nativeModule, sharedModule)
        }
    }
}