package com.appelis.kmp_demo.navigation.routers

import com.appelis.kmp_demo.assortment.uiLogic.articleDetail.ArticleDetailRouter
import com.appelis.kmp_demo.assortment.uiLogic.articleDetail.ArticleRoute
import com.appelis.kmp_demo.navigation.deeplinks.Deeplink
import com.appelis.kmp_demo.navigation.deeplinks.InAppDeeplinkRepository
import org.koin.core.annotation.Single

@Single
class ArticleDetailRouterImpl(
    private val inAppDeeplinkRepository: InAppDeeplinkRepository
): ArticleDetailRouter {
    override fun navigateTo(route: ArticleRoute) {
        when (route) {
            ArticleRoute.Home -> inAppDeeplinkRepository.handleNavigationEvent(Deeplink.InApp.Home)
        }
    }
}