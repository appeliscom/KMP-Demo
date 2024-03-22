package com.appelis.kmp_demo.extractToModules.homescreen

import com.appelis.kmp_demo.core.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.arkivanov.decompose.ComponentContext
import kotlinx.coroutines.flow.StateFlow

internal class HomescreenComponent(
    componentContext: ComponentContext
) : ViewModelComponent<HomescreenViewModel>(componentContext), HomescreenScreen {
    override val viewModel: HomescreenViewModel by viewModel()
    override val viewState: StateFlow<HomescreenViewState> = viewModel.viewState
}