package com.appelis.kmp_demo.android.di

import com.appelis.kmp_demo.di.makeNativeModule
import org.koin.core.module.Module

val nativeModule = makeNativeModule(
    nativeTestDependency = { TestAndroidDependency() }
)

