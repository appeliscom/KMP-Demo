package com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow

import com.arkivanov.decompose.Child
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.stack.ChildStack
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

internal class MainNavigationComponent (
    componentContext: ComponentContext,
) : MainNavigation, MainNavigation.Actions, ComponentContext by componentContext, KoinComponent {

    private val mainFlowNavigator: MainFlowNavigator by inject()
    override val stack: StateFlow<ChildStack<MainFlowDestination, MainFlowEntry>> = mainFlowNavigator.createStack(componentContext)
    override val actions: MainNavigation.Actions = this
    override fun iosPopTo(newStack: List<Child<MainFlowDestination, MainFlowEntry>>) {
        mainFlowNavigator.iosPop(newStack)
    }
}
