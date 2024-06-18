package com.appelis.kmp_demo.assortment.uiLogic.filter

import com.appelis.kmp_demo.assortment.domain.model.AssortmentFilterModel
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryViewModel
import com.appelis.kmp_demo.core.extensions.viewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewModelComponent
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import com.arkivanov.decompose.ComponentContext
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.parameter.parametersOf

interface FilterComponent {
    val viewModel: ViewModel

    interface ViewModel {
        val viewState: StateFlow<ViewState>
        val uiEvents: Flow<FilterUIEvent>

        fun setFilter(priceFrom: Double?, priceTo: Double?)
        fun clearFilter()
    }
}

class FilterComponentImpl(
    componentContext: ComponentContext,
    private val filterSessionId: String
) : ViewModelComponent<FilterViewModel>(componentContext), FilterComponent {
    override val viewModel: FilterViewModel by viewModel(parameters = {
        parametersOf(
            FilterViewModel.Args(filterSessionId)
        )
    })
}