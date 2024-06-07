import com.appelis.kmp_demo.assortment.data.datasource.AssortmentSuspendDS
import com.appelis.kmp_demo.core.network.ApiUrlProvider
import com.squareup.wire.GrpcClient
import metro.assortment.v1.CatalogClient
import metro.assortment.v1.GetAssortmentRequest
import metro.assortment.v1.GetAssortmentResponse
import okhttp3.OkHttpClient
import okhttp3.Protocol

class AssortmentSuspendDSImpl(private val apiUrlProvider: ApiUrlProvider) :
    AssortmentSuspendDS {
    private val okHttpClient =
        OkHttpClient.Builder().protocols(listOf(Protocol.HTTP_1_1, Protocol.HTTP_2)).build()
    private val assortmentUrl = okhttp3.HttpUrl.Builder()
        .scheme("https")
        .host(apiUrlProvider.assortmentConnection.hostUrl)
        .port(apiUrlProvider.assortmentConnection.port)
        .build()

    private val assortmentClient = GrpcClient.Builder()
        .client(okHttpClient)
        .baseUrl(assortmentUrl)
        // our grpc doesn't support gzip compression, this will disable it in our calls
        .minMessageToCompress(Long.MAX_VALUE)
        .build()

    override suspend fun getArticles(request: GetAssortmentRequest): GetAssortmentResponse {
        return assortmentClient.create(CatalogClient::class)
            .GetAssortment()
            .execute(request)
    }
}