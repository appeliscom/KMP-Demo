package com.appelis

import com.appelis.identity.DeviceLang
import com.appelis.identity.DeviceRegistrationClient
import com.appelis.identity.RegisterDeviceRequest
import com.appelis.identity.RegisterDeviceType
import com.appelis.identity.Token
import com.squareup.wire.GrpcClient
import metro.leaflet.v1.GetLeafletsRequest
import metro.leaflet.v1.PublicClient
import okhttp3.Interceptor
import okhttp3.MediaType
import okhttp3.OkHttpClient
import okhttp3.Protocol
import okhttp3.RequestBody
import okhttp3.Response
import okio.BufferedSink
import okio.GzipSink
import okio.deflate
import java.io.ByteArrayOutputStream
import java.util.UUID
import java.util.concurrent.TimeUnit
import java.util.zip.DeflaterOutputStream

class RegisterDeviceRepositoryImpl : RegisterDeviceRepository {

    val deflateInterceptor = Interceptor { chain ->
        val originalRequest = chain.request()
        val compressedRequest = originalRequest.newBuilder()
            .header("Accept-Encoding", "deflate")
            .method(originalRequest.method, originalRequest.body)
            .build()
        val response = chain.proceed(compressedRequest)

        response.newBuilder()
            .header("Content-Encoding", "deflate")
            .build()
    }

    override suspend fun registerDevice() {
        try {
            val okHttpClient = OkHttpClient.Builder()
//                .protocols(listOf(Protocol.HTTP_2, Protocol.HTTP_1_1))
                .addInterceptor(deflateInterceptor)
                .readTimeout(10, TimeUnit.SECONDS)
                .writeTimeout(10, TimeUnit.SECONDS)
                .build()

            val grpcClient = GrpcClient.Builder()
                .client(okHttpClient)
                .baseUrl("https://dev.auth.appelis.app:443")
                .build()

            val registerDeviceClient = grpcClient.create(DeviceRegistrationClient::class)
            val response = registerDeviceClient
                .RegisterDevice()
                .execute(
                    RegisterDeviceRequest(
                        appKey = "uvqf6o4lkj9k79o5r",
                        uniqId = UUID.randomUUID().toString(),
                        type = RegisterDeviceType.REGISTER_ANDROID_V5,
                        lang = DeviceLang.CZ
                    )
                )

            println(response)
        } catch (e: Exception) {
            // Handle the error appropriately
            e.printStackTrace()
        }
    }

    suspend fun getLeaflets() {
        try {
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
            val response = registerDeviceClient
                .GetLeaflets()
                .execute(
                    GetLeafletsRequest(
                        token = Token("eyJhbGciOiJIUzUxMiIsInR5cCI6IkpXVCJ9.eyJleHAiOjE3MTAyNTk3NzQsImlhdCI6MTcxMDI1OTQ3NCwiaXNzIjoiQXBwZWxpc0lkZW50aXR5UHJvdmlkZXIiLCJjbGFpbXMiOnsiYXBwZWxpcy5kZXZpY2VJZCI6IjE2NzYwIiwiYXBwZWxpcy5tb2JpbGVVc2VySWQiOiIxODU5MTcxOSIsImFwcGVsaXMucHJvamVjdElkIjoiMSJ9fQ.mUKpnTqM2J4fgxnaPYwqP57w29evcRrW0mSakkdmXF3MAjQ1K-gf__XrhfC61FOlthwMFAd_CCuqDgyhwdY3XQ"),
                        business = "Brno"
                    )
                )

            println(response)
        } catch (e: Exception) {
            // Handle the error appropriately
            e.printStackTrace()
        }
    }
}