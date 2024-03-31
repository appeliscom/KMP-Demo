package com.appelis.kmp_demo.leaflet_data.repository

import com.appelis.identity.Token
import com.appelis.kmp_demo.leaflet_data.mapper.LeafletMapper
import com.appelis.kmp_demo.leaflet_domain.model.LeafletModel
import com.appelis.kmp_demo.leaflet_domain.repository.LeafletRepository
import metro.leaflet.v1.GetLeafletsRequest

class LeafletRepositoryImpl(
    private val leafletSuspendClient: LeafletSuspendClient,
    private val leafletMapper: LeafletMapper
) : LeafletRepository {
    override suspend fun getLeaflets(storeName: String, token: String): ArrayList<LeafletModel> {
        val response = leafletSuspendClient.getLeaflets(
            GetLeafletsRequest(
                token = Token(token),
                business = storeName
            )
        )

        return leafletMapper.mapFromDTO(response)
    }
}