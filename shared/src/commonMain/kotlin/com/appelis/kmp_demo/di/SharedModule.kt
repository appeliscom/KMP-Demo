package com.appelis.kmp_demo.di

import com.appelis.kmp_demo.Greeting
import com.appelis.kmp_demo.category_ui_logic.di.categoryUILogicModule
import com.appelis.kmp_demo.homescreen_ui_logic.di.homescreenUILogicModule
import com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow.di.mainAppFlowModule
import com.appelis.kmp_demo.extractToModules.navigation.root.di.rootUILogicModule
import com.appelis.kmp_demo.startup_ui_logic.di.appStartupUILogicModule
import org.koin.core.module.Module
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.module

val sharedModule: Module = module {
    includes(
        rootUILogicModule,
        appStartupUILogicModule,
        homescreenUILogicModule,
        categoryUILogicModule,
        mainAppFlowModule
    )

    singleOf(::Greeting)
}