package com.appelis.kmp_demo.assortment.domain.model

import com.appelis.kmp_demo.assortment.domain.usecase.mocks.PriceType
import kotlinx.datetime.Instant

data class PriceModel(
    val type: PriceType,
    val validForBusiness: BusinessValidityModel,
    val unitTax: Double,
    val unit: Double,
    val munit: Double,
    val munitTax: Double,
    val packTax: Double,
    val pack: Double,
    val validFrom: Instant?,
    val validTo: Instant?
)

sealed class BusinessValidityModel {
    data class Id(val id: String) : BusinessValidityModel()
    data object All : BusinessValidityModel()
}
