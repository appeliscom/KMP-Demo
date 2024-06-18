package com.appelis.kmp_demo.assortment.data.mapper

import appelis.CursorForwardPagingParams
import appelis.SortOrder
import com.appelis.identity.Token
import com.appelis.kmp_demo.assortment.domain.model.ArticleModel
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.assortment.domain.model.AssortmentFilterModel
import com.appelis.kmp_demo.assortment.domain.model.AssortmentSortingField
import com.appelis.kmp_demo.assortment.domain.model.AssortmentSortingModel
import com.appelis.kmp_demo.assortment.domain.model.AvailabilityModel
import com.appelis.kmp_demo.assortment.domain.model.BusinessValidityModel
import com.appelis.kmp_demo.assortment.domain.model.Order
import com.appelis.kmp_demo.assortment.domain.model.PriceModel
import com.appelis.kmp_demo.assortment.domain.model.StockStatus
import com.appelis.kmp_demo.assortment.domain.model.TagModel
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.PriceType
import com.appelis.kmp_demo.assortment.uiLogic.articleCollection.SortedBy
import kotlinx.datetime.Instant
import metro.assortment.v1.AttributeValue
import metro.assortment.v1.Availability
import metro.assortment.v1.CatalogArticle
import metro.assortment.v1.FilterFlags
import metro.assortment.v1.FilterFlagsExt
import metro.assortment.v1.FilterPriceType
import metro.assortment.v1.GetAssortmentRequest
import metro.assortment.v1.Price
import metro.assortment.v1.SortField
import metro.assortment.v1.SortingFlags
import org.koin.core.annotation.Single

@Single
class AssortmentMapper {
    fun mapToRequest(
        accessToken: String,
        pageSize: Int,
        cursor: String?,
        filter: AssortmentFilterModel,
        sorting: AssortmentSortingModel
    ): GetAssortmentRequest {
        return GetAssortmentRequest(
            token = Token(accessToken),
            paging = CursorForwardPagingParams(
                after = cursor,
                first = pageSize
            ),
            filtering = FilterFlagsExt(
                flags = FilterFlags(
                    businessId = "1",
                    status = metro.assortment.v1.StockStatus.AVAILABLE,
                    priceFrom = filter.priceFrom ?: 0.0,
                    priceTo = filter.priceTo ?: 0.0,
                    priceType = FilterPriceType.FILTER_PRICE_UNIT
                ),
                categoryId = filter.categoryId
            ) ,
            sorting = SortingFlags(
                type = when(sorting.order){
                    Order.ASC -> SortOrder.ASC
                    Order.DESC -> SortOrder.DESC
                },
                field_ = when(sorting.field) {
                    AssortmentSortingField.PRICE_UNIT -> SortField.PRICE_UNIT
                    AssortmentSortingField.PRICE_UNIT_TAX -> SortField.PRICE_UNIT_TAX
                    AssortmentSortingField.PRICE_MUNIT -> SortField.PRICE_MUNIT
                    AssortmentSortingField.PRICE_MUNIT_TAX -> SortField.PRICE_MUNIT_TAX
                    AssortmentSortingField.PRICE_PACK -> SortField.PRICE_PACK
                    AssortmentSortingField.PRICE_PACK_TAX -> SortField.PRICE_PACK_TAX
                    AssortmentSortingField.RELEVANCE -> SortField.RELEVANCE
                }
            )
        )
    }

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
            stockStatus = StockStatus.AVAILABLE,
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