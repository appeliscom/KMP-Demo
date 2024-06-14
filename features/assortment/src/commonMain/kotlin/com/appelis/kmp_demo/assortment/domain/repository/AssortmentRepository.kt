package com.appelis.kmp_demo.assortment.domain.repository

import com.appelis.core.domain.network.CursorPagingResult
import com.appelis.kmp_demo.assortment.domain.model.ArticleModel
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.assortment.domain.model.AssortmentSortingModel

interface AssortmentRepository {
    suspend fun getArticle(articleId: String): ArticleModel
    suspend fun getArticles(
        pageSize: Int,
        cursor: String?,
        categoryId: String,
        sorting: AssortmentSortingModel
    ): CursorPagingResult<ArticlePreviewModel>
    suspend fun getArticleCountByCategoryIds(categoryIds: List<String>): Map<String, Long>
}