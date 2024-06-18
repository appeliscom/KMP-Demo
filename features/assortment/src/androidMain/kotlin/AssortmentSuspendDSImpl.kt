import com.appelis.kmp_demo.assortment.data.datasource.AssortmentSuspendDS
import com.appelis.kmp_demo.core.network.ApiUrlProvider
import com.squareup.wire.GrpcClient
import metro.assortment.v1.CatalogClient
import metro.assortment.v1.GetArticleCountByCategoryIdsRequest
import metro.assortment.v1.GetArticleCountByCategoryIdsResponse
import metro.assortment.v1.GetArticleResponse
import metro.assortment.v1.GetArticlesRequest
import metro.assortment.v1.GetAssortmentRequest
import metro.assortment.v1.GetAssortmentResponse
import okhttp3.OkHttpClient
import okhttp3.Protocol

class AssortmentSuspendDSImpl(private val apiUrlProvider: ApiUrlProvider) : AssortmentSuspendDS {
    private val okHttpClient = OkHttpClient
        .Builder()
        .protocols(listOf(Protocol.HTTP_1_1, Protocol.HTTP_2))
        .build()

    private val assortmentUrl = okhttp3.HttpUrl.Builder()
        .scheme("https")
        .host(apiUrlProvider.assortmentConnection.hostUrl)
        .port(apiUrlProvider.assortmentConnection.port)
        .build()

    private val grpcClient = GrpcClient.Builder()
        .client(okHttpClient)
        .baseUrl(assortmentUrl)
        // our grpc doesn't support gzip compression, this will disable it in our calls
        .minMessageToCompress(Long.MAX_VALUE)
        .build()

    private val assortmentClient = grpcClient.create(CatalogClient::class)

    override suspend fun getArticles(request: GetArticlesRequest): GetArticleResponse {
        return assortmentClient.GetArticles().execute(request)
    }

    override suspend fun getArticlesPaged(request: GetAssortmentRequest): GetAssortmentResponse {
        return assortmentClient.GetAssortment().execute(request)
    }

    override suspend fun getArticleCountByCategoryIds(request: GetArticleCountByCategoryIdsRequest): GetArticleCountByCategoryIdsResponse {
        return assortmentClient.GetArticleCountByCategoryIds().execute(request)
    }
}