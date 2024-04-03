package com.appelis.kmp_demo.leaflet_ui_logic.viewModel

import com.appelis.kmp_demo.core.SharedViewModel
import com.appelis.kmp_demo.core.UiEvent
import com.appelis.kmp_demo.core.ViewState
import com.appelis.kmp_demo.leaflet_domain.model.LeafletModel
import com.appelis.kmp_demo.leaflet_domain.usecase.GetLeafletsUseCase
import com.appelis.kmp_demo.leaflet_ui_logic.component.LeafletCollectionComponent
import com.arkivanov.decompose.value.MutableValue
import com.arkivanov.decompose.value.Value
import kotlinx.coroutines.CancellationException
import kotlinx.coroutines.delay
import kotlinx.coroutines.launch

class LeafletCollectionViewModel(
    private val getLeafletsUseCase: GetLeafletsUseCase
) : SharedViewModel<LeafletCollectionViewState, LeafletCollectionUIEvent>(),
    LeafletCollectionComponent.ViewModel {
    private val _viewState: MutableValue<LeafletCollectionViewState> =
        MutableValue(LeafletCollectionViewState.Loading)
    override val viewState: Value<LeafletCollectionViewState> = _viewState

    override fun setup(token: String) {
        viewModelScope.launch {
            try {
                val leaflets = getLeafletsUseCase.execute(storeName = "Brno", token = token)
                _viewState.value = LeafletCollectionViewState.Success(leaflets = leaflets)
            } catch (exception: CancellationException) {
                // ignore
            } catch (exception: Exception) {
                _viewState.value = LeafletCollectionViewState.Error(error = exception)
            }
        }
    }

    override fun closeIn3Seconds() {
        viewModelScope.launch {
            delay(3000)
            sendUiEvent(LeafletCollectionUIEvent.CloseScreen)
        }
    }
}

sealed class LeafletCollectionViewState : ViewState {
    data object Loading : LeafletCollectionViewState()
    data class Success(val leaflets: ArrayList<LeafletModel>) : LeafletCollectionViewState()
    data class Error(val error: Exception) : LeafletCollectionViewState()
}

sealed class LeafletCollectionUIEvent : UiEvent {
    data object CloseScreen : LeafletCollectionUIEvent()
}