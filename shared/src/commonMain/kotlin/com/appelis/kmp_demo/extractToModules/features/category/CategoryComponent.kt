package com.appelis.kmp_demo.extractToModules.features.category

import com.appelis.kmp_demo.core.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.value.Value
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.parameter.parametersOf

internal class CategoryComponent(
    componentContext: ComponentContext,
    id: String
) : ViewModelComponent<CategoryViewModel>(componentContext), CategoryScreen {
    override val viewModel: CategoryViewModel by viewModel(parameters = {
        parametersOf(
            CategoryViewModel.Args(id)
        )
    })
    override val viewState: Value<CategoryViewState> = viewModel.viewState
}