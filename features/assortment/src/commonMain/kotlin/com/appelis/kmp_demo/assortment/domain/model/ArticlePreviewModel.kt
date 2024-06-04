package com.appelis.kmp_demo.assortment.domain.model

import kotlinx.datetime.Instant

data class ArticlePreviewModel(
    val id: String,
    val name: String,
//    val weightIndicator: Boolean,
//    val prices: ArrayList<PriceModel>,
//    val availability: ArrayList<AvailabilityModel>,
//    val tags: ArrayList<TagModel>,
//    val imageUrl: String?
)

data class AvailabilityModel(
    val businessId: String,
    val quantity: Double,
    val stockStatus: StockStatus,
    val lastChange: Instant?
)

enum class StockStatus {
    IN_STOCK, OUT_OF_STOCK, LIMITED_STOCK // Add other statuses as required
}

data class TagModel(
    val id: Long,
    val name: String?,
    val iconUrl: String?,
    val color: String?
)