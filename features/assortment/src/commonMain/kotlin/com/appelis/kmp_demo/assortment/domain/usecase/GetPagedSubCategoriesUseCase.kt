package com.appelis.kmp_demo.assortment.domain.usecase

import app.cash.paging.Pager
import app.cash.paging.PagingData
import com.appelis.core.domain.network.CursorPagingResult
import com.appelis.kmp_demo.assortment.domain.model.CategoryModel
import com.appelis.kmp_demo.assortment.domain.repository.CategoryRepository
import com.appelis.kmp_demo.core.paging.CursorPagingSource
import com.appelis.kmp_demo.core.paging.defaultPagingConfig
import kotlinx.coroutines.flow.Flow
import org.koin.core.annotation.Single

interface GetPagedSubCategoriesUseCase {
    fun execute(parentId: String): Flow<PagingData<CategoryModel>>
}

@Single
class GetPagedSubCategoriesUseCaseImpl(private val repository: CategoryRepository) : GetPagedSubCategoriesUseCase {
    override fun execute(parentId: String): Flow<PagingData<CategoryModel>> {
        return Pager(
            config = defaultPagingConfig,
            pagingSourceFactory = {
                CategoryPagingSource(repository, parentId)
            }
        ).flow
    }
}

class CategoryPagingSource(
    private val repository: CategoryRepository,
    private val parentId: String
): CursorPagingSource<CategoryModel>(initCursor = null) {
    override suspend fun queryFactory(
        size: Int,
        cursor: String?,
        itemCount: Boolean
    ): CursorPagingResult<CategoryModel>? {
        return repository.getCategories(size, cursor, parentId)
    }
}