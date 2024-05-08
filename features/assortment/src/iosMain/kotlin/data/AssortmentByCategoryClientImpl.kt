package data

import com.appelis.core.domain.network.CursorPagingResult
import com.appelis.kmp_demo.assortment.data.AssortmentByCategoryCallBackClient
import com.appelis.kmp_demo.assortment.data.AssortmentByCategorySuspendClient
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.core.client.convertCallbackCallToSuspend
import metro.assortment.v1.GetAssortmentRequest
import metro.assortment.v1.GetAssortmentResponse

class AssortmentByCategorySuspendClientImpl(
    private val callBackClient: AssortmentByCategoryCallBackClient
): AssortmentByCategorySuspendClient {
    override suspend fun getArticles(request: GetAssortmentRequest): GetAssortmentResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackClient.getArticles(input, callback)
        })
    }
}