package com.appelis.kmp_demo.extractToModules.features.category

import com.appelis.kmp_demo.core.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.arkivanov.decompose.ComponentContext
import kotlinx.coroutines.flow.StateFlow

internal class CategoryComponent(
    componentContext: ComponentContext
): ViewModelComponent<CategoryViewModel>(componentContext), CategoryScreen  {
    override val viewModel: CategoryViewModel by viewModel()
    override val viewState: StateFlow<CategoryViewState> = viewModel.viewState
}