package com.appelis.kmp_demo.leaflet_data.di


import com.appelis.kmp_demo.leaflet_data.mapper.LeafletMapper
import com.appelis.kmp_demo.leaflet_domain.repository.LeafletRepository
import com.appelis.kmp_demo.leaflet_data.repository.LeafletRepositoryImpl
import org.koin.core.module.Module
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.bind
import org.koin.dsl.module

val leafletDataModule: Module = module {
    singleOf(::LeafletRepositoryImpl) bind LeafletRepository::class
    singleOf(::LeafletMapper)
}