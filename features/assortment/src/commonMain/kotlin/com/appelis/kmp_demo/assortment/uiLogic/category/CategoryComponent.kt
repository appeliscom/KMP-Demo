package com.appelis.kmp_demo.assortment.uiLogic.category

import com.appelis.kmp_demo.core.uiArchitecture.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.arkivanov.decompose.ComponentContext
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.parameter.parametersOf

interface CategoryComponent {
    val viewModel: ViewModel

    interface ViewModel {
        val viewState: StateFlow<CategoryViewState>
    }
}

class CategoryComponentImpl(
    componentContext: ComponentContext,
    id: String
) : ViewModelComponent<CategoryViewModel>(componentContext), CategoryComponent {
    override val viewModel: CategoryViewModel by viewModel(parameters = {
        parametersOf(
            CategoryViewModel.Args(id)
        )
    })
}