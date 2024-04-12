package com.appelis.kmp_demo.assortment.category

interface CategoryRouter {
    fun navigateTo(route: CategoryRoute)
}

sealed class CategoryRoute {
    data class Category(val id: String, val isSheetRoot: Boolean = false): CategoryRoute()
    data class ArticleDetail(val id: String): CategoryRoute()
}