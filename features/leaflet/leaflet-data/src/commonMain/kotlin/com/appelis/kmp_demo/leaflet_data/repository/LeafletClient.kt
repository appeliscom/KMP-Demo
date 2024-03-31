package com.appelis.kmp_demo.leaflet_data.repository

import metro.leaflet.v1.GetLeafletsRequest
import metro.leaflet.v1.GetLeafletsResponse

interface LeafletSuspendClient {
    suspend fun getLeaflets(request: GetLeafletsRequest): GetLeafletsResponse
}

interface LeafletCallBackClient {
    fun getLeaflets(request: GetLeafletsRequest, responseCallback: (GetLeafletsResponse?, Exception?) -> Unit)
}