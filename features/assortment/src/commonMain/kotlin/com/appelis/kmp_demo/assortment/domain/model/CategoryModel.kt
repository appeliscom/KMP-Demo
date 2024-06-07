package com.appelis.kmp_demo.assortment.domain.model

data class CategoryModel(
    val id: String,
    val parentId: String?,
    val categoryKey: String?,
    val name: String,
    val imageUrl: String?
)
