import com.appelis.kmp_demo.assortment.data.AssortmentByCategorySuspendDS
import com.appelis.kmp_demo.core.network.ApiUrlProvider
import com.squareup.wire.GrpcClient
import metro.assortment.v1.CatalogClient
import metro.assortment.v1.GetAssortmentRequest
import metro.assortment.v1.GetAssortmentResponse
import metro.leaflet.v1.PublicClient
import okhttp3.OkHttpClient
import okhttp3.Protocol
import java.util.concurrent.TimeUnit

class AssortmentSuspendClientImpl(private val apiUrlProvider: ApiUrlProvider) : AssortmentByCategorySuspendDS {
    override suspend fun getArticles(request: GetAssortmentRequest): GetAssortmentResponse {
        val okHttpClient = OkHttpClient.Builder().protocols(listOf(Protocol.HTTP_1_1, Protocol.HTTP_2)).build()

        val url = okhttp3.HttpUrl.Builder()
            .scheme("https")
            .host(apiUrlProvider.assortmentConnection.hostUrl)
            .port(apiUrlProvider.assortmentConnection.port)
            .build()

        val grpcClient = GrpcClient.Builder()
            .client(okHttpClient)
            .baseUrl(url)
            // our grpc doesn't support gzip compression, this will disable it in our calls
            .minMessageToCompress(Long.MAX_VALUE)
            .build()

        val client = grpcClient.create(CatalogClient::class)
        return client
            .GetAssortment()
            .execute(request)
    }
}