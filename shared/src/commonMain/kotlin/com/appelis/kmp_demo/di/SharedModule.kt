package com.appelis.kmp_demo.di

import com.appelis.kmp_demo.Greeting
import org.koin.core.module.Module
import org.koin.core.module.dsl.singleOf
import org.koin.dsl.module

val sharedModule: Module = module {
    singleOf(::Greeting)
}