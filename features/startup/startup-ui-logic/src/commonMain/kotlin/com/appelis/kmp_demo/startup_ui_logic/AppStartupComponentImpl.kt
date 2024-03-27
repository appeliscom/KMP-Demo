package com.appelis.kmp_demo.startup_ui_logic

import com.appelis.kmp_demo.core.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.value.Value

class AppStartupComponentImpl(
    componentContext: ComponentContext
): ViewModelComponent<AppStartupViewModel>(componentContext), AppStartupComponent {
    override val viewModel: AppStartupViewModel by viewModel()
    override val viewState: Value<AppStartupViewState> = viewModel.viewState
    override val actions: AppStartupComponent.Actions = viewModel
}