package com.appelis.kmp_demo.navigation.routers

import com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow.MainFlowChildConfig
import com.appelis.kmp_demo.homescreen.HomescreenRoute
import com.appelis.kmp_demo.homescreen.HomescreenRouter
import com.arkivanov.decompose.router.stack.StackNavigation
import com.arkivanov.decompose.router.stack.push
import org.koin.core.annotation.Single
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryInput


@Single
class HomescreenRouterImpl : HomescreenRouter, KoinComponent {
    private val navigation: StackNavigation<MainFlowChildConfig> by inject()

    override fun navigateTo(route: HomescreenRoute) {
        when (route) {
            is HomescreenRoute.Category -> navigation.push(
                MainFlowChildConfig.Category(
                    categoryInput = CategoryInput.Id(route.id)
                )
            )

            HomescreenRoute.LeafletCollection -> navigation.push(
                MainFlowChildConfig.LeafletCollection
            )
        }
    }
}