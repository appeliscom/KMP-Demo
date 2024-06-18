package com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow

import com.appelis.kmp_demo.assortment.uiLogic.articleDetail.ArticleDetailComponentImpl
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryComponentImpl
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryInput
import com.appelis.kmp_demo.assortment.uiLogic.filter.FilterComponentImpl
import com.appelis.kmp_demo.homescreen.HomescreenComponentImpl
import com.appelis.kmp_demo.leaflet.uiLogic.component.LeafletCollectionComponentImpl
import com.appelis.kmp_demo.navigation.ChildConfig
import com.appelis.kmp_demo.navigation.deeplinks.Deeplink
import com.arkivanov.decompose.ComponentContext
import kotlinx.serialization.Serializable
import kotlin.random.Random

/***
 * represents "to where we want to navigate", including arguments
 */
@Serializable
sealed class MainFlowChildConfig : ChildConfig<MainFlowNavigationChild> {
    // if it can handle deeplink, it will return array of configs, if not it will return null
    open fun getDeeplinkChildren(deeplink: Deeplink): List<MainFlowChildConfig>? = null

    @Serializable
    data object Homescreen : MainFlowChildConfig() {
        override fun createChild(componentContext: ComponentContext): MainFlowNavigationChild {
            return MainFlowNavigationChild.Homescreen(HomescreenComponentImpl(componentContext))
        }

        override fun getDeeplinkChildren(deeplink: Deeplink): List<MainFlowChildConfig> {
            return when (deeplink) {
                is Deeplink.ArticleDetail -> arrayListOf(ArticleDetail(deeplink.id))
            }
        }
    }

    @Serializable
    data class Category(
        private val categoryInput: CategoryInput,
        private val displayOnlyArticles: Boolean = false,
        private val isSheetRoot: Boolean = false,
        private val seed: Int = Random.nextInt()
    ) :
        MainFlowChildConfig() {
        override fun createChild(componentContext: ComponentContext): MainFlowNavigationChild {
            return MainFlowNavigationChild.Category(
                CategoryComponentImpl(
                    componentContext,
                    categoryInput,
                    displayOnlyArticles
                ),
                sheetRoot = isSheetRoot
            )
        }
    }

    @Serializable
    data class AssortmentFilter(private val filterSessionId: String) : MainFlowChildConfig() {
        override fun createChild(componentContext: ComponentContext): MainFlowNavigationChild {
            return MainFlowNavigationChild.AssortmentFilter(
                FilterComponentImpl(
                    componentContext,
                    filterSessionId
                )
            )
        }
    }

    @Serializable
    data object LeafletCollection : MainFlowChildConfig() {
        override fun createChild(componentContext: ComponentContext): MainFlowNavigationChild {
            return MainFlowNavigationChild.LeafletCollection(
                LeafletCollectionComponentImpl(
                    componentContext
                )
            )
        }
    }

    @Serializable
    data class ArticleDetail(private val id: String) : MainFlowChildConfig() {
        override fun createChild(componentContext: ComponentContext): MainFlowNavigationChild {
            return MainFlowNavigationChild.ArticleDetail(
                ArticleDetailComponentImpl(
                    componentContext,
                    id
                )
            )
        }

        override fun getDeeplinkChildren(deeplink: Deeplink): List<MainFlowChildConfig>? {
            return when (deeplink) {
                is Deeplink.ArticleDetail -> {
                    if (deeplink.id == id) emptyList()
                    else null
                }
            }
        }
    }
}