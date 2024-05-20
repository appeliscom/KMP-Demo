package com.appelis.kmp_demo.leaflet_data.repository

import com.appelis.kmp_demo.core.network.convertCallbackCallToSuspend
import com.appelis.kmp_demo.leaflet.data.client.LeafletCallBackDS
import com.appelis.kmp_demo.leaflet.data.client.LeafletSuspendDS
import metro.leaflet.v1.GetLeafletsRequest
import metro.leaflet.v1.GetLeafletsResponse

class LeafletSuspendDSImpl(
    private val callBackDS: LeafletCallBackDS
) : LeafletSuspendDS {
    override suspend fun getLeaflets(request: GetLeafletsRequest): GetLeafletsResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackDS.getLeaflets(input, callback)
        })
    }
}


