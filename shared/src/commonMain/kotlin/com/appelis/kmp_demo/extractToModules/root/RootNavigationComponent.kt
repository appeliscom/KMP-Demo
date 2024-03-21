package com.appelis.kmp_demo.extractToModules.root

import com.appelis.kmp_demo.core.ViewModelComponent
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.slot.ChildSlot
import kotlinx.coroutines.flow.StateFlow
import com.appelis.kmp_demo.core.extensions.viewModel
import org.koin.core.component.inject

internal class RootNavigationComponent(
    componentContext: ComponentContext
) : ViewModelComponent<RootNavigationViewModel>(componentContext), RootNavigation {
    private val rootNavigator: RootSlotNavigator by inject()

    override val viewModel: RootNavigationViewModel by viewModel()
    override val slot: StateFlow<ChildSlot<RootDestination, RootEntry>> = rootNavigator.createSlot(componentContext)
}