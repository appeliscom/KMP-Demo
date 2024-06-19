package com.appelis.kmp_demo.navigation

import com.appelis.kmp_demo.navigation.deeplinks.Deeplink
import com.arkivanov.decompose.ComponentContext


interface StackNavigationChild<T : Any> : NavigationChild {
    fun isNewSheetRoot(): Boolean = false
    suspend fun handleDeeplink(deeplink: Deeplink) = run { }
}

interface SlotNavigationChild : NavigationChild {
    suspend fun handleDeeplink(deeplink: Deeplink): Boolean = false
}

interface NavigationChild

/**
 * A base interface for destinations used in Decompose navigation.
 */
interface ChildConfig<out C : NavigationChild> {
    fun createChild(componentContext: ComponentContext): C
}