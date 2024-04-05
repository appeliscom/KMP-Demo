package com.appelis.kmp_demo.leaflet_data

import com.appelis.kmp_demo.leaflet_data.data.client.LeafletSuspendClient
import com.squareup.wire.GrpcClient
import metro.leaflet.v1.GetLeafletsRequest
import metro.leaflet.v1.GetLeafletsResponse
import metro.leaflet.v1.PublicClient
import okhttp3.OkHttpClient
import java.util.concurrent.TimeUnit

class LeafletSuspendClientImpl : LeafletSuspendClient {
    override suspend fun getLeaflets(request: GetLeafletsRequest): GetLeafletsResponse {
        val okHttpClient = OkHttpClient.Builder()
            .readTimeout(10, TimeUnit.SECONDS)
            .writeTimeout(10, TimeUnit.SECONDS)
            .build()

        val grpcClient = GrpcClient.Builder()
            .client(okHttpClient)
            .baseUrl("https://dev.leaflet.appelis.app:443")
            // our grpc doesn't support gzip compression, this will disable it in our calls
            .minMessageToCompress(Long.MAX_VALUE)
            .build()

        val registerDeviceClient = grpcClient.create(PublicClient::class)
        return registerDeviceClient
            .GetLeaflets()
            .execute(request)
    }
}