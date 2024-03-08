package com.example.common

class Test {
    fun sayHello(): String {
        return hello()
    }

    fun alternativeX(): String {
        return "alternative"
    }
}

expect fun hello(): String
