package com.appelis.kmp_demo.assortment.domain.usecase.mocks

import io.github.aakira.napier.Napier
import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.flatMapLatest
import org.koin.core.annotation.Single

interface ObserveCurrentUsersFavoritesUseCaseMock {
    fun execute(): Flow<ArrayList<String>>
}

interface AddArticleAsFavoriteUseCaseMock {
    suspend fun execute(id: String)
}

interface RemoveArticleFromFavoriteUseCaseMock {
    suspend fun execute(id: String)
}

@Single
class ObserveCurrentUsersFavoritesUseCaseMockImpl(
    private val repo: FavoriteMockRepo,
    private val observeLoggedUserIdUseCase: ObserveLoggedUserIdUseCaseMock
): ObserveCurrentUsersFavoritesUseCaseMock {
    @OptIn(ExperimentalCoroutinesApi::class)
    override fun execute(): Flow<ArrayList<String>> {
        return observeLoggedUserIdUseCase.execute().flatMapLatest {
            repo.favorites
        }
    }
}

@Single
class AddArticleAsFavoriteUseCaseMockImpl(private val repo: FavoriteMockRepo): AddArticleAsFavoriteUseCaseMock {
    override suspend fun execute(id: String) {
        val currentFavorites = repo.favorites.value
        if(!currentFavorites.contains(id)) {
            repo.favorites.value = ArrayList(currentFavorites + id)
        }
    }
}

@Single
class RemoveArticleAsFavoriteUseCaseMockImpl(private val repo: FavoriteMockRepo): RemoveArticleFromFavoriteUseCaseMock {
    override suspend fun execute(id: String) {
        val currentFavorites = repo.favorites.value
        if(currentFavorites.contains(id)) {
            repo.favorites.value = ArrayList(currentFavorites.filter { it != id })
        }
    }
}

@Single
class FavoriteMockRepo() {
    var favorites: MutableStateFlow<ArrayList<String>> = MutableStateFlow(ArrayList())
}