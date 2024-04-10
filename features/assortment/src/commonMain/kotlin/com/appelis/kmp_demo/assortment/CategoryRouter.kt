package com.appelis.kmp_demo.assortment

interface CategoryRouter {
    fun navigateTo(route: CategoryRoute)
}

sealed class CategoryRoute {
    data class Category(val id: String): CategoryRoute()
}