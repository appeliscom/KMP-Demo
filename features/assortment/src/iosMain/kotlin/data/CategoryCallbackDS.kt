package data

import appelis.category.v1.ChildCategoriesRequest
import appelis.category.v1.ChildCategoriesResponse
import com.appelis.kmp_demo.assortment.data.datasource.CategorySuspendDS
import com.appelis.kmp_demo.core.network.convertCallbackCallToSuspend

interface CategoryCallbackDS {
    fun getChildCategories(
        request: ChildCategoriesRequest,
        responseCallback: (ChildCategoriesResponse?, exception: Exception?) -> Unit
    )
}

class CategorySuspendDSImpl(
    private val callBackDS: CategoryCallbackDS
) : CategorySuspendDS {
    override suspend fun getChildCategories(request: ChildCategoriesRequest): ChildCategoriesResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackDS.getChildCategories(request, callback)
        })
    }
}