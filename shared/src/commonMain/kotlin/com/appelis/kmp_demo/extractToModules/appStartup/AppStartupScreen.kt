package com.appelis.kmp_demo.extractToModules.appStartup

import kotlinx.coroutines.flow.StateFlow

interface AppStartupScreen {
    val viewState: StateFlow<AppStartupViewState>
}