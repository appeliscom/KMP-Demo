package com.appelis.kmp_demo.extractToModules.navigation.root

import com.arkivanov.decompose.router.slot.ChildSlot
import com.arkivanov.decompose.value.Value

interface RootNavigationComponent {
    val slot: Value<ChildSlot<RootDestination, RootEntry>>
}