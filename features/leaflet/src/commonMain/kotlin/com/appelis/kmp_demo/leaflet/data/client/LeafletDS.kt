package com.appelis.kmp_demo.leaflet.data.client

import metro.leaflet.v1.GetLeafletsRequest
import metro.leaflet.v1.GetLeafletsResponse

interface LeafletSuspendDS {
    suspend fun getLeaflets(request: GetLeafletsRequest): GetLeafletsResponse
}

interface LeafletCallBackDS {
    fun getLeaflets(request: GetLeafletsRequest, responseCallback: (GetLeafletsResponse?, Exception?) -> Unit)
}

/***
 * iOS implementation of Leaflet suspend client will depend iOS implementation of LeafletCallBackClient
 * which is defined in swift code and uses GrpcSwift lib. Response is than passed as byte array to
 * wire adapter, which generates kotlin response
 *
 * android implementation of leaflet suspend client can look something like this:
 *
 * class LeafletSuspendClientImpl : LeafletSuspendClient {
 *     override suspend fun getLeaflets(request: GetLeafletsRequest): GetLeafletsResponse {
 *         val okHttpClient = OkHttpClient.Builder()
 *             .readTimeout(10, TimeUnit.SECONDS)
 *             .writeTimeout(10, TimeUnit.SECONDS)
 *             .build()
 *
 *         val grpcClient = GrpcClient.Builder()
 *             .client(okHttpClient)
 *             .baseUrl("https://dev.leaflet.appelis.app:443")
 *             // our grpc doesn't support gzip compression, this will disable it in our calls
 *             .minMessageToCompress(Long.MAX_VALUE)
 *             .build()
 *
 *         val registerDeviceClient = grpcClient.create(PublicClient::class)
 *         return registerDeviceClient
 *             .GetLeaflets()
 *             .execute(request)
 *     }
 * }
 */