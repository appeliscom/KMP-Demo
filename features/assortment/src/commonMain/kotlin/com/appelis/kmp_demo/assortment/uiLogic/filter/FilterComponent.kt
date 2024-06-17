package com.appelis.kmp_demo.assortment.uiLogic.filter

import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryViewModel
import com.appelis.kmp_demo.core.extensions.viewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewModelComponent
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import com.arkivanov.decompose.ComponentContext
import kotlinx.coroutines.flow.StateFlow

interface FilterComponent {
    interface ViewModel {
        val viewState: StateFlow<ViewState>
    }
}

class FilterComponentImpl(
    componentContext: ComponentContext
) : ViewModelComponent<FilterViewModel>(componentContext), FilterComponent {
    override val viewModel: FilterViewModel by viewModel()
}