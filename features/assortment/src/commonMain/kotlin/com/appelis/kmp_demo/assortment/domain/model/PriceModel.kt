package com.appelis.kmp_demo.assortment.domain.model

import com.appelis.kmp_demo.assortment.domain.usecase.mocks.PriceType
import kotlinx.datetime.Instant

data class PriceModel(
    private val type: PriceType,
    private val validForBusiness: BusinessValidityModel,
    private val unitTax: Double,
    private val unit: Double,
    private val munit: Double,
    private val munitTax: Double,
    private val packTax: Double,
    private val pack: Double,
    private val validFrom: Instant?,
    private val validTo: Instant?
)

sealed class BusinessValidityModel {
    data class Id(val id: String) : BusinessValidityModel()
    data object All: BusinessValidityModel()
}
