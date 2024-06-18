package com.appelis.kmp_demo.navigation.routers

import com.appelis.kmp_demo.assortment.uiLogic.filter.FilterRoute
import com.appelis.kmp_demo.assortment.uiLogic.filter.FilterRouter
import com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow.MainFlowChildConfig
import com.arkivanov.decompose.router.stack.StackNavigation
import com.arkivanov.decompose.router.stack.pop
import org.koin.core.annotation.Single
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

@Single
class FilterRouterImpl: FilterRouter, KoinComponent {
    private val navigation: StackNavigation<MainFlowChildConfig> by inject()

    override fun navigateTo(route: FilterRoute) {
        when (route) {
            FilterRoute.CloseFilter -> navigation.pop()
        }
    }
}