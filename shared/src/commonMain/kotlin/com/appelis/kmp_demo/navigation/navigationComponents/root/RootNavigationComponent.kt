package com.appelis.kmp_demo.navigation.navigationComponents.root

import com.appelis.kmp_demo.core.extensions.asStateFlow
import com.appelis.kmp_demo.core.extensions.componentCoroutineScope
import com.appelis.kmp_demo.navigation.ChildConfig
import com.appelis.kmp_demo.navigation.NavigationChild
import com.appelis.kmp_demo.navigation.SlotNavigationChild
import com.appelis.kmp_demo.navigation.deeplinks.Deeplink
import com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow.MainNavigationComponent
import com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow.MainNavigationComponentImpl
import com.appelis.kmp_demo.startup.component.AppStartupComponent
import com.appelis.kmp_demo.startup.component.AppStartupComponentImpl
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.slot.ChildSlot
import com.arkivanov.decompose.router.slot.SlotNavigation
import com.arkivanov.decompose.router.slot.activate
import com.arkivanov.decompose.router.slot.child
import com.arkivanov.decompose.router.slot.childSlot
import com.arkivanov.decompose.router.slot.navigate
import com.arkivanov.decompose.value.Value
import kotlinx.coroutines.MainScope
import kotlinx.coroutines.coroutineScope
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.first
import kotlinx.coroutines.launch
import kotlinx.serialization.Serializable
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject
import kotlin.coroutines.coroutineContext
import kotlin.coroutines.suspendCoroutine

interface RootNavigationComponent {
    val slot: StateFlow<ChildSlot<RootSlotChildConfig, RootSlotNavigationChild>>
    fun handleDeeplink(deeplink: Deeplink)
}

class RootNavigationComponentImpl(
    componentContext: ComponentContext
) : ComponentContext by componentContext, KoinComponent, RootNavigationComponent {
    private val navigation: SlotNavigation<RootSlotChildConfig> by inject()

    override val slot: StateFlow<ChildSlot<RootSlotChildConfig, RootSlotNavigationChild>> = childSlot(
        source = navigation,
        serializer = RootSlotChildConfig.serializer(),
        initialConfiguration = { RootSlotChildConfig.AppStartup },
        handleBackButton = false,
        childFactory = { childConfig, childContext ->
            childConfig.createChild(childContext)
        }
    ).asStateFlow(componentContext.componentCoroutineScope())

    override fun handleDeeplink(deeplink: Deeplink) {
        componentCoroutineScope().launch {
            // At first, try handle deeplink in active slot
            if (slot.value.child?.instance?.handleDeeplink(deeplink) == true) return@launch

            // If active slot can't handle deeplink, activate slot that can and pass deeplink to it
            val newSlotConfig =  when (deeplink) {
                is Deeplink.ArticleDetail -> { RootSlotChildConfig.MainAppFlow }
            }
            // wait until requested slot is activated
            navigation.activate(newSlotConfig)
            slot.first { slot -> slot.child?.configuration == newSlotConfig }
            slot.value.child?.instance?.handleDeeplink(deeplink)
        }
    }
}

/***
 * represents "to where we want to navigate", including arguments
 */
@Serializable
sealed class RootSlotChildConfig : ChildConfig<RootSlotNavigationChild> {
    @Serializable
    data object AppStartup : RootSlotChildConfig() {
        override fun createChild(componentContext: ComponentContext): RootSlotNavigationChild {
            return RootSlotNavigationChild.AppStartup(AppStartupComponentImpl(componentContext))
        }
    }

    @Serializable
    data object MainAppFlow : RootSlotChildConfig() {
        override fun createChild(componentContext: ComponentContext): RootSlotNavigationChild {
            return RootSlotNavigationChild.MainAppFlow(MainNavigationComponentImpl(componentContext))
        }
    }
}

/**
 * Represents item in navigation stack from which view can be generated
 */
sealed class RootSlotNavigationChild : SlotNavigationChild {
    data class AppStartup(val component: AppStartupComponent) : RootSlotNavigationChild()
    data class MainAppFlow(val component: MainNavigationComponent) : RootSlotNavigationChild() {
        override suspend fun handleDeeplink(deeplink: Deeplink): Boolean {
            return component.handleDeeplink(deeplink)
        }
    }
}