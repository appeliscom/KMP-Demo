package com.appelis.kmp_demo.leaflet_ui_logic.component

import com.appelis.kmp_demo.core.ViewModelComponent
import com.appelis.kmp_demo.leaflet_ui_logic.viewModel.LeafletCollectionViewModel
import com.appelis.kmp_demo.leaflet_ui_logic.viewModel.LeafletCollectionViewState
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.value.Value
import com.appelis.kmp_demo.core.extensions.viewModel
import com.appelis.kmp_demo.leaflet_ui_logic.viewModel.LeafletCollectionUIEvent
import kotlinx.coroutines.flow.Flow

interface LeafletCollectionComponent {
    val viewState: Value<LeafletCollectionViewState>
    val uiEvents: Flow<LeafletCollectionUIEvent>
    val viewModel: ViewModel

    interface ViewModel {
        fun setup(token: String)
        fun closeIn3Seconds()
    }
}

class LeafletCollectionComponentImpl(
    componentContext: ComponentContext
): ViewModelComponent<LeafletCollectionViewModel>(componentContext), LeafletCollectionComponent {
    override val viewModel: LeafletCollectionViewModel by viewModel()
    override val viewState: Value<LeafletCollectionViewState> = viewModel.viewState
    override val uiEvents: Flow<LeafletCollectionUIEvent> = viewModel.uiEvents
}