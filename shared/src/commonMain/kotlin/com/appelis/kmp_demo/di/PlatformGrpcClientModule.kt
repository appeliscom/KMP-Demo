package com.appelis.kmp_demo.di

import com.appelis.kmp_demo.assortment.data.AssortmentByCategorySuspendClient
import com.appelis.kmp_demo.leaflet.data.client.LeafletSuspendClient
import org.koin.core.module.Module
import org.koin.dsl.module

fun makePlatformGrpcClientModule(
    leafletSuspendClient: LeafletSuspendClient,
    assortmentByCategorySuspendClient: AssortmentByCategorySuspendClient
): Module = module {
    single<LeafletSuspendClient> { leafletSuspendClient }
    single<AssortmentByCategorySuspendClient> { assortmentByCategorySuspendClient }
}