package com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow

import com.arkivanov.decompose.Child
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.stack.ChildStack
import com.arkivanov.decompose.router.stack.StackNavigation
import com.arkivanov.decompose.router.stack.childStack
import com.arkivanov.decompose.router.stack.navigate
import com.arkivanov.decompose.router.stack.popTo
import com.arkivanov.decompose.router.stack.push
import com.arkivanov.decompose.value.Value

internal interface  MainFlowNavigator {
    fun createStack(
        componentContext: ComponentContext
    ) : Value<ChildStack<MainFlowDestination, MainFlowEntry>>

    fun onBackClicked(toIndex: Int)
    fun navigateToCategory(id: String)
}

internal class MainFlowNavigatorImpl(

) : MainFlowNavigator {
    private var stackNavigator: StackNavigation<MainFlowDestination> = StackNavigation()
    override fun createStack(componentContext: ComponentContext): Value<ChildStack<MainFlowDestination, MainFlowEntry>> = componentContext.childStack(
        source = stackNavigator,
        serializer = MainFlowDestination.serializer(),
        key = this::class.simpleName.toString(),
        initialStack = {
            listOf(MainFlowDestination.Homescreen)
        },
        handleBackButton = true,
        childFactory = { destination, childContext -> destination.createComponent(childContext) },
    )

    override fun onBackClicked(toIndex: Int) {
        stackNavigator.popTo(index = toIndex)
    }

    override fun navigateToCategory(id: String) {
        stackNavigator.push(MainFlowDestination.Category(id))
    }
}