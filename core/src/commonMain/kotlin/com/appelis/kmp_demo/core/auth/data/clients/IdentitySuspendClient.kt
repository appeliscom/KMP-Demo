package com.appelis.kmp_demo.core.auth.data.clients

import com.appelis.identity.CreateRequest
import com.appelis.identity.CreateResponse
import com.appelis.identity.RefreshRequest
import com.appelis.identity.RefreshResponse
import com.appelis.identity.RegisterDeviceRequest
import com.appelis.identity.RegisterDeviceResponse

interface IdentitySuspendClient {
    suspend fun registerDevice(request: RegisterDeviceRequest): RegisterDeviceResponse
    suspend fun createToken(request: CreateRequest): CreateResponse
    suspend fun refreshToken(request: RefreshRequest): RefreshResponse
}