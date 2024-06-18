package com.appelis.kmp_demo.assortment.uiLogic.filter

interface FilterRouter {
    fun navigateTo(route: FilterRoute)
}

sealed class FilterRoute {
    data object CloseFilter : FilterRoute()
}