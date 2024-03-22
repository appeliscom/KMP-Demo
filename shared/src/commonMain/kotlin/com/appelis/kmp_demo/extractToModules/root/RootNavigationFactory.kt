package com.appelis.kmp_demo.extractToModules.root

import com.arkivanov.decompose.ComponentContext

object RootNavigationFactory {
    fun create(componentContext: ComponentContext): RootNavigation = RootNavigationComponent(componentContext)
}