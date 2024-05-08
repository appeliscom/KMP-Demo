package com.appelis.kmp_demo.startup.component

import com.appelis.kmp_demo.core.uiArchitecture.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.appelis.kmp_demo.startup.viewModel.AppStartupViewModel
import com.appelis.kmp_demo.startup.viewModel.AppStartupViewState
import com.arkivanov.decompose.ComponentContext
import kotlinx.coroutines.flow.StateFlow

interface AppStartupComponent {
    val viewModel: ViewModel

    interface ViewModel {
        val viewState: StateFlow<AppStartupViewState>
        fun finishStartup()
    }
}

class AppStartupComponentImpl(
    componentContext: ComponentContext
): ViewModelComponent<AppStartupViewModel>(componentContext), AppStartupComponent {
    override val viewModel: AppStartupViewModel by viewModel()
}