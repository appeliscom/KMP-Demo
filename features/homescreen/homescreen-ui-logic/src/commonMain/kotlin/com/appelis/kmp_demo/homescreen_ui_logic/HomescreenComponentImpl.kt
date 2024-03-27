package com.appelis.kmp_demo.homescreen_ui_logic

import com.appelis.kmp_demo.core.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.value.Value

class HomescreenComponentImpl(
    componentContext: ComponentContext
) : ViewModelComponent<HomescreenViewModel>(componentContext), HomescreenComponent {
    override val viewModel: HomescreenViewModel by viewModel()
    override val viewState: Value<HomescreenViewState> = viewModel.viewState
    override val actions: HomescreenComponent.Actions = viewModel
}