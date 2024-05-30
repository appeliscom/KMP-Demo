package com.appelis.kmp_demo.startup.viewModel

import com.appelis.kmp_demo.core.uiArchitecture.SharedViewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import com.appelis.kmp_demo.startup.component.AppStartupComponent
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch
import org.koin.core.annotation.Factory

@Factory
class AppStartupViewModel: SharedViewModel<AppStartupViewState, Nothing>(), AppStartupComponent.ViewModel {
    private val _viewState: MutableStateFlow<AppStartupViewState> = MutableStateFlow(AppStartupViewState.Loading)
    override val viewState: StateFlow<AppStartupViewState> = _viewState

    override fun start() {
        viewModelScope.launch {
            delay(1000)
            _viewState.value = AppStartupViewState.Success
        }
    }
}

sealed class AppStartupViewState: ViewState {
    data object Loading: AppStartupViewState()
    data object Success: AppStartupViewState()
    data class Error(val exception: Exception): AppStartupViewState()
}