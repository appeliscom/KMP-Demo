package com.appelis.kmp_demo.core.paging

import androidx.paging.PagingSource
import androidx.paging.PagingState
import com.appelis.core.domain.network.CursorPagingResult

abstract class CursorPagingSource<Value : Any>(
    private val initCursor: String?
) : PagingSource<String, Value>() {

    abstract suspend fun queryFactory(
        size: Int,
        cursor: String?,
        itemCount: Boolean
    ): CursorPagingResult<Value>?

    override val keyReuseSupported: Boolean
        get() = true

    override suspend fun load(params: LoadParams<String>): LoadResult<String, Value> {
        val size = params.loadSize
        val cursor = params.key ?: initCursor

        return try {
            val result = queryFactory(size, cursor, true)

            val nextKey = if (result?.pageInfo?.hasNextPage == true) {
                result.edges.lastOrNull()?.cursor
            } else {
                null
            }

            val prevKey = if (cursor == initCursor) null else result?.edges?.firstOrNull()?.cursor

            LoadResult.Page(result?.edges?.map { it.node }.orEmpty(), prevKey = prevKey, nextKey)
        } catch (e: Exception) {
            LoadResult.Error(e)
        }
    }

    override fun getRefreshKey(state: PagingState<String, Value>): String? {
        return state.anchorPosition?.let { anchorPosition ->
            val anchorPage = state.closestPageToPosition(anchorPosition)
            anchorPage?.prevKey
        }
    }
}
