package com.appelis.kmp_demo.leaflet.uiLogic.router

interface LeafletCollectionRouter {
    fun navigateTo(route: LeafletCollectionRoute)
}

sealed class LeafletCollectionRoute {
    data object Pop: LeafletCollectionRoute()
}