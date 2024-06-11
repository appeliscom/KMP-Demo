package com.appelis.kmp_demo.assortment.data.datasource

import metro.assortment.v1.GetArticleResponse
import metro.assortment.v1.GetArticlesRequest
import metro.assortment.v1.GetAssortmentRequest
import metro.assortment.v1.GetAssortmentResponse

interface AssortmentSuspendDS {
    suspend fun getArticles(request: GetArticlesRequest): GetArticleResponse
    suspend fun getArticlesPaged(request: GetAssortmentRequest): GetAssortmentResponse
}