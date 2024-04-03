package com.appelis.kmp_demo.leaflet_domain.usecase

import com.appelis.kmp_demo.leaflet_domain.model.LeafletModel
import com.appelis.kmp_demo.leaflet_domain.repository.LeafletRepository

interface GetLeafletsUseCase {
    suspend fun execute(storeName: String, token: String): ArrayList<LeafletModel>
}

class GetLeafletsUseCaseImpl(private val repository: LeafletRepository): GetLeafletsUseCase {
    override suspend fun execute(storeName: String, token: String): ArrayList<LeafletModel> {
        return repository.getLeaflets(storeName, token)
    }
}

