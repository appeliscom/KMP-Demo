package com.appelis.kmp_demo.extractToModules.features.category

import com.arkivanov.decompose.value.Value
import kotlinx.coroutines.flow.StateFlow

interface CategoryScreen {
    val viewState: Value<CategoryViewState>
}