package com.appelis.kmp_demo.extractToModules.features.homescreen

import com.arkivanov.decompose.value.Value

interface HomescreenScreen {
    val viewState: Value<HomescreenViewState>
    val actions: Actions

    interface Actions {
        fun navigateToCategory(id: String)
    }
}