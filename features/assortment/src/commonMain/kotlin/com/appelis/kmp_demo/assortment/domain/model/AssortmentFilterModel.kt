package com.appelis.kmp_demo.assortment.domain.model

data class AssortmentFilterModel(
    val categoryId: String,
    val priceFrom: Double? = null,
    val priceTo: Double? = null
)

data class AssortmentFilterSession(
    val id: String,
    val filter: AssortmentFilterModel
)