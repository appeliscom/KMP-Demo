package com.appelis.kmp_demo.homescreen_ui_logic

import com.arkivanov.decompose.value.Value

interface HomescreenComponent {
    val viewState: Value<HomescreenViewState>
    val actions: Actions

    interface Actions {
        fun navigateToCategory(id: String)
    }
}