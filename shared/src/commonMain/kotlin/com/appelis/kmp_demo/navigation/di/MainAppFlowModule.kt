package com.appelis.kmp_demo.navigation.di

import com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow.MainFlowChildConfig
import com.appelis.kmp_demo.navigation.navigationComponents.root.RootSlotChildConfig
import com.arkivanov.decompose.router.slot.SlotNavigation
import com.arkivanov.decompose.router.stack.StackNavigation
import org.koin.core.annotation.ComponentScan
import org.koin.core.annotation.Single

//val navigationModule: Module = module {
//    // navigation
//    single<StackNavigation<MainFlowChildConfig>> { StackNavigation() }
//    single<SlotNavigation<RootSlotChildConfig>> { SlotNavigation() }
//
//    // routers
//    singleOf(::AppStartupRouterImpl) bind AppStartupRouter::class
//    singleOf(::HomescreenRouterImpl) bind HomescreenRouter::class
//    singleOf(::LeafletCollectionRouterImpl) bind LeafletCollectionRouter::class
//}

@org.koin.core.annotation.Module
@ComponentScan("com.appelis.kmp_demo.navigation")
class NavigationModule {
    @Single fun slotNavigationStack(): SlotNavigation<RootSlotChildConfig> = SlotNavigation()
    @Single fun mainFlowNavigationStack(): StackNavigation<MainFlowChildConfig> = StackNavigation()
}