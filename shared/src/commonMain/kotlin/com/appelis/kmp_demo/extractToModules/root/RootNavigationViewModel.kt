package com.appelis.kmp_demo.extractToModules.root

import com.appelis.kmp_demo.core.SharedViewModel
import kotlinx.coroutines.flow.MutableStateFlow

internal class RootNavigationViewModel :
    SharedViewModel<RootNavigationViewState, Nothing>() {
    override val viewState: MutableStateFlow<RootNavigationViewState> = MutableStateFlow(RootNavigationViewState())
}