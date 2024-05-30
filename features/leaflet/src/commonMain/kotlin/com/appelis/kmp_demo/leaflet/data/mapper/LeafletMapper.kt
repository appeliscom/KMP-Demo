package com.appelis.kmp_demo.leaflet.data.mapper

import com.appelis.identity.TokenError
import com.appelis.kmp_demo.core.network.NetworkException
import com.appelis.kmp_demo.leaflet_domain.model.LeafletModel
import metro.leaflet.v1.GetLeafletsResponse
import org.koin.core.annotation.Single

@Single
class LeafletMapper {
    fun mapFromDTO(response: GetLeafletsResponse): ArrayList<LeafletModel> {
        when (response.tokenErr) {
            TokenError.UNKNOWN_TOKEN_ERROR -> throw NetworkException(code = NetworkException.ErrorCode.UNKNOWN)
            TokenError.INVALID_TOKEN -> throw NetworkException(code = NetworkException.ErrorCode.AUTH_ERROR)
            null -> {}
        }

        val data = response.data_ ?: throw Exception("data is null")
        return ArrayList(data.leaflets.map { LeafletModel(title = it.title) })
    }
}