package data

import appelis.category.v1.ByCategoryKeyRequest
import appelis.category.v1.ByCategoryKeyResponse
import appelis.category.v1.ByIdsRequest
import appelis.category.v1.ByIdsResponse
import appelis.category.v1.ChildCategoriesRequest
import appelis.category.v1.ChildCategoriesResponse
import com.appelis.kmp_demo.assortment.data.datasource.CategorySuspendDS
import com.appelis.kmp_demo.core.network.convertCallbackCallToSuspend

interface CategoryCallbackDS {
    fun getChildCategories(
        request: ChildCategoriesRequest,
        responseCallback: (ChildCategoriesResponse?, exception: Exception?) -> Unit
    )

    fun getCategoryByKey(
        request: ByCategoryKeyRequest,
        responseCallback: (ByCategoryKeyResponse?, exception: Exception?) -> Unit
    )

    fun getCategories(
        request: ByIdsRequest,
        responseCallback: (ByIdsResponse?, exception: Exception?) -> Unit
    )
}

class CategorySuspendDSImpl(
    private val callBackDS: CategoryCallbackDS
) : CategorySuspendDS {
    override suspend fun getChildCategories(request: ChildCategoriesRequest): ChildCategoriesResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackDS.getChildCategories(input, callback)
        })
    }

    override suspend fun getCategoryByKey(request: ByCategoryKeyRequest): ByCategoryKeyResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackDS.getCategoryByKey(input, callback)
        })
    }

    override suspend fun getCategories(request: ByIdsRequest): ByIdsResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackDS.getCategories(input, callback)
        })
    }
}