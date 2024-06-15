package com.appelis.kmp_demo.assortment.domain.usecase.mocks

import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.flatMapLatest
import org.koin.core.annotation.Single

interface ObserveCurrentUsersWatchdogsUseCaseMock {
    fun execute(): Flow<ArrayList<String>>
}

interface AddArticleAsWatchdogUseCaseMock {
    suspend fun execute(id: String)
}

interface RemoveArticleFromWatchdogUseCaseMock {
    suspend fun execute(id: String)
}

@Single
class ObserveCurrentUsersWatchdogsUseCaseMockImpl(
    private val repo: WatchdogMockRepo,
    private val observeLoggedUserIdUseCase: ObserveLoggedUserIdUseCaseMock
): ObserveCurrentUsersWatchdogsUseCaseMock {
    @OptIn(ExperimentalCoroutinesApi::class)
    override fun execute(): Flow<ArrayList<String>> {
        return observeLoggedUserIdUseCase.execute().flatMapLatest {
            repo.watchdogs
        }
    }
}

@Single
class AddArticleAsWatchdogUseCaseMockImpl(private val repo: WatchdogMockRepo): AddArticleAsWatchdogUseCaseMock {
    override suspend fun execute(id: String) {
        val currentWatchdogs = repo.watchdogs.value
        if(!currentWatchdogs.contains(id)) {
            repo.watchdogs.value = ArrayList(currentWatchdogs + id)
        }
    }
}

@Single
class RemoveArticleAsWatchdogUseCaseMockImpl(private val repo: WatchdogMockRepo): RemoveArticleFromWatchdogUseCaseMock {
    override suspend fun execute(id: String) {
        val currentWatchdogs = repo.watchdogs.value
        if(currentWatchdogs.contains(id)) {
            repo.watchdogs.value = ArrayList(currentWatchdogs.filter { it != id })
        }
    }
}

@Single
class WatchdogMockRepo() {
    var watchdogs: MutableStateFlow<ArrayList<String>> = MutableStateFlow(ArrayList())
}