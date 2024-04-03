package com.appelis.kmp_demo.category_ui_logic.di

import com.appelis.kmp_demo.category_ui_logic.CategoryViewModel
import org.koin.core.module.Module
import org.koin.core.module.dsl.factoryOf
import org.koin.dsl.module

val categoryUILogicModule: Module = module {
    factoryOf(::CategoryViewModel)
}