package com.appelis.kmp_demo.extractToModules.navigation.root

import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.slot.ChildSlot
import com.arkivanov.decompose.value.Value
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

class RootNavigationComponentImpl(
    componentContext: ComponentContext
) : ComponentContext by componentContext, KoinComponent, RootNavigationComponent {
    private val rootNavigator: RootSlotNavigator by inject()
    override val slot: Value<ChildSlot<RootDestination, RootEntry>> = rootNavigator.createSlot(componentContext)
}