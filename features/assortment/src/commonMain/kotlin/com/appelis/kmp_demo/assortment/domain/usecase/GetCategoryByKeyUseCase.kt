package com.appelis.kmp_demo.assortment.domain.usecase

import com.appelis.kmp_demo.assortment.domain.model.CategoryModel
import com.appelis.kmp_demo.assortment.domain.repository.CategoryRepository
import org.koin.core.annotation.Single

interface GetCategoryByKeyUseCase {
    suspend fun execute(key: String): CategoryModel
}

@Single
class GetCategoryByKeyUseCaseImpl(private val repository: CategoryRepository) {
    suspend fun execute(key: String): CategoryModel {
        return repository.getCategoryByKey(key)
    }
}