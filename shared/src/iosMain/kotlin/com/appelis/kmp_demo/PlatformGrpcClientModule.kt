package com.appelis.kmp_demo

import com.appelis.kmp_demo.assortment.data.AssortmentByCategorySuspendDS
import com.appelis.kmp_demo.core.auth.data.clients.IdentitySuspendDS
import com.appelis.kmp_demo.core.localDB.database.AppDatabase
import com.appelis.kmp_demo.leaflet.data.client.LeafletSuspendDS
import org.koin.core.module.Module
import org.koin.dsl.module

fun makePlatformModule(
    grpcDsFactory: GrpcDSFactory,
    database: AppDatabase
): Module = module {
    single<LeafletSuspendDS> { grpcDsFactory.leafletDS() }
    single<AssortmentByCategorySuspendDS> { grpcDsFactory.assortmentByCategoryDS() }
    single<IdentitySuspendDS> { grpcDsFactory.identityDS() }

    single<AppDatabase> { database }
}

interface GrpcDSFactory {
    fun leafletDS(): LeafletSuspendDS
    fun assortmentByCategoryDS(): AssortmentByCategorySuspendDS
    fun identityDS(): IdentitySuspendDS
}