package com.appelis.kmp_demo.navigation

import com.appelis.kmp_demo.navigation.deeplinks.Deeplink
import com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow.MainFlowChildConfig
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.router.stack.StackNavigation
import com.arkivanov.decompose.router.stack.StackNavigator
import com.arkivanov.decompose.router.stack.pop
import kotlin.coroutines.resume
import kotlin.coroutines.suspendCoroutine


interface StackNavigationChild<T : Any> : NavigationChild {
    fun isNewSheetRoot(): Boolean = false
    fun handleDeeplink(deeplink: Deeplink) = run { }
}

interface SlotNavigationChild : NavigationChild {
    fun handleDeeplink(deeplink: Deeplink): Boolean = false
}

interface NavigationChild

/**
 * A base interface for destinations used in Decompose navigation.
 */
interface ChildConfig<out C : NavigationChild> {
    fun createChild(componentContext: ComponentContext): C
}