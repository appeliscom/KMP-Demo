package com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow

import com.appelis.kmp_demo.core.Destination
import com.appelis.kmp_demo.core.NavEntry
import com.appelis.kmp_demo.extractToModules.features.category.CategoryComponent
import com.appelis.kmp_demo.extractToModules.features.category.CategoryScreen
import com.appelis.kmp_demo.extractToModules.features.homescreen.HomescreenComponent
import com.appelis.kmp_demo.extractToModules.features.homescreen.HomescreenScreen
import com.arkivanov.decompose.ComponentContext
import kotlinx.serialization.Serializable

@Serializable
sealed class MainFlowDestination: Destination<MainFlowEntry> {
    @Serializable
    data object Homescreen: MainFlowDestination() {
        override fun createComponent(componentContext: ComponentContext): MainFlowEntry {
            return MainFlowEntry.Homescreen(HomescreenComponent(componentContext))
        }

    }

    @Serializable
    data class Category(private val id: String): MainFlowDestination() {
        override fun createComponent(componentContext: ComponentContext): MainFlowEntry {
            return MainFlowEntry.Category(CategoryComponent(componentContext, id))
        }
    }
}

sealed class MainFlowEntry: NavEntry {
    data class Homescreen(val screen: HomescreenScreen): MainFlowEntry()
    data class Category(val screen: CategoryScreen): MainFlowEntry()
}
