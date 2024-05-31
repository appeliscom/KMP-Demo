package com.appelis.kmp_demo.assortment.domain.usecase.mocks

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.flow
import org.koin.core.annotation.Single

interface ObserveLoggedUserIdUseCaseMock {
    fun execute(): Flow<Int?>
}

@Single
class ObserveLoggedUserIdUseCaseMockImpl: ObserveLoggedUserIdUseCaseMock {
    private val loggedUserId = 1

    override fun execute(): Flow<Int?> = flow {
        emit(loggedUserId)
    }
}