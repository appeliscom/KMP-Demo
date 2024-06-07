package com.appelis.kmp_demo.assortment.domain.repository

import com.appelis.core.domain.network.CursorPagingResult
import com.appelis.kmp_demo.assortment.domain.model.CategoryModel

interface CategoryRepository {
    suspend fun getCategories(
        pageSize: Int,
        cursor: String? = null,
        parentId: String
    ): CursorPagingResult<CategoryModel>
}