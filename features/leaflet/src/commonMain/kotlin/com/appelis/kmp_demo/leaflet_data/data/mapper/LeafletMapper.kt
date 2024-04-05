package com.appelis.kmp_demo.leaflet_data.data.mapper

import com.appelis.kmp_demo.leaflet_domain.model.LeafletModel
import metro.leaflet.v1.GetLeafletsResponse
import org.koin.core.annotation.Single

@Single
class LeafletMapper {
    fun mapFromDTO(response: GetLeafletsResponse): ArrayList<LeafletModel> {
        if (response.tokenErr != null) {
            throw Exception(response.tokenErr.toString())
        }

        val data = response.data_ ?: throw Exception("data is null")
        return ArrayList(data.leaflets.map { LeafletModel(title = it.title) })
    }
}