package com.appelis.kmp_demo.navigation.routers

import com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow.MainFlowChildConfig
import com.appelis.kmp_demo.homescreen_ui_logic.HomescreenRoute
import com.appelis.kmp_demo.homescreen_ui_logic.HomescreenRouter
import com.arkivanov.decompose.router.stack.StackNavigation
import com.arkivanov.decompose.router.stack.push
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

class HomescreenRouterImpl : HomescreenRouter, KoinComponent {
    private val navigation: StackNavigation<MainFlowChildConfig> by inject()

    override fun navigateTo(route: HomescreenRoute) {
        when (route) {
            is HomescreenRoute.Category -> navigation.push(
                MainFlowChildConfig.Category(
                    id = route.id
                )
            )

            HomescreenRoute.LeafletCollection -> navigation.push(
                MainFlowChildConfig.LeafletCollection
            )
        }
    }
}