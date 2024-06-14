package com.appelis.kmp_demo.assortment.domain.usecase

import androidx.paging.PagingConfig
import app.cash.paging.Pager
import app.cash.paging.PagingData
import com.appelis.core.domain.network.CursorPagingResult
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.assortment.domain.model.AssortmentSortingModel
import com.appelis.kmp_demo.assortment.domain.repository.AssortmentRepository
import com.appelis.kmp_demo.core.paging.CursorPagingSource
import kotlinx.coroutines.flow.Flow
import org.koin.core.annotation.Single

interface GetPagedAssortmentUseCase {
    fun execute(
        categoryId: String,
        sorting: AssortmentSortingModel,
        pageSize: Int = 20,
        initialLoadingSize: Int = 40,
        placeholder: Boolean = false
    ): Flow<PagingData<ArticlePreviewModel>>
}

@Single
class GetPagedAssortmentUseCaseImpl(private val repository: AssortmentRepository): GetPagedAssortmentUseCase {
    override fun execute(
        categoryId: String,
        sorting: AssortmentSortingModel,
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
                AssortmentPagingSource(repository, categoryId, sorting)
            }
        ).flow
    }
}

class AssortmentPagingSource(
    private val repository: AssortmentRepository,
    private val categoryId: String,
    private val sorting: AssortmentSortingModel
): CursorPagingSource<ArticlePreviewModel>(
    initCursor = null
) {
    override suspend fun queryFactory(
        size: Int,
        cursor: String?,
        itemCount: Boolean
    ): CursorPagingResult<ArticlePreviewModel> {
        return repository.getArticles(size, cursor, categoryId, sorting)
    }
}

