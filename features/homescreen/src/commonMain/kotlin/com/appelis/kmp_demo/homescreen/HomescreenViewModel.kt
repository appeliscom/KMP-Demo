package com.appelis.kmp_demo.homescreen

import com.appelis.kmp_demo.core.uiArchitecture.SharedViewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.annotation.Factory

@Factory
class HomescreenViewModel(

): SharedViewModel<HomescreenViewState, Nothing>(), HomescreenComponent.ViewModel {
    private val _viewState:  MutableStateFlow<HomescreenViewState> = MutableStateFlow(
        HomescreenViewState()
    )
    override val viewState: StateFlow<HomescreenViewState> = _viewState
}
class HomescreenViewState: ViewState