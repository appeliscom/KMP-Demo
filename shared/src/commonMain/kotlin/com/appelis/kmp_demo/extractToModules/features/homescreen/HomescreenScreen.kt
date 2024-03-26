package com.appelis.kmp_demo.extractToModules.features.homescreen

import kotlinx.coroutines.flow.StateFlow

interface HomescreenScreen {
    val viewState: StateFlow<HomescreenViewState>
    val actions: Actions

    interface Actions {
        fun navigateToCategory(id: String)
    }
}