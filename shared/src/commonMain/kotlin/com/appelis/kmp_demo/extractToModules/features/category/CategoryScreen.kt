package com.appelis.kmp_demo.extractToModules.features.category

import kotlinx.coroutines.flow.StateFlow

interface CategoryScreen {
    val viewState: StateFlow<CategoryViewState>
}