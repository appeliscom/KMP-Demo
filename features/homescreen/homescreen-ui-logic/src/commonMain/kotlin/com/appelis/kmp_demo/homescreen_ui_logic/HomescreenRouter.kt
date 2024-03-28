package com.appelis.kmp_demo.homescreen_ui_logic

interface HomescreenRouter {
    fun navigateTo(route: HomescreenRoute)
}

sealed class HomescreenRoute {
    data class Category(val id: String): HomescreenRoute()
    data object LeafletCollection: HomescreenRoute()
}