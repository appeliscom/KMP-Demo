package com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow

import com.appelis.kmp_demo.assortment.uiLogic.articleDetail.ArticleDetailComponent
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryComponent
import com.appelis.kmp_demo.assortment.uiLogic.filter.FilterComponent
import com.appelis.kmp_demo.homescreen.HomescreenComponent
import com.appelis.kmp_demo.leaflet.uiLogic.component.LeafletCollectionComponent
import com.appelis.kmp_demo.navigation.StackNavigationChild
import com.appelis.kmp_demo.navigation.deeplinks.Deeplink

/**
 * Represents item in navigation stack from which view can be generated
 */

sealed class MainFlowNavigationChild : StackNavigationChild<MainFlowChildConfig> {
    data class Homescreen(val component: HomescreenComponent) : MainFlowNavigationChild()
    data class Category(val component: CategoryComponent) : MainFlowNavigationChild()
    data class LeafletCollection(val component: LeafletCollectionComponent) :
        MainFlowNavigationChild()

    data class ArticleDetail(val component: ArticleDetailComponent) : MainFlowNavigationChild() {
        override suspend fun handleDeeplink(deeplink: Deeplink) {
            when (deeplink) {
                is Deeplink.ArticleDetail -> component.viewModel.fillInVoucherCode(deeplink.voucherCode)
            }
        }
    }

    data class AssortmentFilter(val component: FilterComponent) : MainFlowNavigationChild() {
        override fun isNewSheetRoot(): Boolean = true
    }
}