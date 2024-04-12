package com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow

import com.appelis.kmp_demo.assortment.articleDetail.ArticleDetailComponent
import com.appelis.kmp_demo.assortment.articleDetail.ArticleDetailComponentImpl
import com.appelis.kmp_demo.assortment.category.CategoryComponent
import com.appelis.kmp_demo.assortment.category.CategoryComponentImpl
import com.appelis.kmp_demo.core.ChildConfig
import com.appelis.kmp_demo.core.NavigationChild
import com.appelis.kmp_demo.core.extensions.asStateFlow
import com.appelis.kmp_demo.core.extensions.componentCoroutineScope
import com.appelis.kmp_demo.homescreen.HomescreenComponent
import com.appelis.kmp_demo.homescreen.HomescreenComponentImpl
import com.appelis.kmp_demo.leaflet.uiLogic.component.LeafletCollectionComponent
import com.appelis.kmp_demo.leaflet.uiLogic.component.LeafletCollectionComponentImpl
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.stack.ChildStack
import com.arkivanov.decompose.router.stack.StackNavigation
import com.arkivanov.decompose.router.stack.childStack
import com.arkivanov.decompose.router.stack.popTo
import kotlinx.coroutines.flow.StateFlow
import kotlinx.serialization.Serializable
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

interface MainNavigationComponent {
    val stack: StateFlow<ChildStack<*, MainFlowNavigationChild>>
    fun pop(toIndex: Int)
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
}

/***
 * represents "to where we want to navigate", including arguments
 */
@Serializable
sealed class MainFlowChildConfig: ChildConfig<MainFlowNavigationChild> {
    @Serializable
    data object Homescreen: MainFlowChildConfig() {
        override fun createChild(componentContext: ComponentContext): MainFlowNavigationChild {
            return MainFlowNavigationChild.Homescreen(HomescreenComponentImpl(componentContext))
        }
    }

    @Serializable
    data class Category(private val id: String, private val isSheetRoot: Boolean = false): MainFlowChildConfig() {
        override fun createChild(componentContext: ComponentContext): MainFlowNavigationChild {
            return MainFlowNavigationChild.Category(CategoryComponentImpl(componentContext, id), sheetRoot = isSheetRoot)
        }
    }

    @Serializable
    data object LeafletCollection: MainFlowChildConfig() {
        override fun createChild(componentContext: ComponentContext): MainFlowNavigationChild {
            return MainFlowNavigationChild.LeafletCollection(LeafletCollectionComponentImpl(componentContext))
        }
    }

    @Serializable
    data class ArticleDetail(private val id: String): MainFlowChildConfig() {
        override fun createChild(componentContext: ComponentContext): MainFlowNavigationChild {
            return MainFlowNavigationChild.ArticleDetail(ArticleDetailComponentImpl(componentContext, id))
        }
    }
}

/**
 * Represents item in navigation stack from which view can be generated
 */

sealed class MainFlowNavigationChild: NavigationChild {
    data class Homescreen(val component: HomescreenComponent): MainFlowNavigationChild()
    data class Category(val component: CategoryComponent, val sheetRoot: Boolean): MainFlowNavigationChild() {
        override fun isNewSheetRoot(): Boolean = sheetRoot
    }
    data class LeafletCollection(val component: LeafletCollectionComponent): MainFlowNavigationChild()
    data class ArticleDetail(val component: ArticleDetailComponent): MainFlowNavigationChild()
}
