package com.appelis.kmp_demo.assortment.data.repository
import appelis.CursorForwardPagingParams
import appelis.SortOrder
import com.appelis.core.domain.network.CursorPagingResult
import com.appelis.core.domain.network.Edge
import com.appelis.core.domain.network.PageInfo
import com.appelis.identity.Token
import com.appelis.kmp_demo.assortment.data.mapper.AssortmentMapper
import com.appelis.kmp_demo.assortment.data.datasource.AssortmentSuspendDS
import com.appelis.kmp_demo.assortment.domain.model.ArticleModel
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.assortment.domain.model.AssortmentFilterModel
import com.appelis.kmp_demo.assortment.domain.model.AssortmentSortingModel
import com.appelis.kmp_demo.assortment.domain.repository.AssortmentRepository
import com.appelis.kmp_demo.core.network.BaseRepository
import com.appelis.kmp_demo.core.auth.domain.AuthClient
import metro.assortment.v1.FilterFlags
import metro.assortment.v1.FilterFlagsExt
import metro.assortment.v1.GetArticleCountByCategoryIdsRequest
import metro.assortment.v1.GetArticlesRequest
import metro.assortment.v1.GetAssortmentRequest
import metro.assortment.v1.SortField
import metro.assortment.v1.SortingFlags
import metro.assortment.v1.StockStatus
import org.koin.core.annotation.Single

@Single
class AssortmentRepositoryImpl(
    private val assortmentSuspendDS: AssortmentSuspendDS,
    private val mapper: AssortmentMapper,
    authClient: AuthClient
) : AssortmentRepository, BaseRepository(authClient) {
    override suspend fun getArticle(articleId: String): ArticleModel {
        return fetch { accessToken ->
            val response = assortmentSuspendDS.getArticles(
                GetArticlesRequest(token = Token(accessToken), articleIds = listOf(articleId))
            )
            handleTokenError(response.tokenErr)

            return@fetch response.data_?.array?.firstOrNull()?.let {
                mapper.map(it)
            } ?: throw Exception("Article with id $articleId not found")
        }
    }

    override suspend fun getArticles(
        pageSize: Int,
        cursor: String?,
        filter: AssortmentFilterModel,
        sorting: AssortmentSortingModel
    ): CursorPagingResult<ArticlePreviewModel> {
        return fetch { accessToken ->
            val response = assortmentSuspendDS.getArticlesPaged(
                mapper.mapToRequest(
                    accessToken,
                    pageSize,
                    cursor,
                    filter,
                    sorting
                )
            )

            handleTokenError(response.tokenErr)

            return@fetch CursorPagingResult(
                pageInfo = PageInfo.Cursor(hasNextPage = response.page?.hasNext ?: false),
                edges = response.page?.nodes?.mapNotNull { node ->
                    Edge.Cursor(
                        cursor = node.cursor,
                        node = node.data_?.let { mapper.mapFromDTO(it) } ?: return@mapNotNull null
                    )
                } ?: emptyList()
            )
        }
    }

    override suspend fun getArticleCountByCategoryIds(categoryIds: List<String>): Map<String, Long> {
        return fetch { accessToken ->
            val response = assortmentSuspendDS.getArticleCountByCategoryIds(
                GetArticleCountByCategoryIdsRequest(
                    token = Token(accessToken),
                    categoryIds = categoryIds
                )
            )
            handleTokenError(response.tokenErr)
            return@fetch response.data_?.articleCounts ?: emptyMap()
        }
    }
}



