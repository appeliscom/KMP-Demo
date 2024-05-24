package com.appelis.kmp_demo.android.di

import AssortmentSuspendClientImpl
import auth.IdentitySuspendDSImpl
import com.appelis.kmp_demo.assortment.data.AssortmentByCategorySuspendDS
import com.appelis.kmp_demo.core.auth.data.clients.IdentitySuspendDS
import com.appelis.kmp_demo.leaflet.data.client.LeafletSuspendDS
import com.appelis.kmp_demo.leaflet_data.LeafletSuspendDSImpl
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.bind
import org.koin.dsl.module

val platformModule = module {
    singleOf(::LeafletSuspendDSImpl) bind LeafletSuspendDS::class
    singleOf(::AssortmentSuspendClientImpl) bind AssortmentByCategorySuspendDS::class
    singleOf(::IdentitySuspendDSImpl) bind IdentitySuspendDS::class
}

