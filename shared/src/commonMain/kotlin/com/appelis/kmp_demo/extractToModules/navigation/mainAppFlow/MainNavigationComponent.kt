package com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow

import com.arkivanov.decompose.router.stack.ChildStack
import com.arkivanov.decompose.value.Value

interface MainNavigationComponent {
    val stack: Value<ChildStack<*, MainFlowNavigationChild>>
    fun onBackClicked(toIndex: Int)
}