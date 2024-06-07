package com.appelis.kmp_demo

import com.appelis.kmp_demo.core.network.ApiType
import com.appelis.kmp_demo.core.network.ApiUrlProvider
import com.appelis.kmp_demo.core.network.GrpcConnection

class DemoAppUrlProvider(override val apiType: ApiType) : ApiUrlProvider {
    override val leafletConnection: GrpcConnection
        get() = when (apiType) {
            ApiType.PRODUCTION -> GrpcConnection("", port = 443)
            ApiType.TESTING -> GrpcConnection("dev.leaflet.appelis.app", port = 443)
        }

    override val assortmentConnection: GrpcConnection
        get() = when (apiType) {
            ApiType.PRODUCTION -> GrpcConnection("", port = 443)
            ApiType.TESTING -> GrpcConnection("dev.massortment.appelis.app", port = 443)
        }
    override val authConnection: GrpcConnection
        get() = when (apiType) {
            ApiType.PRODUCTION -> GrpcConnection("", port = 443)
            ApiType.TESTING -> GrpcConnection("dev.auth.appelis.app", port = 443)
        }

    override  val categoryConnection: GrpcConnection
        get() = when (apiType) {
            ApiType.PRODUCTION -> GrpcConnection("", port = 443)
            ApiType.TESTING -> GrpcConnection("dev.categories.appelis.app", port = 443)
        }
}
