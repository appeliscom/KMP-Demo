package com.appelis.kmp_demo.assortment.articleDetail

import com.appelis.kmp_demo.assortment.category.CategoryRoute

interface ArticleDetailRouter {
    fun navigateTo(route: ArticleRoute)
}

sealed class ArticleRoute {
}