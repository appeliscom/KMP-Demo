package com.appelis.kmp_demo.assortment.domain.usecase

import androidx.paging.PagingConfig
import app.cash.paging.Pager
import app.cash.paging.PagingData
import com.appelis.core.domain.network.CursorPagingResult
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.assortment.domain.repository.AssortmentRepository
import com.appelis.kmp_demo.core.paging.CursorPagingSource
import kotlinx.coroutines.flow.Flow
import org.koin.core.annotation.Single

interface GetAssortmentUseCase {
    fun execute(
        pageSize: Int = 20,
        initialLoadingSize: Int = 40,
        placeholder: Boolean = false
    ): Flow<PagingData<ArticlePreviewModel>>
}

@Single
class GetAssortmentUseCaseImpl(private val repository: AssortmentRepository): GetAssortmentUseCase {
    override fun execute(
        pageSize: Int,
        initialLoadingSize: Int,
        placeholder: Boolean
    ): Flow<PagingData<ArticlePreviewModel>> {
        return Pager(
            config = PagingConfig(
                pageSize = pageSize,
                prefetchDistance = pageSize,
                initialLoadSize = initialLoadingSize,
                enablePlaceholders = placeholder
            ),
            pagingSourceFactory = {
                AssortmentPagingSource(repository)
            }
        ).flow
    }
}

class AssortmentPagingSource(private val repository: AssortmentRepository): CursorPagingSource<ArticlePreviewModel>(
    initCursor = null
) {
    override suspend fun queryFactory(
        size: Int,
        cursor: String?,
        itemCount: Boolean
    ): CursorPagingResult<ArticlePreviewModel> {
        return repository.getArticles(size, cursor)
    }
}

