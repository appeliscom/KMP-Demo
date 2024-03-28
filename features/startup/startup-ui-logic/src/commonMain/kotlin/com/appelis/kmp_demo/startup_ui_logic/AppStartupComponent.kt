package com.appelis.kmp_demo.startup_ui_logic

import com.arkivanov.decompose.value.Value

interface AppStartupComponent {
    val viewState: Value<AppStartupViewState>
    val actions: Actions
    interface Actions {
        fun finishStartup()
    }
}
