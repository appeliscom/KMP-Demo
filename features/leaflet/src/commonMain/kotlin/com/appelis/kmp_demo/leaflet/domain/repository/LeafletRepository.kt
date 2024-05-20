package com.appelis.kmp_demo.leaflet_domain.repository

import com.appelis.kmp_demo.leaflet_domain.model.LeafletModel

interface LeafletRepository {
    suspend fun getLeaflets(storeName: String): ArrayList<LeafletModel>
}