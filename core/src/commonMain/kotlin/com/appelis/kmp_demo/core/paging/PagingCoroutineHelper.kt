package com.appelis.kmp_demo.core.paging

import androidx.paging.Pager
import androidx.paging.PagingConfig
import androidx.paging.PagingData
import kotlinx.coroutines.flow.Flow

fun <T : IEntityIdentifiable<T>> createCursorPagerFlow(
    sourceFactory: () -> CursorPagingSource<T>,
    placeholder: Boolean = false,
    initialLoadSize: Int = 40,
    pageSize: Int = 20
): Flow<PagingData<T>> {
    return Pager(
        config = PagingConfig(
            pageSize = pageSize,
            prefetchDistance = pageSize,
            initialLoadSize = initialLoadSize,
            enablePlaceholders = placeholder
        ),
        pagingSourceFactory = sourceFactory
    ).flow
}

fun <T : IEntityIdentifiable<T>> createOffsetPagerFlow(
    sourceFactory: () -> OffsetPagingSource<T>,
    placeholder: Boolean = false,
    initialLoadSize: Int = 40,
    pageSize: Int = 20
): Flow<PagingData<T>> {
    return Pager(
        config = PagingConfig(
            pageSize = pageSize,
            prefetchDistance = pageSize,
            initialLoadSize = initialLoadSize,
            enablePlaceholders = placeholder
        ),
        pagingSourceFactory = sourceFactory
    ).flow
}
