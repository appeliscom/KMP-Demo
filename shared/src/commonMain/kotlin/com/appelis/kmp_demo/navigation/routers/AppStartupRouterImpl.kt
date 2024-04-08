package com.appelis.kmp_demo.navigation.routers

import com.appelis.kmp_demo.navigation.navigationComponents.root.RootSlotChildConfig
import com.appelis.kmp_demo.startup.router.AppStartupRoute
import com.appelis.kmp_demo.startup.router.AppStartupRouter
import com.arkivanov.decompose.router.slot.SlotNavigation
import com.arkivanov.decompose.router.slot.activate
import org.koin.core.annotation.Single
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

@Single
class AppStartupRouterImpl: AppStartupRouter, KoinComponent {
    private val navigation: SlotNavigation<RootSlotChildConfig> by inject()

    override fun navigateTo(route: AppStartupRoute) {
        when (route) {
            AppStartupRoute.MainAppFlow -> navigation.activate(RootSlotChildConfig.MainAppFlow)
        }
    }
}