package auth

import com.appelis.identity.CreateRequest
import com.appelis.identity.CreateResponse
import com.appelis.identity.RefreshRequest
import com.appelis.identity.RefreshResponse
import com.appelis.identity.RegisterDeviceRequest
import com.appelis.identity.RegisterDeviceResponse

interface IdentityCallBackDS {
    fun registerDevice(
        request: RegisterDeviceRequest,
        responseCallBack: (RegisterDeviceResponse?, exception: Exception?) -> Unit
    )

    fun createToken(
        request: CreateRequest,
        responseCallback: (CreateResponse?, exception: Exception?) -> Unit
    )

    fun refreshToken(
        request: RefreshRequest,
        responseCallback: (RefreshResponse?, exception: Exception?) -> Unit
    )
}