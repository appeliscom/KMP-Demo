package com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow

import com.arkivanov.decompose.Child
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.stack.ChildStack
import com.arkivanov.decompose.value.Value
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

internal class MainNavigationComponent (
    componentContext: ComponentContext,
) : MainNavigation, ComponentContext by componentContext, KoinComponent {

    private val mainFlowNavigator: MainFlowNavigator by inject()
    override val stack: Value<ChildStack<*, MainFlowEntry>> = mainFlowNavigator.createStack(componentContext)
    override fun onBackClicked(toIndex: Int) = mainFlowNavigator.onBackClicked(toIndex)
}
