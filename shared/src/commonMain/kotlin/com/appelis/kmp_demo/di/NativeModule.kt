package com.appelis.kmp_demo.di

import com.appelis.kmp_demo.leaflet_data.repository.LeafletSuspendClient
import org.koin.core.module.Module
import org.koin.core.scope.Scope
import org.koin.dsl.module

typealias NativeInjectionFactory<T> = Scope.() -> T
fun makeNativeModule(
   nativeTestDependency: NativeInjectionFactory<NativeTestDependency>
): Module {
    return module {
        single { nativeTestDependency() }
    }
}

interface NativeTestDependency {
    fun greet(): String
}