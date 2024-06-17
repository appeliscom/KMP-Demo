package com.appelis.kmp_demo.assortment.uiLogic.filter

import com.appelis.kmp_demo.core.uiArchitecture.SharedViewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.annotation.Factory

@Factory
class FilterViewModel: SharedViewModel<FilterViewState, Nothing>(), FilterComponent.ViewModel {
    private val _viewState: MutableStateFlow<FilterViewState> = MutableStateFlow(FilterViewState())
    override val viewState: StateFlow<FilterViewState> = _viewState
}

data class FilterViewState(val filterSet: Boolean = false): ViewState