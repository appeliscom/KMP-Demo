package com.appelis.kmp_demo.extractToModules.features.category.di

import com.appelis.kmp_demo.extractToModules.features.category.CategoryViewModel
import org.koin.core.module.Module
import org.koin.core.module.dsl.factoryOf
import org.koin.dsl.module

val categoryUILogicModule: Module = module {
    factoryOf(::CategoryViewModel)
}