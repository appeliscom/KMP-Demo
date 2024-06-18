package com.appelis.kmp_demo.assortment.uiLogic.filter

import com.appelis.kmp_demo.assortment.domain.model.AssortmentFilterModel
import com.appelis.kmp_demo.assortment.domain.model.AssortmentFilterSession
import com.appelis.kmp_demo.assortment.domain.usecase.ObserveAssortmentFilterSessionUseCase
import com.appelis.kmp_demo.assortment.domain.usecase.SetAssortmentFilterSessionUseCase
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryRoute
import com.appelis.kmp_demo.core.uiArchitecture.SharedViewModel
import com.appelis.kmp_demo.core.uiArchitecture.UiEvent
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.first
import kotlinx.coroutines.launch
import org.koin.core.annotation.Factory

@Factory
class FilterViewModel(
    private val args: Args,
    private val observeAssortmentFilterSessionUseCase: ObserveAssortmentFilterSessionUseCase,
    private val setAssortmentFilterSessionUseCase: SetAssortmentFilterSessionUseCase
): SharedViewModel<FilterViewState, FilterUIEvent>(), FilterComponent.ViewModel {
    private val _viewState: MutableStateFlow<FilterViewState> = MutableStateFlow(FilterViewState())
    override val viewState: StateFlow<FilterViewState> = _viewState

    override fun setFilter(priceFrom: Double?, priceTo: Double?) {
        viewModelScope.launch {
            val currentFilter = observeAssortmentFilterSessionUseCase.execute(args.filterSessionId).first()
            setAssortmentFilterSessionUseCase.execute(
                currentFilter?.copy(
                    filter = currentFilter.filter.copy(priceFrom = priceFrom, priceTo = priceTo)
                )
            )
            sendUiEvent(FilterUIEvent.CloseFilter)
        }
    }

    override fun clearFilter() {
        setAssortmentFilterSessionUseCase.execute(null)
        sendUiEvent(FilterUIEvent.CloseFilter)
    }

    data class Args(val filterSessionId: String)
}

data class FilterViewState(val filterSet: Boolean = false): ViewState

sealed class FilterUIEvent: UiEvent {
    data object CloseFilter: FilterUIEvent()
}