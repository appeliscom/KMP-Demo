package com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow

import com.appelis.kmp_demo.assortment.articleDetail.ArticleDetailComponent
import com.appelis.kmp_demo.assortment.articleDetail.ArticleDetailComponentImpl
import com.appelis.kmp_demo.assortment.category.CategoryComponent
import com.appelis.kmp_demo.assortment.category.CategoryComponentImpl
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
import kotlinx.coroutines.MainScope
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.first
import kotlinx.coroutines.launch
import kotlinx.serialization.Serializable
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

interface MainNavigationComponent {
    val stack: StateFlow<ChildStack<*, MainFlowNavigationChild>>
    fun pop(toIndex: Int)
    fun handleDeeplink(deeplink: Deeplink): Boolean
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

    override fun handleDeeplink(deeplink: Deeplink): Boolean {
        val currentConfigs = ArrayList(stack.value.items.mapNotNull { it.configuration as? MainFlowChildConfig })

        var newConfig: ArrayList<MainFlowChildConfig>? = null

        for (config in currentConfigs.reversed()) {
            println("checking whether $config can handle deeplink")
            val appendedChildren = config.getDeeplinkChildren(deeplink)
            if (appendedChildren != null) {
                val index = currentConfigs.lastIndexOf(config)
                newConfig = ArrayList(currentConfigs.subList(0, index + 1))
                newConfig.addAll(appendedChildren)
                println("$config can handle deeplink ending loop")
                break
            } else {
                println("$config can't handle deeplink")
            }
        }

        newConfig?.let { newConfigs ->
            navigation.navigate { newConfigs }
            // wait until active child is the requested one (the onComplete lambda in navigate function was not dependable)
            MainScope().launch {
                stack.first { stack -> stack.active.configuration == newConfigs.last() }
                println("Navigation to deeplinked screen complete, passing deeplink to screen ${stack.value.active.instance}")
                stack.value.active.instance.handleDeeplink(deeplink)
            }

            return true
        } ?: return false
    }
}

/***
 * represents "to where we want to navigate", including arguments
 */
@Serializable
sealed class MainFlowChildConfig : ChildConfig<MainFlowNavigationChild> {
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
    data class Category(private val id: String, private val isSheetRoot: Boolean = false) :
        MainFlowChildConfig() {
        override fun createChild(componentContext: ComponentContext): MainFlowNavigationChild {
            return MainFlowNavigationChild.Category(
                CategoryComponentImpl(componentContext, id),
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
                    if (deeplink.id == id) {
                        println("articleid: ${id} deeplinkid: ${deeplink.id}")
                        emptyList()
                    } else {
                        null
                    }
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
        override fun handleDeeplink(deeplink: Deeplink) {
            println("ArticleDetail Child is handling deeplink")
            when(deeplink){
                is Deeplink.ArticleDetail -> component.viewModel.fillInVoucherCode(deeplink.voucherCode)
            }
        }
    }
}
