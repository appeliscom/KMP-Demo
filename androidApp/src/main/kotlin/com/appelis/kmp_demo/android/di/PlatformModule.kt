package com.appelis.kmp_demo.android.di

import AssortmentSuspendClientImpl
import android.content.Context
import auth.IdentitySuspendDSImpl
import com.appelis.kmp_demo.assortment.data.AssortmentByCategorySuspendDS
import com.appelis.kmp_demo.core.auth.data.clients.IdentitySuspendDS
import com.appelis.kmp_demo.core.localDB.database.AppDatabase
import com.appelis.kmp_demo.leaflet.data.client.LeafletSuspendDS
import com.appelis.kmp_demo.leaflet_data.LeafletSuspendDSImpl
import localDB.getDatabase
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.bind
import org.koin.dsl.module

fun makePlatformModule(context: Context) = module {
    singleOf(::LeafletSuspendDSImpl) bind LeafletSuspendDS::class
    singleOf(::AssortmentSuspendClientImpl) bind AssortmentByCategorySuspendDS::class
    singleOf(::IdentitySuspendDSImpl) bind IdentitySuspendDS::class
    single<AppDatabase> { getDatabase(context) }
}

