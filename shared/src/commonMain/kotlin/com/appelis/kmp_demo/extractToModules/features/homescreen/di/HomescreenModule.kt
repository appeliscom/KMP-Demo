package com.appelis.kmp_demo.extractToModules.features.homescreen.di

import com.appelis.kmp_demo.extractToModules.features.homescreen.HomescreenViewModel
import org.koin.core.module.Module
import org.koin.core.module.dsl.factoryOf
import org.koin.dsl.module

val homescreenUILogicModule: Module = module {
    factoryOf(::HomescreenViewModel)
}