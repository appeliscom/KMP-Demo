package com.appelis.kmp_demo.core.auth.data.repository

import com.appelis.identity.CreateRequest
import com.appelis.identity.RefreshRequest
import com.appelis.identity.RegisterDeviceRequest
import com.appelis.kmp_demo.core.auth.data.mappers.IdentityMapper
import com.appelis.kmp_demo.core.auth.data.clients.IdentitySuspendDS
import com.appelis.kmp_demo.core.auth.domain.TokenPayload
import com.appelis.kmp_demo.core.auth.domain.IdentityRepository
import org.koin.core.annotation.Single

typealias AppKey = String

@Single
class IdentityRepositoryImpl(
    private val dataSource: IdentitySuspendDS,
    private val mapper: IdentityMapper,
    private val appKey: AppKey
): IdentityRepository {
    override suspend fun registerDevice(deviceKey: String): String {
        val response = dataSource.registerDevice(
            RegisterDeviceRequest(
                appKey = appKey,
                uniqId = deviceKey
            )
        )
        return mapper.mapFromDTO(response)
    }

    override suspend fun createToken(deviceUuid: String): TokenPayload {
        val response = dataSource.createToken(
            CreateRequest(
                deviceKey = CreateRequest.DeviceKey(appKey, deviceUuid)
            )
        )
        return mapper.mapFromDTO(response)
    }

    override suspend fun refreshToken(refreshToken: String): TokenPayload {
        val response = dataSource.refreshToken(
            RefreshRequest(refreshToken = refreshToken)
        )
        return mapper.mapFromDTO(response)
    }
}