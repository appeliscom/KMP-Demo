package com.appelis.kmp_demo.core.paging

import androidx.paging.PagingSource
import androidx.paging.PagingState
import com.appelis.core.domain.network.PagingResult
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.launch

abstract class OffsetPagingSource<Value : Any>(
    private val coroutineScope: CoroutineScope
) : PagingSource<Int, Value>() {

    abstract suspend fun queryFactory(
        size: Int,
        after: Int,
        itemCount: Boolean
    ): PagingResult<Value>?

    abstract suspend fun subscriptionFactory(): Flow<Any>?

    init {
        initSubscription()
    }

    override val keyReuseSupported: Boolean
        get() = true

    private fun initSubscription() {
        coroutineScope.launch {
            try {
                subscriptionFactory()?.collect {
                    invalidate()
                }
            } catch (e: Throwable) {
            }
        }
    }

    override suspend fun load(params: LoadParams<Int>): LoadResult<Int, Value> {
        val size = params.loadSize

        val after = when (params) {
            is LoadParams.Refresh -> {
                params.key ?: 0
            }
            is LoadParams.Append -> {
                params.key
            }
            is LoadParams.Prepend -> {
                params.key - size
            }
        }

        return try {
            val result = queryFactory(size, after, true) ?: return LoadResult.Page(emptyList(), null, null)

            val totalCount = result.pageInfo.itemCount

            val nextCount = after + size

            val prevKey = if (after == 0) null else after
            val nextKey = if (nextCount < totalCount) nextCount else null

            LoadResult.Page(result.edges.map { it.node }, prevKey = prevKey, nextKey)
        } catch (e: Exception) {
            LoadResult.Error(e)
        }
    }

    override fun getRefreshKey(state: PagingState<Int, Value>): Int? {
        return state.anchorPosition?.let { anchorPosition ->
            val anchorPage = state.closestPageToPosition(anchorPosition)
            anchorPage?.prevKey
        }
    }
}
