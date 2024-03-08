package com.appelis.kmp_demo

class Greeting {
    private val platform: Platform = getPlatform()

    fun greet(): String {
        return "Hello, ${platform.name}!"
    }

    fun greetTwo(): String {
        return "Second Hello"
    }
}