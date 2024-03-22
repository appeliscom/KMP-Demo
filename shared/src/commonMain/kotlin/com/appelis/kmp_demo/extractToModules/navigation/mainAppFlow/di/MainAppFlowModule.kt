package com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow.di

import com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow.MainFlowNavigator
import com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow.MainFlowNavigatorImpl
import org.koin.core.module.Module
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.bind
import org.koin.dsl.module

val mainAppFlowModule: Module = module {
    singleOf(::MainFlowNavigatorImpl) bind MainFlowNavigator::class
}