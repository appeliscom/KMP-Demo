package com.appelis.kmp_demo.navigation.routers

import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryRoute
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryRouter
import com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow.MainFlowChildConfig
import com.arkivanov.decompose.router.stack.StackNavigation
import com.arkivanov.decompose.router.stack.push
import org.koin.core.annotation.Single
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

@Single
class CategoryRouterImpl : CategoryRouter, KoinComponent {
    private val navigation: StackNavigation<MainFlowChildConfig> by inject()

    override fun navigateTo(route: CategoryRoute) {
        when (route) {
            is CategoryRoute.Category -> navigation.push(
                MainFlowChildConfig.Category(
                    id = route.id,
                    isSheetRoot = route.isSheetRoot
                )
            )

            is CategoryRoute.ArticleDetail -> navigation.push(
                MainFlowChildConfig.ArticleDetail(
                    id = route.id
                )
            )
        }
    }
}