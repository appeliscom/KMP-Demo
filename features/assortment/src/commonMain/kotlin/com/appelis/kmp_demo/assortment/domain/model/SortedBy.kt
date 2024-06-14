package com.appelis.kmp_demo.assortment.domain.model

data class AssortmentSortingModel(
    val field: AssortmentSortingField,
    val order: Order
)

enum class AssortmentSortingField {
    PRICE_UNIT,
    PRICE_UNIT_TAX,
    PRICE_MUNIT,
    PRICE_MUNIT_TAX,
    PRICE_PACK,
    PRICE_PACK_TAX,
    RELEVANCE
}

enum class Order {
    ASC, DESC
}
