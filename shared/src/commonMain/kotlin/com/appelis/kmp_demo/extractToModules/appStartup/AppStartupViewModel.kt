package com.appelis.kmp_demo.extractToModules.appStartup

import com.appelis.kmp_demo.core.SharedViewModel
import com.appelis.kmp_demo.extractToModules.root.RootSlotNavigator
import kotlinx.coroutines.flow.MutableStateFlow


class AppStartupViewModel(
    private val navigator: RootSlotNavigator
): SharedViewModel<AppStartupViewState, Nothing>(), AppStartupScreen.Actions {
    override val viewState: MutableStateFlow<AppStartupViewState> = MutableStateFlow(
        AppStartupViewState()
    )

    override fun finishStartup() {
       navigator.showMainAppNavigation()
    }
}