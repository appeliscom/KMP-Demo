import appelis.category.v1.ByCategoryKeyRequest
import appelis.category.v1.ByCategoryKeyResponse
import appelis.category.v1.ByIdsRequest
import appelis.category.v1.ByIdsResponse
import appelis.category.v1.CategoryCatalogClient
import appelis.category.v1.ChildCategoriesRequest
import appelis.category.v1.ChildCategoriesResponse
import com.appelis.kmp_demo.assortment.data.datasource.CategorySuspendDS
import com.appelis.kmp_demo.core.network.ApiUrlProvider
import com.squareup.wire.GrpcClient
import okhttp3.OkHttpClient
import okhttp3.Protocol

class CategorySuspendDSImpl(private val apiUrlProvider: ApiUrlProvider) : CategorySuspendDS {
    private val okHttpClient =
        OkHttpClient.Builder().protocols(listOf(Protocol.HTTP_1_1, Protocol.HTTP_2)).build()

    private val categoryUrl = okhttp3.HttpUrl.Builder()
        .scheme("https")
        .host(apiUrlProvider.categoryConnection.hostUrl)
        .port(apiUrlProvider.categoryConnection.port)
        .build()

    private val categoryClient = GrpcClient.Builder()
        .client(okHttpClient)
        .baseUrl(categoryUrl)
        // our grpc doesn't support gzip compression, this will disable it in our calls
        .minMessageToCompress(Long.MAX_VALUE)
        .build()

    override suspend fun getChildCategories(request: ChildCategoriesRequest): ChildCategoriesResponse {
        return categoryClient.create(CategoryCatalogClient::class)
            .ChildCategories()
            .execute(request)
    }

    override suspend fun getCategoryByKey(request: ByCategoryKeyRequest): ByCategoryKeyResponse {
        return categoryClient.create(CategoryCatalogClient::class)
            .ByCategoryKey()
            .execute(request)
    }

    override suspend fun getCategories(request: ByIdsRequest): ByIdsResponse {
        return categoryClient.create(CategoryCatalogClient::class)
            .ByIds()
            .execute(request)
    }
}