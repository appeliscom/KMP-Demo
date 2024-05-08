package com.appelis.kmp_demo.assortment.domain.repository

import com.appelis.core.domain.network.CursorPagingResult
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel

interface AssortmentRepository {
    suspend fun getArticles(
        pageSize: Int,
        cursor: String?
    ): CursorPagingResult<ArticlePreviewModel>
}