package com.appelis.kmp_demo.leaflet.uiLogic.component

import com.appelis.kmp_demo.core.ViewModelComponent
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.value.Value
import com.appelis.kmp_demo.core.extensions.viewModel
import com.appelis.kmp_demo.leaflet.uiLogic.viewModel.LeafletCollectionUIEvent
import com.appelis.kmp_demo.leaflet.uiLogic.viewModel.LeafletCollectionViewModel
import com.appelis.kmp_demo.leaflet.uiLogic.viewModel.LeafletCollectionViewState
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.StateFlow

interface LeafletCollectionComponent {
    val viewModel: ViewModel

    interface ViewModel {
        val viewState: StateFlow<LeafletCollectionViewState>
        val uiEvents: Flow<LeafletCollectionUIEvent>

        fun setup(token: String)
        fun closeIn3Seconds()
    }
}

class LeafletCollectionComponentImpl(
    componentContext: ComponentContext
): ViewModelComponent<LeafletCollectionViewModel>(componentContext), LeafletCollectionComponent {
    override val viewModel: LeafletCollectionViewModel by viewModel()
}