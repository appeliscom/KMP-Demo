package com.appelis.kmp_demo.leaflet_ui_logic.router

interface LeafletCollectionRouter {
    fun navigateTo(route: LeafletCollectionRoute)
}

sealed class LeafletCollectionRoute {
    data object Pop: LeafletCollectionRoute()
}