package com.appelis.kmp_demo.homescreen_ui_logic.di

import com.appelis.kmp_demo.homescreen_ui_logic.HomescreenViewModel
import org.koin.core.module.Module
import org.koin.core.module.dsl.factoryOf
import org.koin.dsl.module

val homescreenUILogicModule: Module = module {
    factoryOf(::HomescreenViewModel)
}