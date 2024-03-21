package com.appelis.kmp_demo.homescreen_ui_logic.root

import com.appelis.kmp_demo.homescreen_ui_logic.homescreen.HomescreenComponent
import com.arkivanov.decompose.router.stack.ChildStack
import com.arkivanov.decompose.value.Value

interface RootComponent {
    val stack: Value<ChildStack<*, Child>>
    fun onBackClicked(toIndex: Int)
    sealed class Child {
        class HomescreenChild(val component: HomescreenComponent) : Child()
    }
}