package com.appelis.kmp_demo.assortment.domain.usecase

import androidx.paging.PagingConfig
import app.cash.paging.Pager
import app.cash.paging.PagingData
import com.appelis.core.domain.network.CursorPagingResult
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.assortment.domain.model.AssortmentFilterModel
import com.appelis.kmp_demo.assortment.domain.model.AssortmentSortingModel
import com.appelis.kmp_demo.assortment.domain.repository.AssortmentRepository
import com.appelis.kmp_demo.core.paging.CursorPagingSource
import kotlinx.coroutines.flow.Flow
import org.koin.core.annotation.Single

interface GetPagedAssortmentUseCase {
    fun execute(input: GetPagedAssortmentUseCaseInput): Flow<PagingData<ArticlePreviewModel>>
}

data class GetPagedAssortmentUseCaseInput(
    val sorting: AssortmentSortingModel,
    val filter: AssortmentFilterModel,
    val pageSize: Int = 20,
    val initialLoadingSize: Int = 40,
    val placeholder: Boolean = false
)

@Single
class GetPagedAssortmentUseCaseImpl(private val repository: AssortmentRepository): GetPagedAssortmentUseCase {
    override fun execute(input: GetPagedAssortmentUseCaseInput): Flow<PagingData<ArticlePreviewModel>> {
        return Pager(
            config = PagingConfig(
                pageSize = input.pageSize,
                prefetchDistance = input.pageSize,
                initialLoadSize = input.initialLoadingSize,
                enablePlaceholders = input.placeholder
            ),
            pagingSourceFactory = {
                AssortmentPagingSource(repository, input.filter, input.sorting)
            }
        ).flow
    }
}

class AssortmentPagingSource(
    private val repository: AssortmentRepository,
    private val filter: AssortmentFilterModel,
    private val sorting: AssortmentSortingModel
): CursorPagingSource<ArticlePreviewModel>(
    initCursor = null
) {
    override suspend fun queryFactory(
        size: Int,
        cursor: String?,
        itemCount: Boolean
    ): CursorPagingResult<ArticlePreviewModel> {
        return repository.getArticles(size, cursor, filter, sorting)
    }
}

