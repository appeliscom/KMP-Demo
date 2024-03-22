package com.appelis.kmp_demo.extractToModules.navigation.root

import com.appelis.kmp_demo.core.ViewModelComponent
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.slot.ChildSlot
import kotlinx.coroutines.flow.StateFlow
import com.appelis.kmp_demo.core.extensions.viewModel
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

internal class RootNavigationComponent(
    componentContext: ComponentContext
) : ComponentContext by componentContext, KoinComponent, RootNavigation {
    private val rootNavigator: RootSlotNavigator by inject()

    override val slot: StateFlow<ChildSlot<RootDestination, RootEntry>> = rootNavigator.createSlot(componentContext)
}