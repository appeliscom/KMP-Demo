package com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow

import com.appelis.kmp_demo.core.extensions.asStateFlow
import com.appelis.kmp_demo.core.extensions.componentCoroutineScope
import com.arkivanov.decompose.Child
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.stack.ChildStack
import com.arkivanov.decompose.router.stack.StackNavigation
import com.arkivanov.decompose.router.stack.childStack
import com.arkivanov.decompose.router.stack.navigate
import com.arkivanov.decompose.router.stack.push
import kotlinx.coroutines.flow.StateFlow

internal interface  MainFlowNavigator {
    fun createStack(
        componentContext: ComponentContext
    ) : StateFlow<ChildStack<MainFlowDestination, MainFlowEntry>>

    fun navigateToCategory()

    fun iosPop(newStack: List<Child<MainFlowDestination, MainFlowEntry>>)
}

internal class MainFlowNavigatorImpl(

) : MainFlowNavigator {
    private var stackNavigator: StackNavigation<MainFlowDestination> = StackNavigation()
    override fun createStack(componentContext: ComponentContext): StateFlow<ChildStack<MainFlowDestination, MainFlowEntry>> = componentContext.childStack(
        source = stackNavigator,
        serializer = MainFlowDestination.serializer(),
        key = this::class.simpleName.toString(),
        initialStack = {
            listOf(MainFlowDestination.Homescreen)
        },
        handleBackButton = true,
        childFactory = { destination, childContext -> destination.createComponent(childContext) },
    )
        .asStateFlow(componentContext.componentCoroutineScope())

    override fun iosPop(newStack: List<Child<MainFlowDestination, MainFlowEntry>>) =
        stackNavigator.navigate { newStack.map { it.configuration } }

    override fun navigateToCategory() {
        stackNavigator.push(MainFlowDestination.Category)
    }
}