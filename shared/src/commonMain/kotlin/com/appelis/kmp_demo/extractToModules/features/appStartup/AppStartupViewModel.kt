package com.appelis.kmp_demo.extractToModules.features.appStartup

import com.appelis.kmp_demo.core.SharedViewModel
import com.appelis.kmp_demo.extractToModules.navigation.root.RootSlotNavigator
import com.arkivanov.decompose.value.MutableValue
import com.arkivanov.decompose.value.Value
import kotlinx.coroutines.flow.MutableStateFlow


class AppStartupViewModel(
    private val navigator: RootSlotNavigator
): SharedViewModel<AppStartupViewState, Nothing>(), AppStartupScreen.Actions {
    private val _viewState: MutableValue<AppStartupViewState> = MutableValue(AppStartupViewState())
    override val viewState: Value<AppStartupViewState> = _viewState

    override fun finishStartup() {
       navigator.showMainAppNavigation()
    }
}