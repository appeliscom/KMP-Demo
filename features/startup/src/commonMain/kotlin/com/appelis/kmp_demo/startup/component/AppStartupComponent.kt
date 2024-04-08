package com.appelis.kmp_demo.startup.component

import com.appelis.kmp_demo.core.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.appelis.kmp_demo.startup.viewModel.AppStartupViewModel
import com.appelis.kmp_demo.startup.viewModel.AppStartupViewState
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.value.Value

interface AppStartupComponent {
    val viewModel: ViewModel

    interface ViewModel {
        val viewState: Value<AppStartupViewState>
        fun finishStartup()
    }
}

class AppStartupComponentImpl(
    componentContext: ComponentContext
): ViewModelComponent<AppStartupViewModel>(componentContext), AppStartupComponent {
    override val viewModel: AppStartupViewModel by viewModel()
}