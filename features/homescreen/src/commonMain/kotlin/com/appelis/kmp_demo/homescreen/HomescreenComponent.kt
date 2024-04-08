package com.appelis.kmp_demo.homescreen

import com.appelis.kmp_demo.core.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.value.Value

interface HomescreenComponent {
    val viewModel: ViewModel

    interface ViewModel {
        val viewState: Value<HomescreenViewState>
    }
}

class HomescreenComponentImpl(
    componentContext: ComponentContext
) : ViewModelComponent<HomescreenViewModel>(componentContext), HomescreenComponent {
    override val viewModel: HomescreenViewModel by viewModel()
}