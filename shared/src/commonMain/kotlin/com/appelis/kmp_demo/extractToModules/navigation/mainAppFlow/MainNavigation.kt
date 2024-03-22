package com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow

import com.arkivanov.decompose.Child
import com.arkivanov.decompose.router.stack.ChildStack
import kotlinx.coroutines.flow.StateFlow

interface MainNavigation {
    val stack: StateFlow<ChildStack<MainFlowDestination, MainFlowEntry>>
    val actions: Actions
    interface Actions {
        fun iosPopTo(newStack: List<Child<MainFlowDestination, MainFlowEntry>>)
    }
}