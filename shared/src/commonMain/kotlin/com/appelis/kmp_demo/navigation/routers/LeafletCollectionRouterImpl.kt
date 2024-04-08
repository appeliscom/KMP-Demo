package com.appelis.kmp_demo.navigation.routers

import com.appelis.kmp_demo.leaflet.uiLogic.router.LeafletCollectionRoute
import com.appelis.kmp_demo.leaflet.uiLogic.router.LeafletCollectionRouter
import com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow.MainFlowChildConfig
import com.arkivanov.decompose.router.stack.StackNavigation
import com.arkivanov.decompose.router.stack.pop
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

class LeafletCollectionRouterImpl: LeafletCollectionRouter, KoinComponent {
    private val navigation: StackNavigation<MainFlowChildConfig> by inject()

    override fun navigateTo(route: LeafletCollectionRoute) {
        when(route) {
            LeafletCollectionRoute.Pop -> navigation.pop()
        }
    }
}