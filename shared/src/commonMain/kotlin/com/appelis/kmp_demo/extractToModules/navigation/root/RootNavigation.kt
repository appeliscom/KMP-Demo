package com.appelis.kmp_demo.extractToModules.navigation.root

import com.arkivanov.decompose.router.slot.ChildSlot
import kotlinx.coroutines.flow.StateFlow

interface RootNavigation {
    val slot: StateFlow<ChildSlot<RootDestination, RootEntry>>
}