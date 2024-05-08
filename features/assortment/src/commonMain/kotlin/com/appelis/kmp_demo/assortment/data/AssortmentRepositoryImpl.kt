package com.appelis.kmp_demo.assortment.data

import appelis.CursorForwardPagingParams
import appelis.SortOrder
import com.appelis.core.domain.network.CursorPagingResult
import com.appelis.core.domain.network.Edge
import com.appelis.core.domain.network.PageInfo
import com.appelis.identity.Token
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.assortment.domain.repository.AssortmentRepository
import com.appelis.kmp_demo.core.toClean.testToken
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
    private val assortmentSuspendClient: AssortmentByCategorySuspendClient
) : AssortmentRepository {
    override suspend fun getArticles(
        pageSize: Int,
        cursor: String?
    ): CursorPagingResult<ArticlePreviewModel> {
        val response = assortmentSuspendClient.getArticles(
            GetAssortmentRequest(
                token = Token(testToken),
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

        if (response.tokenErr != null ) {
            println(response.tokenErr)
        }

        return CursorPagingResult(
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

interface AssortmentByCategorySuspendClient {
    suspend fun getArticles(request: GetAssortmentRequest): GetAssortmentResponse
}

interface AssortmentByCategoryCallBackClient {
    fun getArticles(
        request: GetAssortmentRequest,
        responseCallback: (GetAssortmentResponse?, exception: Exception?) -> Unit
    )
}

