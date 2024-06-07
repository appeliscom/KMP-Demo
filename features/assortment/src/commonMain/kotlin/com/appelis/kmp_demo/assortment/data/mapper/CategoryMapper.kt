package com.appelis.kmp_demo.assortment.data.mapper

import appelis.category.v1.Category
import com.appelis.kmp_demo.assortment.domain.model.CategoryModel
import org.koin.core.annotation.Single

@Single
class CategoryMapper {
    fun mapFromDTO(dto: Category): CategoryModel {
        return CategoryModel(
            id = dto.id,
            parentId = dto.parentId,
            categoryKey = dto.categoryKey,
            name = dto.name,
            imageUrl = dto.picture?.url,
            childCount = dto.childCount
        )
    }
}