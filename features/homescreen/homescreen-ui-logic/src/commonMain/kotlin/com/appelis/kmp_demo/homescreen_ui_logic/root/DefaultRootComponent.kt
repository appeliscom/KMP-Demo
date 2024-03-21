package com.appelis.kmp_demo.homescreen_ui_logic.root

import com.appelis.kmp_demo.homescreen_ui_logic.homescreen.DefaultHomescreenComponent
import com.appelis.kmp_demo.homescreen_ui_logic.homescreen.HomescreenComponent
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.stack.ChildStack
import com.arkivanov.decompose.router.stack.StackNavigation
import com.arkivanov.decompose.router.stack.childStack
import com.arkivanov.decompose.router.stack.popTo
import com.arkivanov.decompose.value.Value
import kotlinx.serialization.Serializable

class DefaultRootComponent(
    componentContext: ComponentContext,
) : RootComponent, ComponentContext by componentContext {
    private val navigation = StackNavigation<Config>()
    override val stack: Value<ChildStack<*, RootComponent.Child>> =
        childStack(
            source = navigation,
            serializer = Config.serializer(),
            initialConfiguration = Config.Homescreen,
            handleBackButton = true,
            childFactory = ::child,
        )

    private fun child(config: Config, componentContext: ComponentContext): RootComponent.Child {
        return when(config) {
            Config.Homescreen -> RootComponent.Child.HomescreenChild(homescreenComponent(componentContext))
        }
    }

    private fun homescreenComponent(componentContext: ComponentContext): HomescreenComponent {
        return DefaultHomescreenComponent(componentContext)
    }

    override fun onBackClicked(toIndex: Int) {
        navigation.popTo(index = toIndex)
    }

    @Serializable
    private sealed interface Config {
        @Serializable
        data object Homescreen: Config
    }
}