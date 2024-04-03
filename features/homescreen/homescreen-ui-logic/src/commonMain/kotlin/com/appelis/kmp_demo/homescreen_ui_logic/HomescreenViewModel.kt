package com.appelis.kmp_demo.homescreen_ui_logic

import com.appelis.kmp_demo.core.SharedViewModel
import com.appelis.kmp_demo.core.ViewState
import com.arkivanov.decompose.value.MutableValue
import com.arkivanov.decompose.value.Value

class HomescreenViewModel(

): SharedViewModel<HomescreenViewState, Nothing>(), HomescreenComponent.ViewModel {
    private val _viewState:  MutableValue<HomescreenViewState> = MutableValue(
        HomescreenViewState()
    )
    override val viewState: Value<HomescreenViewState> = _viewState
}
class HomescreenViewState: ViewState