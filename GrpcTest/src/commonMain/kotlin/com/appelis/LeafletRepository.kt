package com.appelis

import com.appelis.identity.Token
import metro.leaflet.v1.GetLeafletsRequest
import metro.leaflet.v1.GetLeafletsResponse

class LeafletRepository(
    private val leafletClient: LeafletSuspendClient
) {
    suspend fun getLeaflets(): GetLeafletsResponse {
        val response = leafletClient.getLeaflets(
            GetLeafletsRequest(
                token = Token("eyJhbGciOiJIUzUxMiIsInR5cCI6IkpXVCJ9.eyJleHAiOjE3MTAzNDUzMDMsImlhdCI6MTcxMDM0NTAwMywiaXNzIjoiQXBwZWxpc0lkZW50aXR5UHJvdmlkZXIiLCJjbGFpbXMiOnsiYXBwZWxpcy5kZXZpY2VJZCI6IjE2NzYwIiwiYXBwZWxpcy5tb2JpbGVVc2VySWQiOiIxODU5MTcxOSIsImFwcGVsaXMucHJvamVjdElkIjoiMSJ9fQ.Y8TG90vGIdNwPD5yUoq7_PgkITnrEcyBbWLmK3B1F40lZyKqqr1ldaQgKkUItSO28vdBpTmw87kRRndjo_YWcw"),
                business = "Brno"
            )
        )
        return response
    }

    suspend fun getLeafletsWithToken(token: String): GetLeafletsResponse {
        val response = leafletClient.getLeaflets(
            GetLeafletsRequest(
                token = Token(token),
                business = "Brno"
            )
        )
        return response
    }
}

interface LeafletSuspendClient {
    suspend fun getLeaflets(request: GetLeafletsRequest): GetLeafletsResponse
}

interface LeafletCallBackClient {
    fun getLeaflets(request: GetLeafletsRequest, responseCallback: (GetLeafletsResponse?, Exception?) -> Unit)
}