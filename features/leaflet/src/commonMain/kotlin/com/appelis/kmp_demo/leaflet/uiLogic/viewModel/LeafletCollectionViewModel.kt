package com.appelis.kmp_demo.leaflet.uiLogic.viewModel

import com.appelis.kmp_demo.core.uiArchitecture.SharedViewModel
import com.appelis.kmp_demo.core.uiArchitecture.UiEvent
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import com.appelis.kmp_demo.leaflet.uiLogic.component.LeafletCollectionComponent
import com.appelis.kmp_demo.leaflet_domain.model.LeafletModel
import com.appelis.kmp_demo.leaflet_domain.usecase.GetLeafletsUseCase
import kotlinx.coroutines.CancellationException
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch
import org.koin.core.annotation.Factory

@Factory
class LeafletCollectionViewModel(
    private val getLeafletsUseCase: GetLeafletsUseCase
) : SharedViewModel<LeafletCollectionViewState, LeafletCollectionUIEvent>(),
    LeafletCollectionComponent.ViewModel {
    private val _viewState: MutableStateFlow<LeafletCollectionViewState> =
        MutableStateFlow(LeafletCollectionViewState.Loading)
    override val viewState: StateFlow<LeafletCollectionViewState> = _viewState

    override fun setup() {
        viewModelScope.launch {
            try {
                val leaflets = getLeafletsUseCase.execute(storeName = "Brno")
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