package auth

import com.appelis.identity.CreateRequest
import com.appelis.identity.CreateResponse
import com.appelis.identity.DeviceRegistrationClient
import com.appelis.identity.IdentityServiceClient
import com.appelis.identity.RefreshRequest
import com.appelis.identity.RefreshResponse
import com.appelis.identity.RegisterDeviceRequest
import com.appelis.identity.RegisterDeviceResponse
import com.appelis.kmp_demo.core.auth.data.clients.IdentitySuspendDS
import com.appelis.kmp_demo.core.network.ApiUrlProvider
import com.squareup.wire.GrpcClient
import okhttp3.OkHttpClient
import okhttp3.Protocol
import java.util.concurrent.TimeUnit

class IdentitySuspendDSImpl(apiUrlProvider: ApiUrlProvider): IdentitySuspendDS {
    private val okHttpClient = OkHttpClient.Builder().protocols(listOf(Protocol.HTTP_1_1, Protocol.HTTP_2)).build()

    private val url = okhttp3.HttpUrl.Builder()
        .scheme("https")
        .host(apiUrlProvider.authConnection.hostUrl)
        .port(apiUrlProvider.authConnection.port)
        .build()

    private val grpcClient = GrpcClient.Builder()
        .client(okHttpClient)
        .baseUrl(url)
        // our grpc doesn't support gzip compression, this will disable it in our calls
        .minMessageToCompress(Long.MAX_VALUE)
        .build()

    private val identityClient = grpcClient.create(IdentityServiceClient::class)
    private val deviceRegistrationClient = grpcClient.create(DeviceRegistrationClient::class)

    override suspend fun registerDevice(request: RegisterDeviceRequest): RegisterDeviceResponse {
        return deviceRegistrationClient.RegisterDevice().execute(request)
    }

    override suspend fun createToken(request: CreateRequest): CreateResponse {
        return identityClient.Create().execute(request)
    }

    override suspend fun refreshToken(request: RefreshRequest): RefreshResponse {
        return identityClient.Refresh().execute(request)
    }
}