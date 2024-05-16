package com.appelis.kmp_demo.core.auth.data.mappers

import com.appelis.identity.CreateResponse
import com.appelis.identity.RefreshResponse
import com.appelis.identity.RegisterDeviceResponse
import com.appelis.identity.RegisterError
import com.appelis.kmp_demo.core.auth.domain.TokenPayload
import com.appelis.kmp_demo.core.auth.toClean.data.network.NetworkException
import org.koin.core.annotation.Single

@Single
class IdentityMapper {
    fun mapFromDTO(response: RegisterDeviceResponse): String {
        when (response.err) {
            RegisterError.UNKNOWN_REGISTER_ERROR -> {
                throw NetworkException(code = NetworkException.ErrorCode.ALREADY_REGISTERED)
            }

            RegisterError.UNIQUE_ID_ALREADY_REGISTERED,
            RegisterError.ACCOUNT_SETTINGS_NOT_FOUND -> {
                throw NetworkException(code = NetworkException.ErrorCode.UNKNOWN)
            }

            null -> {}
        }

        return response.device?.idMobileDevice.toString()
    }

    fun mapFromDTO(response: CreateResponse): TokenPayload {
        when (response.error) {
            CreateResponse.Error.UNSPECIFIED -> throw NetworkException(code = NetworkException.ErrorCode.UNKNOWN)
            CreateResponse.Error.WRONG_PAYLOAD -> throw NetworkException(code = NetworkException.ErrorCode.MOBILE_DEVICE_NOT_FOUND)
            null -> {}
        }

        val data = response.data_ ?: throw Exception("response data is null")
        return TokenPayload(
            accessToken = data.accessToken,
            refreshToken = data.refreshToken
        )
    }

    fun mapFromDTO(response: RefreshResponse): TokenPayload {
        when (response.error) {
            RefreshResponse.Error.UNSPECIFIED -> throw NetworkException(code = NetworkException.ErrorCode.UNKNOWN)
            RefreshResponse.Error.INVALID_TOKEN -> throw NetworkException(code = NetworkException.ErrorCode.AUTH_ERROR)
            null -> {}
        }

        val data = response.data_ ?: throw Exception("response data is null")
        return TokenPayload(
            accessToken = data.accessToken,
            refreshToken = data.refreshToken
        )
    }
}