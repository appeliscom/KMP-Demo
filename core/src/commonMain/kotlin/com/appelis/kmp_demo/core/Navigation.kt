package com.appelis.kmp_demo.core

import com.arkivanov.decompose.ComponentContext

/**
 * This interface is used to mark a class as a navigation entry.
 * The implementation of this interface wraps instance of a screen.
 */
interface NavigationChild

/**
 * A base interface for destinations used in Decompose navigation.
 */
interface Destination<out C : NavigationChild> {
    fun createComponent(componentContext: ComponentContext): C
}