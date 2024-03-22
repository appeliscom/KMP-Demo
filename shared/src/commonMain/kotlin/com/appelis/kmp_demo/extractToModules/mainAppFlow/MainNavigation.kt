package com.appelis.kmp_demo.extractToModules.mainAppFlow

import com.arkivanov.decompose.router.stack.ChildStack
import kotlinx.coroutines.flow.StateFlow

interface MainNavigation {
    val stack: StateFlow<ChildStack<MainFlowDestination, MainFlowEntry>>
}