package com.appelis.kmp_demo.assortment.data.datasource

import appelis.category.v1.ChildCategoriesRequest
import appelis.category.v1.ChildCategoriesResponse

interface CategorySuspendDS {
    suspend fun getChildCategories(request: ChildCategoriesRequest): ChildCategoriesResponse
}