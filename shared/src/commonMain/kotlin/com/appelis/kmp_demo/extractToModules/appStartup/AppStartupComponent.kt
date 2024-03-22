package com.appelis.kmp_demo.extractToModules.appStartup

import com.appelis.kmp_demo.core.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.arkivanov.decompose.ComponentContext
import kotlinx.coroutines.flow.StateFlow

internal class AppStartupComponent(
    componentContext: ComponentContext
): ViewModelComponent<AppStartupViewModel>(componentContext), AppStartupScreen {
    override val viewModel: AppStartupViewModel by viewModel()
    override val viewState: StateFlow<AppStartupViewState> = viewModel.viewState
    override val actions: AppStartupScreen.Actions = viewModel
}