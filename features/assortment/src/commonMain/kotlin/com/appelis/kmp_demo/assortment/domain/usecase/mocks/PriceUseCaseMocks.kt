package com.appelis.kmp_demo.assortment.domain.usecase.mocks

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flowOf
import org.koin.core.annotation.Single

enum class Tax {
    NO_TAX,
    TAX
}

enum class PriceType {
   UNIT, PACKAGE, MUNIT, WEIGHTED
}

interface ObserveSelectedTaxUseCaseMock {
    fun execute(): Flow<Tax>
}

@Single
class ObserveSelectedTaxUseCaseMockImpl: ObserveSelectedTaxUseCaseMock {
    private val tax = Tax.TAX

    override fun execute(): Flow<Tax> {
        return flowOf(tax)
    }
}

interface ObserveSelectedPriceTypeUseCaseMock {
    fun execute(): Flow<PriceType>
}

@Single
class ObserveSelectedPriceTypeUseCaseMockImpl: ObserveSelectedPriceTypeUseCaseMock {
    private val priceType = PriceType.UNIT

    override fun execute(): Flow<PriceType> {
        return flowOf(priceType)
    }
}