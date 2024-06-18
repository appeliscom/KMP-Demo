package com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow

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
import com.appelis.kmp_demo.assortment.uiLogic.filter.FilterComponent
import com.appelis.kmp_demo.assortment.uiLogic.filter.FilterComponentImpl

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