package com.appelis.kmp_demo.startup.router

interface AppStartupRouter {
    fun navigateTo(route: AppStartupRoute)
}

sealed class AppStartupRoute {
    data object MainAppFlow: AppStartupRoute()
}