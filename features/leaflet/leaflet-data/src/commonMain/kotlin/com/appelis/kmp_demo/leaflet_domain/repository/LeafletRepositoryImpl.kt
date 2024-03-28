package com.appelis.kmp_demo.leaflet_domain.repository

import com.appelis.kmp_demo.leaflet_domain.model.LeafletModel

class LeafletRepositoryImpl: LeafletRepository {
    override suspend fun getLeaflets(storeName: String, token: String): ArrayList<LeafletModel> {
        // todo: Implement grpc call
        return ArrayList()
    }
}