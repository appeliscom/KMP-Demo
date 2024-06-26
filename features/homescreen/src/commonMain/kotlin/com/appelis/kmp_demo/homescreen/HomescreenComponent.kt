package com.appelis.kmp_demo.homescreen

import com.appelis.kmp_demo.core.uiArchitecture.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.arkivanov.decompose.ComponentContext
import kotlinx.coroutines.flow.StateFlow

interface HomescreenComponent {
    val viewModel: ViewModel

    interface ViewModel {
        val viewState: StateFlow<HomescreenViewState>
    }
}

class HomescreenComponentImpl(
    componentContext: ComponentContext
) : ViewModelComponent<HomescreenViewModel>(componentContext), HomescreenComponent {
    override val viewModel: HomescreenViewModel by viewModel()
}