package com.appelis.kmp_demo.di

import com.appelis.kmp_demo.Greeting
import com.appelis.kmp_demo.assortment.di.AssortmentModule
import com.appelis.kmp_demo.homescreen.di.HomescreenModule
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
        HomescreenModule().module,
        AssortmentModule().module,
        LeafletModule().module
    )

    singleOf(::Greeting)
}