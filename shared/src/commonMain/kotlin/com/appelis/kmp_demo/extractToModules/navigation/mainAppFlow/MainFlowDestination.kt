package com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow

import com.appelis.kmp_demo.category_ui_logic.CategoryComponent
import com.appelis.kmp_demo.category_ui_logic.CategoryComponentImpl
import com.appelis.kmp_demo.core.Destination
import com.appelis.kmp_demo.core.NavigationChild
import com.appelis.kmp_demo.homescreen_ui_logic.HomescreenComponentImpl
import com.appelis.kmp_demo.homescreen_ui_logic.HomescreenComponent
import com.arkivanov.decompose.ComponentContext
import kotlinx.serialization.Serializable

/***
 * represents "to where we want to navigate", including arguments
 */
@Serializable
sealed class MainFlowDestination: Destination<MainFlowNavigationChild> {
    @Serializable
    data object Homescreen: MainFlowDestination() {
        override fun createComponent(componentContext: ComponentContext): MainFlowNavigationChild {
            return MainFlowNavigationChild.Homescreen(HomescreenComponentImpl(componentContext))
        }
    }

    @Serializable
    data class Category(private val id: String): MainFlowDestination() {
        override fun createComponent(componentContext: ComponentContext): MainFlowNavigationChild {
            return MainFlowNavigationChild.Category(CategoryComponentImpl(componentContext, id))
        }
    }
}

/**
 * Represents item in navigation stack from which view can be generated
 */
sealed class MainFlowNavigationChild: NavigationChild {
    data class Homescreen(val component: HomescreenComponent): MainFlowNavigationChild()
    data class Category(val component: CategoryComponent): MainFlowNavigationChild()
}
