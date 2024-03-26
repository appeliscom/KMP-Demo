package com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow

import com.arkivanov.decompose.Child
import com.arkivanov.decompose.router.stack.ChildStack
import com.arkivanov.decompose.value.Value

interface MainNavigation {
    val stack: Value<ChildStack<*, MainFlowEntry>>
    fun onBackClicked(toIndex: Int)
}