package com.appelis.kmp_demo.extractToModules.root

import com.appelis.kmp_demo.core.Destination
import com.appelis.kmp_demo.core.NavEntry
import com.appelis.kmp_demo.extractToModules.appStartup.AppStartupComponent
import com.appelis.kmp_demo.extractToModules.appStartup.AppStartupScreen
import com.appelis.kmp_demo.extractToModules.mainAppFlow.MainNavigation
import com.appelis.kmp_demo.extractToModules.mainAppFlow.MainNavigationComponent
import com.arkivanov.decompose.ComponentContext
import kotlinx.serialization.Serializable

@Serializable
sealed class RootDestination: Destination<RootEntry> {
    @Serializable
    data object AppStartup: RootDestination() {
        override fun createComponent(componentContext: ComponentContext): RootEntry {
            return RootEntry.AppStartup(AppStartupComponent(componentContext))
        }

    }

    @Serializable
    data object MainAppFlow: RootDestination() {
        override fun createComponent(componentContext: ComponentContext): RootEntry {
            return RootEntry.MainAppFlow(MainNavigationComponent(componentContext))
        }
    }
}


sealed class RootEntry : NavEntry {
    data class AppStartup(val screen: AppStartupScreen) : RootEntry()
    data class MainAppFlow(val navigation: MainNavigation): RootEntry()
}