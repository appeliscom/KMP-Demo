package com.appelis.kmp_demo.assortment.data.repository

import appelis.CursorForwardPagingParams
import appelis.category.v1.ChildCategoriesRequest
import com.appelis.core.domain.network.CursorPagingResult
import com.appelis.core.domain.network.Edge
import com.appelis.core.domain.network.PageInfo
import com.appelis.identity.Token
import com.appelis.kmp_demo.assortment.data.datasource.CategorySuspendDS
import com.appelis.kmp_demo.assortment.data.mapper.CategoryMapper
import com.appelis.kmp_demo.assortment.domain.model.CategoryModel
import com.appelis.kmp_demo.assortment.domain.repository.CategoryRepository
import com.appelis.kmp_demo.core.auth.domain.AuthClient
import com.appelis.kmp_demo.core.network.BaseRepository
import io.github.aakira.napier.Napier
import org.koin.core.annotation.Single

@Single
class CategoryRepositoryImpl(
    private val categorySuspendDS: CategorySuspendDS,
    private val mapper: CategoryMapper,
    authClient: AuthClient
): BaseRepository(authClient), CategoryRepository {
    override suspend fun getCategories(
        pageSize: Int,
        cursor: String?,
        parentId: String
    ): CursorPagingResult<CategoryModel> {
        return fetch { accessToken ->
            val response = categorySuspendDS.getChildCategories(
                ChildCategoriesRequest(
                    token = Token(accessToken),
                    parentId = parentId,
                    paging = CursorForwardPagingParams(
                        after = cursor,
                        first = pageSize
                    )
                )
            )
            handleTokenError(response.tokenErr)

            Napier.d(message = "response: $response count ${response.page?.nodes?.count()}")

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
}