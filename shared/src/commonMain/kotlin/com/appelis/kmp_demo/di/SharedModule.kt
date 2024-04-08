package com.appelis.kmp_demo.di

import com.appelis.kmp_demo.Greeting
import com.appelis.kmp_demo.category_ui_logic.di.categoryUILogicModule
import com.appelis.kmp_demo.homescreen_ui_logic.di.homescreenUILogicModule
import com.appelis.kmp_demo.leaflet.di.LeafletModule
import com.appelis.kmp_demo.navigation.di.NavigationModule
import com.appelis.kmp_demo.startup.di.AppStartupModule
import org.koin.core.module.Module
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.module
import org.koin.ksp.generated.module

val sharedModule: Module = module {
    includes(
        NavigationModule().module,
        AppStartupModule().module,
        homescreenUILogicModule,
        categoryUILogicModule,
        LeafletModule().module
    )

    singleOf(::Greeting)
}