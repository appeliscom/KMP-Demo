package com.appelis.kmp_demo.assortment.uiLogic.articleDetail

import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryRoute

interface ArticleDetailRouter {
    fun navigateTo(route: ArticleRoute)
}

sealed class ArticleRoute {
}