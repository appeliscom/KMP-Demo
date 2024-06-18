package com.appelis.kmp_demo.assortment.domain.usecase.mocks

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow
import org.koin.core.annotation.Single

interface ObserveSelectedBusinessIdUseCaseMock {
    fun execute(): Flow<String>
}

@Single
class ObserveSelectedBusinessIdUseCaseMockImpl: ObserveSelectedBusinessIdUseCaseMock{
    private val businessId = "1"

    override fun execute(): Flow<String> {
        return flow {
            emit(businessId)
        }
    }
}