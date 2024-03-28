package com.appelis.kmp_demo.category_ui_logic

import com.appelis.kmp_demo.core.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.value.Value
import org.koin.core.parameter.parametersOf

class CategoryComponentImpl(
    componentContext: ComponentContext,
    id: String
) : ViewModelComponent<CategoryViewModel>(componentContext), CategoryComponent {
    override val viewModel: CategoryViewModel by viewModel(parameters = {
        parametersOf(
            CategoryViewModel.Args(id)
        )
    })
    override val viewState: Value<CategoryViewState> = viewModel.viewState
}