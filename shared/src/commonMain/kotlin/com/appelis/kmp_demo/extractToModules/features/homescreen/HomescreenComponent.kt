package com.appelis.kmp_demo.extractToModules.features.homescreen

import com.appelis.kmp_demo.core.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.value.Value
import kotlinx.coroutines.flow.StateFlow

internal class HomescreenComponent(
    componentContext: ComponentContext
) : ViewModelComponent<HomescreenViewModel>(componentContext), HomescreenScreen {
    override val viewModel: HomescreenViewModel by viewModel()
    override val viewState: Value<HomescreenViewState> = viewModel.viewState
    override val actions: HomescreenScreen.Actions = viewModel
}