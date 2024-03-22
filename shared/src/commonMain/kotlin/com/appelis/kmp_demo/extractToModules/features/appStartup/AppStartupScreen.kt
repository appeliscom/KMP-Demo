package com.appelis.kmp_demo.extractToModules.features.appStartup

import kotlinx.coroutines.flow.StateFlow

interface AppStartupScreen {
    val viewState: StateFlow<AppStartupViewState>
    val actions: Actions
    interface Actions {
        fun finishStartup()
    }
}
