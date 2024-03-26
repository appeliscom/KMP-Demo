package com.appelis.kmp_demo.extractToModules.navigation.root

import com.arkivanov.decompose.router.slot.ChildSlot
import com.arkivanov.decompose.value.Value
import kotlinx.coroutines.flow.StateFlow

interface RootNavigation {
    val slot: Value<ChildSlot<RootDestination, RootEntry>>
}