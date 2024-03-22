package com.appelis.kmp_demo.extractToModules.root

import com.appelis.kmp_demo.core.extensions.asStateFlow
import com.appelis.kmp_demo.core.extensions.componentCoroutineScope
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.slot.ChildSlot
import com.arkivanov.decompose.router.slot.SlotNavigation
import com.arkivanov.decompose.router.slot.activate
import com.arkivanov.decompose.router.slot.childSlot
import kotlinx.coroutines.flow.StateFlow

interface RootSlotNavigator {
    fun createSlot(componentContext: ComponentContext): StateFlow<ChildSlot<RootDestination, RootEntry>>
    fun showAppStartup()
    fun showMainAppNavigation()
}

internal class RootSlotNavigatorImpl: RootSlotNavigator {
    private val slotNavigator: SlotNavigation<RootDestination> = SlotNavigation()

    override fun createSlot(componentContext: ComponentContext) = componentContext.childSlot(
        source = slotNavigator,
        serializer = RootDestination.serializer(),
        initialConfiguration = { RootDestination.AppStartup },
        handleBackButton = false,
        childFactory = { destination, childContext ->
            destination.createComponent(childContext)
        },
    ).asStateFlow(componentContext.componentCoroutineScope())

    override fun showAppStartup() = slotNavigator.activate(RootDestination.AppStartup)
    override fun showMainAppNavigation() = slotNavigator.activate(RootDestination.MainAppFlow)
}