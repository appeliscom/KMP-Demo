package com.appelis.kmp_demo.leaflet_ui_logic.di

import com.appelis.kmp_demo.leaflet_ui_logic.viewModel.LeafletCollectionViewModel
import org.koin.core.module.Module
import org.koin.core.module.dsl.factoryOf
import org.koin.dsl.module

val leafletUILogicModule: Module = module {
    factoryOf(::LeafletCollectionViewModel)
}