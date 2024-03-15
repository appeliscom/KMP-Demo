package com.appelis.kmp_demo.di

import org.koin.core.KoinApplication.Companion.init
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