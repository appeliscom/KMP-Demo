package com.appelis.kmp_demo.assortment.domain.model

data class ArticleModel(
    val id: String,
    val name: String,
    val weightIndicator: Boolean,
    val prices: ArrayList<PriceModel>,
    val availability: ArrayList<AvailabilityModel>,
    val tags: ArrayList<TagModel>,
    val imageUrl: String?
)
