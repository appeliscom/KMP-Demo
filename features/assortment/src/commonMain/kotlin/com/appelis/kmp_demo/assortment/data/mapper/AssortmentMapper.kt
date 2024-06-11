package com.appelis.kmp_demo.assortment.data.mapper

import com.appelis.kmp_demo.assortment.domain.model.ArticleModel
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.assortment.domain.model.AvailabilityModel
import com.appelis.kmp_demo.assortment.domain.model.BusinessValidityModel
import com.appelis.kmp_demo.assortment.domain.model.PriceModel
import com.appelis.kmp_demo.assortment.domain.model.StockStatus
import com.appelis.kmp_demo.assortment.domain.model.TagModel
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.PriceType
import kotlinx.datetime.Instant
import metro.assortment.v1.AttributeValue
import metro.assortment.v1.Availability
import metro.assortment.v1.CatalogArticle
import metro.assortment.v1.Price
import org.koin.core.annotation.Single

@Single
class AssortmentMapper {
    fun map(input: CatalogArticle): ArticleModel? {
        return ArticleModel(
            id = input.data_?.id ?: return null,
            name = input.data_?.name ?: return null,
            weightIndicator = input.data_?.weightIndicator ?: return null,
            prices = ArrayList(input.data_?.prices?.map(::mapFromDTO) ?: return null),
            availability = ArrayList(input.data_?.availabilities?.map(::mapFromDTO) ?: return null),
            tags = ArrayList(input.attributeValues?.data_?.map(::mapFromDTO) ?: return null),
            imageUrl = input.data_?.pictures?.firstOrNull()?.url ?: return null
        )
    }

    fun mapFromDTO(input: CatalogArticle): ArticlePreviewModel? {
        return ArticlePreviewModel(
            id = input.data_?.id ?: return null,
            name = input.data_?.name ?: return null,
            weightIndicator = input.data_?.weightIndicator ?: return null,
            prices = ArrayList(input.data_?.prices?.map(::mapFromDTO) ?: return null),
            availability = ArrayList(input.data_?.availabilities?.map(::mapFromDTO) ?: return null),
            tags = ArrayList(input.attributeValues?.data_?.map(::mapFromDTO) ?: return null),
            imageUrl = input.data_?.pictures?.firstOrNull()?.url ?: return null
        )
    }

    private fun mapFromDTO(input: Price): PriceModel {
        return PriceModel(
            type = PriceType.UNIT,
            validForBusiness = BusinessValidityModel.All,
            unitTax = input.unitTax,
            unit = input.unit,
            munit = input.mUnit,
            munitTax = input.mUnitTax,
            packTax = input.packTax,
            pack = input.pack,
            validFrom = input.validFrom?.getEpochSecond()?.let { Instant.fromEpochSeconds(it) },
            validTo = input.validTo?.getEpochSecond()?.let { Instant.fromEpochSeconds(it) }
        )
    }


    private fun mapFromDTO(input: Availability): AvailabilityModel {
        return AvailabilityModel(
            businessId = input.businessId,
            quantity = input.quantity,
            stockStatus = StockStatus.IN_STOCK,
            lastChange = input.lastChange?.getEpochSecond()?.let { Instant.fromEpochSeconds(it) }
        )
    }

    private fun mapFromDTO(input: AttributeValue): TagModel {
        return TagModel(
            id = input.idAttribute,
            name = input.value_,
            iconUrl = input.url,
            color = null
        )
    }
}