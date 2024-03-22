package com.appelis.kmp_demo.extractToModules.homescreen

import com.appelis.kmp_demo.core.SharedViewModel
import com.appelis.kmp_demo.core.ViewState
import kotlinx.coroutines.flow.MutableStateFlow

class HomescreenViewModel(

): SharedViewModel<HomescreenViewState, Nothing>() {
    override val viewState: MutableStateFlow<HomescreenViewState> = MutableStateFlow(HomescreenViewState())

}

class HomescreenViewState: ViewState