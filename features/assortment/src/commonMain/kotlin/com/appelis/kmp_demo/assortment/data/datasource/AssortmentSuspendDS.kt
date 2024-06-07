package com.appelis.kmp_demo.assortment.data.datasource

import appelis.category.v1.ChildCategoriesRequest
import appelis.category.v1.ChildCategoriesResponse
import metro.assortment.v1.GetAssortmentRequest
import metro.assortment.v1.GetAssortmentResponse

interface AssortmentSuspendDS {
    suspend fun getArticles(request: GetAssortmentRequest): GetAssortmentResponse
}