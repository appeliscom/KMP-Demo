package com.appelis.kmp_demo.core.auth.data.mappers

import com.appelis.core.data.network.ErrorHandlingManager
import com.appelis.identity.CreateResponse
import com.appelis.identity.RefreshResponse
import com.appelis.identity.RegisterDeviceResponse
import com.appelis.identity.RegisterError
import com.appelis.kmp_demo.core.auth.domain.TokenPayload
import com.appelis.kmp_demo.core.auth.toClean.data.network.NetworkException

class IdentityMapper {
    fun mapFromDTO(response: RegisterDeviceResponse): String {
        when (response.err) {
            RegisterError.UNKNOWN_REGISTER_ERROR -> {
                throw NetworkException().setCode(
                    ErrorHandlingManager.ErrorCodes.ALREADY_REGISTERED
                )
            }

            RegisterError.UNIQUE_ID_ALREADY_REGISTERED,
            RegisterError.ACCOUNT_SETTINGS_NOT_FOUND -> {
                throw NetworkException().setCode(ErrorHandlingManager.ErrorCodes.UNKNOWN)
            }

            null -> {}
        }

        return response.device?.idMobileDevice.toString()
    }

    fun mapFromDTO(response: CreateResponse): TokenPayload {
        when (response.error) {
            CreateResponse.Error.UNSPECIFIED, CreateResponse.Error.WRONG_PAYLOAD -> throw NetworkException().setCode(ErrorHandlingManager.ErrorCodes.UNKNOWN)
            null -> {}
        }

        val data = response.data_?: throw Exception("response data is null")
        return TokenPayload(
            accessToken = data.accessToken,
            refreshToken = data.refreshToken
        )
    }

    fun mapFromDTO(response: RefreshResponse): TokenPayload {
        when (response.error) {
            RefreshResponse.Error.UNSPECIFIED -> throw NetworkException().setCode(ErrorHandlingManager.ErrorCodes.UNKNOWN)
            RefreshResponse.Error.INVALID_TOKEN -> throw NetworkException().setCode(ErrorHandlingManager.ErrorCodes.AUTH_ERROR)
            null -> {}
        }

        val data = response.data_ ?:  throw Exception("response data is null")
        return TokenPayload(
            accessToken = data.accessToken,
            refreshToken = data.refreshToken
        )
    }
}