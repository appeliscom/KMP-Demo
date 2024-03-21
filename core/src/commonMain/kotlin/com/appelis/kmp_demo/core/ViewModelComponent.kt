package com.appelis.kmp_demo.core

import com.appelis.kmp_demo.core.extensions.componentCoroutineScope
import com.arkivanov.decompose.ComponentContext
import org.koin.core.component.KoinComponent

/**
 * Base Decompose component that encapsulates a ViewModel and passes ViewModel events back to parent.
 * This is a Koin injection entry point.
 */
abstract class ViewModelComponent<VM : SharedViewModel<*, *>>(
    componentContext: ComponentContext,
) : ComponentContext by componentContext, KoinComponent {

    abstract val viewModel: VM

    private val coroutineScope = componentCoroutineScope()
}
