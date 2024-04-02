package com.appelis.kmp_demo.startup_ui_logic.router

interface AppStartupRouter {
    fun navigateTo(route: AppStartupRoute)
}

sealed class AppStartupRoute {
    data object MainAppFlow: AppStartupRoute()
}