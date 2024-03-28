package com.appelis.kmp_demo.navigation.navigationComponents.root

import com.appelis.kmp_demo.core.ChildConfig
import com.appelis.kmp_demo.core.NavigationChild
import com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow.MainNavigationComponent
import com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow.MainNavigationComponentImpl
import com.appelis.kmp_demo.startup_ui_logic.AppStartupComponent
import com.appelis.kmp_demo.startup_ui_logic.AppStartupComponentImpl
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.slot.ChildSlot
import com.arkivanov.decompose.router.slot.SlotNavigation
import com.arkivanov.decompose.router.slot.childSlot
import com.arkivanov.decompose.value.Value
import kotlinx.serialization.Serializable
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

interface RootNavigationComponent {
    val slot: Value<ChildSlot<RootSlotChildConfig, RootSlotNavigationChild>>
}

class RootNavigationComponentImpl(
    componentContext: ComponentContext
) : ComponentContext by componentContext, KoinComponent, RootNavigationComponent {
    private val navigation: SlotNavigation<RootSlotChildConfig> by inject()

    override val slot: Value<ChildSlot<RootSlotChildConfig, RootSlotNavigationChild>> = childSlot(
        source = navigation,
        serializer = RootSlotChildConfig.serializer(),
        initialConfiguration = { RootSlotChildConfig.AppStartup },
        handleBackButton = false,
        childFactory = { childConfig, childContext ->
            childConfig.createChild(childContext)
        }
    )
}

/***
 * represents "to where we want to navigate", including arguments
 */
@Serializable
sealed class RootSlotChildConfig: ChildConfig<RootSlotNavigationChild> {
    @Serializable
    data object AppStartup: RootSlotChildConfig() {
        override fun createChild(componentContext: ComponentContext): RootSlotNavigationChild {
            return RootSlotNavigationChild.AppStartup(AppStartupComponentImpl(componentContext))
        }

    }

    @Serializable
    data object MainAppFlow: RootSlotChildConfig() {
        override fun createChild(componentContext: ComponentContext): RootSlotNavigationChild {
            return RootSlotNavigationChild.MainAppFlow(MainNavigationComponentImpl(componentContext))
        }
    }
}

/**
 * Represents item in navigation stack from which view can be generated
 */
sealed class RootSlotNavigationChild : NavigationChild {
    data class AppStartup(val component: AppStartupComponent) : RootSlotNavigationChild()
    data class MainAppFlow(val component: MainNavigationComponent): RootSlotNavigationChild()
}