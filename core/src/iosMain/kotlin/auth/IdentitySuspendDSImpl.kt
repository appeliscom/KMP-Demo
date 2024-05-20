package auth

import com.appelis.identity.CreateRequest
import com.appelis.identity.CreateResponse
import com.appelis.identity.RefreshRequest
import com.appelis.identity.RefreshResponse
import com.appelis.identity.RegisterDeviceRequest
import com.appelis.identity.RegisterDeviceResponse
import com.appelis.kmp_demo.core.auth.data.clients.IdentitySuspendDS
import com.appelis.kmp_demo.core.network.convertCallbackCallToSuspend

class IdentitySuspendDSImpl(
    private val callBackDS: IdentityCallBackDS
): IdentitySuspendDS {
    override suspend fun registerDevice(request: RegisterDeviceRequest): RegisterDeviceResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackDS.registerDevice(input, callback)
        })
    }

    override suspend fun createToken(request: CreateRequest): CreateResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackDS.createToken(request, callback)
        })
    }

    override suspend fun refreshToken(request: RefreshRequest): RefreshResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackDS.refreshToken(input, callback)
        })
    }
}