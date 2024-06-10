package com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow

import com.appelis.UUID
import com.appelis.kmp_demo.assortment.uiLogic.articleDetail.ArticleDetailComponent
import com.appelis.kmp_demo.assortment.uiLogic.articleDetail.ArticleDetailComponentImpl
import com.appelis.kmp_demo.assortment.uiLogic.categoryCollection.CategoryCollectionComponentImpl
import com.appelis.kmp_demo.assortment.uiLogic.categoryCollection.CategoryCollectionComponent
import com.appelis.kmp_demo.core.extensions.asStateFlow
import com.appelis.kmp_demo.core.extensions.componentCoroutineScope
import com.appelis.kmp_demo.homescreen.HomescreenComponent
import com.appelis.kmp_demo.homescreen.HomescreenComponentImpl
import com.appelis.kmp_demo.leaflet.uiLogic.component.LeafletCollectionComponent
import com.appelis.kmp_demo.leaflet.uiLogic.component.LeafletCollectionComponentImpl
import com.appelis.kmp_demo.navigation.ChildConfig
import com.appelis.kmp_demo.navigation.StackNavigationChild
import com.appelis.kmp_demo.navigation.deeplinks.Deeplink
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.stack.ChildStack
import com.arkivanov.decompose.router.stack.StackNavigation
import com.arkivanov.decompose.router.stack.childStack
import com.arkivanov.decompose.router.stack.navigate
import com.arkivanov.decompose.router.stack.popTo
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.first
import kotlinx.serialization.Serializable
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject
import kotlin.random.Random
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryComponent
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryComponentImpl
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryInput

interface MainNavigationComponent {
    val stack: StateFlow<ChildStack<*, MainFlowNavigationChild>>
    fun pop(toIndex: Int)
    suspend fun handleDeeplink(deeplink: Deeplink): Boolean
}

internal class MainNavigationComponentImpl(
    componentContext: ComponentContext,
) : MainNavigationComponent, ComponentContext by componentContext, KoinComponent {
    private val navigation: StackNavigation<MainFlowChildConfig> by inject()

    override val stack: StateFlow<ChildStack<*, MainFlowNavigationChild>> = childStack(
        source = navigation,
        serializer = MainFlowChildConfig.serializer(),
        key = this::class.simpleName.toString(),
        initialStack = {
            listOf(MainFlowChildConfig.Homescreen)
        },
        handleBackButton = true,
        childFactory = { childConfig, childContext -> childConfig.createChild(childContext) }
    ).asStateFlow(componentContext.componentCoroutineScope())

    override fun pop(toIndex: Int) = navigation.popTo(toIndex)

    override suspend fun handleDeeplink(deeplink: Deeplink): Boolean {
        val currentConfigs =
            ArrayList(stack.value.items.mapNotNull { it.configuration as? MainFlowChildConfig })
        var newConfigs: ArrayList<MainFlowChildConfig>? = null

        // Get new configs -> current configs up to config that can handle deeplink + appended configs from it
        for (config in currentConfigs.reversed()) {
            val appendedChildren = config.getDeeplinkChildren(deeplink)
            if (appendedChildren != null) {
                val index = currentConfigs.lastIndexOf(config)
                newConfigs = ArrayList(currentConfigs.subList(0, index + 1))
                newConfigs.addAll(appendedChildren)
                break
            }
        }

        newConfigs?.let {
            navigation.navigate { newConfigs }
            // wait until active child is the requested one (the onComplete lambda in navigate function was not dependable)
            stack.first { stack -> stack.active.configuration == newConfigs.last() }
            stack.value.active.instance.handleDeeplink(deeplink)
            return true
        } ?: return false
    }
}

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

/**
 * Represents item in navigation stack from which view can be generated
 */

sealed class MainFlowNavigationChild : StackNavigationChild<MainFlowChildConfig> {
    data class Homescreen(val component: HomescreenComponent) : MainFlowNavigationChild()
    data class Category(val component: CategoryComponent, val sheetRoot: Boolean) :
        MainFlowNavigationChild() {
        override fun isNewSheetRoot(): Boolean = sheetRoot
    }

    data class LeafletCollection(val component: LeafletCollectionComponent) :
        MainFlowNavigationChild()

    data class ArticleDetail(val component: ArticleDetailComponent) : MainFlowNavigationChild() {
        override suspend fun handleDeeplink(deeplink: Deeplink) {
            when (deeplink) {
                is Deeplink.ArticleDetail -> component.viewModel.fillInVoucherCode(deeplink.voucherCode)
            }
        }
    }
}
