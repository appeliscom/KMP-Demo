package com.appelis.kmp_demo.extractToModules.navigation.root

import com.appelis.kmp_demo.core.Destination
import com.appelis.kmp_demo.core.NavEntry
import com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow.MainNavigationComponent
import com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow.MainNavigationComponentImpl
import com.appelis.kmp_demo.startup_ui_logic.AppStartupComponent
import com.appelis.kmp_demo.startup_ui_logic.AppStartupComponentImpl
import com.arkivanov.decompose.ComponentContext
import kotlinx.serialization.Serializable

@Serializable
sealed class RootDestination: Destination<RootEntry> {
    @Serializable
    data object AppStartup: RootDestination() {
        override fun createComponent(componentContext: ComponentContext): RootEntry {
            return RootEntry.AppStartup(AppStartupComponentImpl(componentContext))
        }

    }

    @Serializable
    data object MainAppFlow: RootDestination() {
        override fun createComponent(componentContext: ComponentContext): RootEntry {
            return RootEntry.MainAppFlow(MainNavigationComponentImpl(componentContext))
        }
    }
}


sealed class RootEntry : NavEntry {
    data class AppStartup(val screen: AppStartupComponent) : RootEntry()
    data class MainAppFlow(val navigation: MainNavigationComponent): RootEntry()
}