package com.appelis.kmp_demo.leaflet_data.repository

import com.appelis.kmp_demo.core.client.convertCallbackCallToSuspend
import com.appelis.kmp_demo.leaflet.data.client.LeafletCallBackClient
import com.appelis.kmp_demo.leaflet.data.client.LeafletSuspendClient
import metro.leaflet.v1.GetLeafletsRequest
import metro.leaflet.v1.GetLeafletsResponse
import kotlin.coroutines.suspendCoroutine

class LeafletSuspendClientImpl(
    private val callBackClient: LeafletCallBackClient
) : LeafletSuspendClient {
    override suspend fun getLeaflets(request: GetLeafletsRequest): GetLeafletsResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackClient.getLeaflets(input, callback)
        })
    }
}


