package com.appelis.kmp_demo.assortment.data
import appelis.CursorForwardPagingParams
import appelis.SortOrder
import com.appelis.core.domain.network.CursorPagingResult
import com.appelis.core.domain.network.Edge
import com.appelis.core.domain.network.PageInfo
import com.appelis.identity.Token
import com.appelis.identity.TokenError
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.assortment.domain.repository.AssortmentRepository
import com.appelis.kmp_demo.core.network.BaseRepository
import com.appelis.kmp_demo.core.auth.domain.AuthClient
import com.appelis.kmp_demo.core.network.NetworkException
import metro.assortment.v1.FilterFlags
import metro.assortment.v1.FilterFlagsExt
import metro.assortment.v1.GetAssortmentRequest
import metro.assortment.v1.GetAssortmentResponse
import metro.assortment.v1.SortField
import metro.assortment.v1.SortingFlags
import metro.assortment.v1.StockStatus
import org.koin.core.annotation.Single

@Single
class AssortmentRepositoryImpl(
    private val assortmentSuspendDS: AssortmentByCategorySuspendDS,
    authClient: AuthClient
) : AssortmentRepository, BaseRepository(authClient) {
    override suspend fun getArticles(
        pageSize: Int,
        cursor: String?
    ): CursorPagingResult<ArticlePreviewModel> {
        return fetch { accessToken ->
            val response = assortmentSuspendDS.getArticles(
                GetAssortmentRequest(
                    token = Token(accessToken),
                    paging = CursorForwardPagingParams(
                        after = cursor,
                        first = pageSize
                    ),
                    filtering = FilterFlagsExt(
                        flags = FilterFlags(
                            businessId = "1",
                            status = StockStatus.AVAILABLE
                        ),
                        categoryId = "37808"
                    ) ,
                    sorting = SortingFlags(type = SortOrder.ASC, field_ = SortField.PRICE_MUNIT)
                )
            )

            when (response.tokenErr) {
                TokenError.UNKNOWN_TOKEN_ERROR -> throw NetworkException(code = NetworkException.ErrorCode.UNKNOWN)
                TokenError.INVALID_TOKEN -> throw NetworkException(code = NetworkException.ErrorCode.AUTH_ERROR)
                null -> {}
            }

            return@fetch CursorPagingResult(
                pageInfo = PageInfo.Cursor(hasNextPage = response.page?.hasNext ?: false),
                edges = response.page?.nodes?.map {
                    Edge.Cursor(
                        cursor = it.cursor,
                        node = ArticlePreviewModel(
                            name = it.data_?.data_?.name ?: ""
                        )
                    )
                } ?: emptyList()
            )
        }
    }
}

interface AssortmentByCategorySuspendDS {
    suspend fun getArticles(request: GetAssortmentRequest): GetAssortmentResponse
}

interface AssortmentByCategoryCallBackDS {
    fun getArticles(
        request: GetAssortmentRequest,
        responseCallback: (GetAssortmentResponse?, exception: Exception?) -> Unit
    )
}

