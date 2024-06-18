package com.appelis.kmp_demo.assortment.domain.usecase

import com.appelis.kmp_demo.assortment.domain.model.CategoryModel
import com.appelis.kmp_demo.assortment.domain.repository.CategoryRepository
import org.koin.core.annotation.Single

interface GetCategoryByIdUseCase {
    suspend fun execute(id: String): CategoryModel
}

@Single
class GetCategoryByIdUseCaseImpl(
    private val categoryRepository: CategoryRepository
) : GetCategoryByIdUseCase {
    override suspend fun execute(id: String): CategoryModel {
        return categoryRepository.getCategoryById(id)
    }
}