package com.appelis.kmp_demo.di

import com.appelis.kmp_demo.Greeting
import com.appelis.kmp_demo.homescreen_ui_logic.di.homescreenUILogicModule
import org.koin.core.module.Module
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.module

val sharedModule: Module = module {
    includes(
        homescreenUILogicModule
    )

    singleOf(::Greeting)
}