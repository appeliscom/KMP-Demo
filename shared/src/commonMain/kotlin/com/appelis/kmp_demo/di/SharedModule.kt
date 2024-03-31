package com.appelis.kmp_demo.di

import com.appelis.kmp_demo.Greeting
import com.appelis.kmp_demo.category_ui_logic.di.categoryUILogicModule
import com.appelis.kmp_demo.homescreen_ui_logic.di.homescreenUILogicModule
import com.appelis.kmp_demo.leaflet_ui_logic.di.leafletUILogicModule
import com.appelis.kmp_demo.leaflet_data.di.leafletDataModule
import com.appelis.kmp_demo.leaflet_domain.di.leafletDomainModule
import com.appelis.kmp_demo.navigation.di.navigationModule
import com.appelis.kmp_demo.startup_ui_logic.di.appStartupUILogicModule
import org.koin.core.module.Module
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.module

val sharedModule: Module = module {
    includes(
        navigationModule,
        appStartupUILogicModule,
        homescreenUILogicModule,
        categoryUILogicModule,
        leafletUILogicModule,
        leafletDomainModule,
        leafletDataModule
    )

    singleOf(::Greeting)
}