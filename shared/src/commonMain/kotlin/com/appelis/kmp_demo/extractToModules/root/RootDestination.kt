package com.appelis.kmp_demo.extractToModules.root

import com.appelis.kmp_demo.core.Destination
import com.appelis.kmp_demo.core.NavEntry
import com.appelis.kmp_demo.extractToModules.appStartup.AppStartupComponent
import com.appelis.kmp_demo.extractToModules.appStartup.AppStartupScreen
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
    data object MainNavigation: RootDestination() {
        override fun createComponent(componentContext: ComponentContext): RootEntry {
            TODO("Not yet implemented")
        }
    }
}


sealed class RootEntry : NavEntry {
    data class AppStartup(val screen: AppStartupScreen) : RootEntry()
    data object MainAppNavigation: RootEntry()
}