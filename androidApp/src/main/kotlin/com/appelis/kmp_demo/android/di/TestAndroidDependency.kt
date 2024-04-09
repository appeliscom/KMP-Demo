package com.appelis.kmp_demo.android.di

import com.appelis.kmp_demo.di.NativeTestDependency

class TestAndroidDependency: NativeTestDependency {
    override fun greet(): String {
        return "Native dependency from Android"
    }
}