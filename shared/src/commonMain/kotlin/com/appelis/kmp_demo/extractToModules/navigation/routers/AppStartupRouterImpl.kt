package com.appelis.kmp_demo.extractToModules.navigation.routers

import com.appelis.kmp_demo.extractToModules.navigation.root.RootSlotNavigator
import com.appelis.kmp_demo.startup_ui_logic.AppStartupRoute
import com.appelis.kmp_demo.startup_ui_logic.AppStartupRouter
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject


class AppStartupRouterImpl: AppStartupRouter, KoinComponent {
    private val rootNavigator: RootSlotNavigator by inject()
    override fun navigateTo(route: AppStartupRoute) {
        when (route) {
            AppStartupRoute.MainAppFlow -> rootNavigator.showMainAppNavigation()
        }
    }
}