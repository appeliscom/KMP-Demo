package com.appelis.kmp_demo.extractToModules.navigation.root.di

import com.appelis.kmp_demo.extractToModules.navigation.root.RootSlotNavigator
import com.appelis.kmp_demo.extractToModules.navigation.root.RootSlotNavigatorImpl
import org.koin.core.module.Module
import org.koin.core.module.dsl.factoryOf
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.bind
import org.koin.dsl.module

val rootUILogicModule: Module = module {
    singleOf(::RootSlotNavigatorImpl) bind RootSlotNavigator::class
}