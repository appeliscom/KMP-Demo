package com.appelis.kmp_demo.extractToModules.features.homescreen

import com.appelis.kmp_demo.core.SharedViewModel
import com.appelis.kmp_demo.core.ViewState
import com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow.MainFlowNavigator
import com.arkivanov.decompose.value.MutableValue
import com.arkivanov.decompose.value.Value
import kotlinx.coroutines.flow.MutableStateFlow

internal class HomescreenViewModel(
    private val mainFlowNavigator: MainFlowNavigator
): SharedViewModel<HomescreenViewState, Nothing>(), HomescreenScreen.Actions {
    private val _viewState:  MutableValue<HomescreenViewState> = MutableValue(
        HomescreenViewState()
    )
    override val viewState: Value<HomescreenViewState> = _viewState

    override fun navigateToCategory(id: String) {
        mainFlowNavigator.navigateToCategory(id)
    }
}
class HomescreenViewState: ViewState