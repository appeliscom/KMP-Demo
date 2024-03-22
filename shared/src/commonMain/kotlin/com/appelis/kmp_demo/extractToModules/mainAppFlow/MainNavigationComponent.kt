package com.appelis.kmp_demo.extractToModules.mainAppFlow

import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.stack.ChildStack
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

internal class MainNavigationComponent (
    componentContext: ComponentContext,
) : MainNavigation, ComponentContext by componentContext, KoinComponent {

    private val mainFlowNavigator: MainFlowNavigator by inject()
    override val stack: StateFlow<ChildStack<MainFlowDestination, MainFlowEntry>> = mainFlowNavigator.createStack(componentContext)

}
