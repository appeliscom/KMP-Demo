package data

import com.appelis.kmp_demo.assortment.data.datasource.AssortmentSuspendDS
import com.appelis.kmp_demo.core.network.convertCallbackCallToSuspend
import metro.assortment.v1.GetArticleCountByCategoryIdsRequest
import metro.assortment.v1.GetArticleCountByCategoryIdsResponse
import metro.assortment.v1.GetArticleResponse
import metro.assortment.v1.GetArticlesRequest
import metro.assortment.v1.GetAssortmentRequest
import metro.assortment.v1.GetAssortmentResponse

interface AssortmentCallbackDS {
    fun getArticles(
        request: GetArticlesRequest,
        responseCallback: (GetArticleResponse?, exception: Exception?) -> Unit
    )

    fun getArticlesPaged(
        request: GetAssortmentRequest,
        responseCallback: (GetAssortmentResponse?, exception: Exception?) -> Unit
    )

    fun getArticleCountByCategoryIds(
        request: GetArticleCountByCategoryIdsRequest,
        responseCallback: (GetArticleCountByCategoryIdsResponse?, exception: Exception?) -> Unit
    )
}

class AssortmentSuspendDSImpl(
    private val callBackDS: AssortmentCallbackDS
) : AssortmentSuspendDS {
    override suspend fun getArticles(request: GetArticlesRequest): GetArticleResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackDS.getArticles(input, callback)
        })
    }

    override suspend fun getArticlesPaged(request: GetAssortmentRequest): GetAssortmentResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackDS.getArticlesPaged(input, callback)
        })
    }

    override suspend fun getArticleCountByCategoryIds(request: GetArticleCountByCategoryIdsRequest): GetArticleCountByCategoryIdsResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackDS.getArticleCountByCategoryIds(input, callback)
        })
    }
}