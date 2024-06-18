package com.appelis.kmp_demo.assortment.domain.usecase

import com.appelis.kmp_demo.assortment.domain.repository.AssortmentRepository
import org.koin.core.annotation.Single

interface GetArticleCountByCategoryIdsUseCase {
    suspend fun execute(categoryIds: List<String>): Map<String, Long>
}

@Single
class GetArticleCountByCategoryIdsUseCaseImpl(
    private val articleRepository: AssortmentRepository
): GetArticleCountByCategoryIdsUseCase {
    override suspend fun execute(categoryIds: List<String>): Map<String, Long> {
        return articleRepository.getArticleCountByCategoryIds(categoryIds)
    }
}