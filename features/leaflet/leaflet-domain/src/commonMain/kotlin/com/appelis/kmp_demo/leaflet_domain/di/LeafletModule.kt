package com.appelis.kmp_demo.leaflet_domain.di

import com.appelis.kmp_demo.leaflet_domain.usecase.GetLeafletsUseCase
import com.appelis.kmp_demo.leaflet_domain.usecase.GetLeafletsUseCaseImpl
import org.koin.core.module.Module
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.bind
import org.koin.dsl.module

val leafletDomainModule: Module = module {
    singleOf(::GetLeafletsUseCaseImpl) bind GetLeafletsUseCase::class
}