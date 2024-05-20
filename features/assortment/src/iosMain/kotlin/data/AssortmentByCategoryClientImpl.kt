package data

import com.appelis.kmp_demo.assortment.data.AssortmentByCategoryCallBackDS
import com.appelis.kmp_demo.assortment.data.AssortmentByCategorySuspendDS
import com.appelis.kmp_demo.core.network.convertCallbackCallToSuspend
import metro.assortment.v1.GetAssortmentRequest
import metro.assortment.v1.GetAssortmentResponse

class AssortmentByCategorySuspendDSImpl(
    private val callBackDS: AssortmentByCategoryCallBackDS
): AssortmentByCategorySuspendDS {
    override suspend fun getArticles(request: GetAssortmentRequest): GetAssortmentResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackDS.getArticles(input, callback)
        })
    }
}