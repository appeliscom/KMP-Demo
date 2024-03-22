package com.appelis.kmp_demo.di

import com.appelis.kmp_demo.Greeting
import com.appelis.kmp_demo.extractToModules.appStartup.di.appStartupUILogicModule
import com.appelis.kmp_demo.extractToModules.homescreen.di.homescreenUILogicModule
import com.appelis.kmp_demo.extractToModules.mainAppFlow.di.mainAppFlowModule
import com.appelis.kmp_demo.extractToModules.root.di.rootUILogicModule
import org.koin.core.module.Module
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.module

val sharedModule: Module = module {
    includes(
        rootUILogicModule,
        appStartupUILogicModule,
        homescreenUILogicModule,
        mainAppFlowModule
    )

    singleOf(::Greeting)
}