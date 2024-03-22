package com.appelis.kmp_demo.extractToModules.homescreen

import kotlinx.coroutines.flow.StateFlow

interface HomescreenScreen {
    val viewState: StateFlow<HomescreenViewState>
}