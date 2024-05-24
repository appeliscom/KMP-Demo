package com.appelis.kmp_demo.android.navigation

import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import com.appelis.kmp_demo.android.screens.AppStartupView
import com.appelis.kmp_demo.navigation.navigationComponents.root.RootNavigationComponent
import com.appelis.kmp_demo.navigation.navigationComponents.root.RootSlotChildConfig
import com.appelis.kmp_demo.navigation.navigationComponents.root.RootSlotNavigationChild
import com.arkivanov.decompose.extensions.compose.jetpack.subscribeAsState
import com.arkivanov.decompose.router.slot.ChildSlot

@Composable
fun RootNavigationGraph(
    component: RootNavigationComponent,
    modifier: Modifier = Modifier
) {
    val slot: ChildSlot<RootSlotChildConfig, RootSlotNavigationChild> by component.slot.collectAsState()

    when(val slotInstance = slot.child?.instance) {
        is RootSlotNavigationChild.AppStartup -> AppStartupView(component = slotInstance.component, modifier)
        is RootSlotNavigationChild.MainAppFlow -> MainFlowNavigationGraph(component = slotInstance.component, modifier)
        else -> Unit
    }
}