package com.appelis.kmp_demo.android.di

import com.appelis.kmp_demo.di.NativeTestDependency

class TestAndroidDependency: com.appelis.kmp_demo.di.NativeTestDependency {
    override fun greet(): String {
        return "Native dependency from Android"
    }
}