package com.appelis.kmp_demo.extractToModules.features.appStartup

import com.arkivanov.decompose.value.Value
import kotlinx.coroutines.flow.StateFlow

interface AppStartupScreen {
    val viewState: Value<AppStartupViewState>
    val actions: Actions
    interface Actions {
        fun finishStartup()
    }
}
