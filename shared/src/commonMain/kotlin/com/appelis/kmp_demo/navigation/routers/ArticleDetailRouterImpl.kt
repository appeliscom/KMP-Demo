package com.appelis.kmp_demo.navigation.routers

import com.appelis.kmp_demo.assortment.articleDetail.ArticleDetailRouter
import com.appelis.kmp_demo.assortment.articleDetail.ArticleRoute
import org.koin.core.annotation.Single

@Single
class ArticleDetailRouterImpl: ArticleDetailRouter {
    override fun navigateTo(route: ArticleRoute) {}
}