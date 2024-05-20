package com.appelis.kmp_demo.core.network

interface ApiUrlProvider {
    val apiType: ApiType

    val leafletConnection: GrpcConnection
    val assortmentConnection: GrpcConnection
    val authConnection: GrpcConnection
}

enum class ApiType {
    PRODUCTION,
    TESTING
}

data class GrpcConnection(val hostUrl: String, val port: Int)