package com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow

import com.appelis.kmp_demo.category_ui_logic.CategoryComponent
import com.appelis.kmp_demo.category_ui_logic.CategoryComponentImpl
import com.appelis.kmp_demo.core.Destination
import com.appelis.kmp_demo.core.NavEntry
import com.appelis.kmp_demo.homescreen_ui_logic.HomescreenComponentImpl
import com.appelis.kmp_demo.homescreen_ui_logic.HomescreenCompoment
import com.arkivanov.decompose.ComponentContext
import kotlinx.serialization.Serializable

@Serializable
sealed class MainFlowDestination: Destination<MainFlowEntry> {
    @Serializable
    data object Homescreen: MainFlowDestination() {
        override fun createComponent(componentContext: ComponentContext): MainFlowEntry {
            return MainFlowEntry.Homescreen(HomescreenComponentImpl(componentContext))
        }

    }

    @Serializable
    data class Category(private val id: String): MainFlowDestination() {
        override fun createComponent(componentContext: ComponentContext): MainFlowEntry {
            return MainFlowEntry.Category(CategoryComponentImpl(componentContext, id))
        }
    }
}

sealed class MainFlowEntry: NavEntry {
    data class Homescreen(val component: HomescreenCompoment): MainFlowEntry()
    data class Category(val component: CategoryComponent): MainFlowEntry()
}
