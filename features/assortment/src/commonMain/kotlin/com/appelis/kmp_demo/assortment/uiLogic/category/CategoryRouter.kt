package com.appelis.kmp_demo.assortment.uiLogic.category

interface CategoryRouter {
    fun navigateTo(route: CategoryRoute)
}

sealed class CategoryRoute {
    data class Category(
        val categoryInput: CategoryInput,
        val displayOnlyArticles: Boolean = false,
        val isSheetRoot: Boolean = false
    ): CategoryRoute()
    data class ArticleDetail(val id: String): CategoryRoute()
    data class Filter(val filterSessionId: String): CategoryRoute()
}