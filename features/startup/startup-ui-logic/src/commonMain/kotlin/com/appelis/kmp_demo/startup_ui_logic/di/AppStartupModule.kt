package com.appelis.kmp_demo.startup_ui_logic.di

import com.appelis.kmp_demo.startup_ui_logic.viewModel.AppStartupViewModel
import org.koin.core.module.Module
import org.koin.core.module.dsl.factoryOf
import org.koin.dsl.module

val appStartupUILogicModule: Module = module {
    factoryOf(::AppStartupViewModel)
}