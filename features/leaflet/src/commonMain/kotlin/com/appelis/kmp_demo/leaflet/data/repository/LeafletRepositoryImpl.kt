package com.appelis.kmp_demo.leaflet.data.repository

import com.appelis.identity.Token
import com.appelis.kmp_demo.core.network.BaseRepository
import com.appelis.kmp_demo.core.auth.domain.AuthClient
import com.appelis.kmp_demo.leaflet.data.client.LeafletSuspendDS
import com.appelis.kmp_demo.leaflet.data.mapper.LeafletMapper
import com.appelis.kmp_demo.leaflet_domain.model.LeafletModel
import com.appelis.kmp_demo.leaflet_domain.repository.LeafletRepository
import metro.leaflet.v1.GetLeafletsRequest
import org.koin.core.annotation.Single

@Single
class LeafletRepositoryImpl(
    private val leafletSuspendDS: LeafletSuspendDS,
    private val leafletMapper: LeafletMapper,
    authClient: AuthClient
) : LeafletRepository, BaseRepository(authClient) {
    override suspend fun getLeaflets(storeName: String): ArrayList<LeafletModel> {
        return fetch { accessToken ->
            val response = leafletSuspendDS.getLeaflets(
                GetLeafletsRequest(
                    token = Token(accessToken),
                    business = storeName
                )
            )

            return@fetch leafletMapper.mapFromDTO(response)
        }
    }
}