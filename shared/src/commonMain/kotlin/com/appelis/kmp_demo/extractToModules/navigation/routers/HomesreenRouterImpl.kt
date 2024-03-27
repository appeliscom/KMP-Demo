package com.appelis.kmp_demo.extractToModules.navigation.routers

import com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow.MainFlowNavigator
import com.appelis.kmp_demo.homescreen_ui_logic.HomescreenRoute
import com.appelis.kmp_demo.homescreen_ui_logic.HomescreenRouter
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

class HomescreenRouterImpl: HomescreenRouter, KoinComponent {
    private val mainFlowNavigator: MainFlowNavigator by inject()

    override fun navigateTo(route: HomescreenRoute) {
        when (route) {
            is HomescreenRoute.Category -> mainFlowNavigator.navigateToCategory(route.id)
        }
    }
}