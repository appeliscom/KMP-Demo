package com.example.common

class Test {
    fun sayHello(): String {
        return hello()
    }

    fun alternative2(): String {
        return "alternative"
    }
}

expect fun hello(): String
