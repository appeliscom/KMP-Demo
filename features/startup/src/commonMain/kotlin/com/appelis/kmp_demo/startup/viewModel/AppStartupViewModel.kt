package com.appelis.kmp_demo.startup.viewModel

import com.appelis.kmp_demo.core.SharedViewModel
import com.appelis.kmp_demo.core.ViewState
import com.appelis.kmp_demo.startup.component.AppStartupComponent
import com.arkivanov.decompose.value.MutableValue
import com.arkivanov.decompose.value.Value
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.annotation.Factory

@Factory
class AppStartupViewModel(
): SharedViewModel<AppStartupViewState, Nothing>(), AppStartupComponent.ViewModel {
    private val _viewState: MutableStateFlow<AppStartupViewState> = MutableStateFlow(AppStartupViewState())
    override val viewState: StateFlow<AppStartupViewState> = _viewState

    override fun finishStartup() {
    }
}

class AppStartupViewState: ViewState {
}