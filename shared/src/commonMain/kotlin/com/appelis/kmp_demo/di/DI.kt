package com.appelis.kmp_demo.di

import org.koin.core.context.startKoin
import org.koin.core.module.Module
import org.koin.dsl.KoinAppDeclaration

object DI {
    fun initDI(nativeModule: Module, appDeclaration: KoinAppDeclaration = {}) {
        startKoin {
            appDeclaration()
            modules(nativeModule, sharedModule)
        }
    }
}