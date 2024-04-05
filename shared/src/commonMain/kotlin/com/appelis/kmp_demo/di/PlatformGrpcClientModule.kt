package com.appelis.kmp_demo.di

import com.appelis.kmp_demo.leaflet_data.data.client.LeafletSuspendClient
import org.koin.core.module.Module
import org.koin.dsl.module

fun makePlatformGrpcClientModule(
    leafletSuspendClient: LeafletSuspendClient
): Module = module {
    single<LeafletSuspendClient> { leafletSuspendClient }
}