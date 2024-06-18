package com.appelis.kmp_demo.assortment.data.datasource

import appelis.category.v1.ByCategoryKeyRequest
import appelis.category.v1.ByCategoryKeyResponse
import appelis.category.v1.ByIdsRequest
import appelis.category.v1.ByIdsResponse
import appelis.category.v1.ChildCategoriesRequest
import appelis.category.v1.ChildCategoriesResponse
import com.appelis.kmp_demo.assortment.domain.model.CategoryModel

interface CategorySuspendDS {
    suspend fun getChildCategories(request: ChildCategoriesRequest): ChildCategoriesResponse
    suspend fun getCategoryByKey(request: ByCategoryKeyRequest): ByCategoryKeyResponse
    suspend fun getCategories(request: ByIdsRequest): ByIdsResponse
}