package com.appelis.kmp_demo.assortment.domain.usecase

import com.appelis.kmp_demo.assortment.domain.model.ArticleModel
import com.appelis.kmp_demo.assortment.domain.repository.AssortmentRepository
import org.koin.core.annotation.Single

interface GetArticleUseCase {
    suspend fun execute(id: String): ArticleModel
}

@Single
class GetArticleUseCaseImpl(
    private val assortmentRepository: AssortmentRepository
) : GetArticleUseCase {
    override suspend fun execute(id: String): ArticleModel {
        return assortmentRepository.getArticle(id)
    }
}