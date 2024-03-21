package com.appelis.kmp_demo.extractToModules.appStartup

import com.appelis.kmp_demo.core.SharedViewModel
import kotlinx.coroutines.flow.MutableStateFlow


class AppStartupViewModel(

): SharedViewModel<AppStartupViewState, Nothing>() {
    override val viewState: MutableStateFlow<AppStartupViewState> = MutableStateFlow(
        AppStartupViewState()
    )

    // TODO: other logic
}