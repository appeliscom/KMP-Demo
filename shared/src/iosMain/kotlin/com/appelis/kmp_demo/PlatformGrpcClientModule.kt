package com.appelis.kmp_demo

import com.appelis.kmp_demo.core.auth.data.clients.IdentitySuspendDS
import com.appelis.kmp_demo.core.localDB.database.AppDatabase
import com.appelis.kmp_demo.leaflet.data.client.LeafletSuspendDS
import com.appelis.kmp_demo.assortment.data.datasource.AssortmentSuspendDS
import com.appelis.kmp_demo.assortment.data.datasource.CategorySuspendDS
import org.koin.core.module.Module
import org.koin.dsl.module

fun makePlatformModule(
    grpcDsFactory: GrpcDSFactory,
    database: AppDatabase
): Module = module {
    single<LeafletSuspendDS> { grpcDsFactory.leafletDS() }
    single<AssortmentSuspendDS> { grpcDsFactory.assortmentDS() }
    single<IdentitySuspendDS> { grpcDsFactory.identityDS() }
    single<CategorySuspendDS> { grpcDsFactory.categoryDS() }

    single<AppDatabase> { database }
}

interface GrpcDSFactory {
    fun leafletDS(): LeafletSuspendDS
    fun assortmentDS(): AssortmentSuspendDS
    fun categoryDS(): CategorySuspendDS
    fun identityDS(): IdentitySuspendDS
}