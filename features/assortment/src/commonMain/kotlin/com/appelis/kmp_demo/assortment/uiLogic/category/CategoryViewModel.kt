package com.appelis.kmp_demo.assortment.uiLogic.category

import app.cash.paging.PagingData
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.assortment.domain.usecase.GetPagedAssortmentUseCase
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.AddArticleAsFavoriteUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.AddArticleAsWatchdogUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.ObserveCurrentUsersFavoritesUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.ObserveCurrentUsersWatchdogsUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.ObserveLoggedUserIdUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.ObserveSelectedBusinessIdUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.ObserveSelectedPriceTypeUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.ObserveSelectedTaxUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.RemoveArticleAsFavoriteUseCaseMockImpl
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.RemoveArticleFromFavoriteUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.RemoveArticleFromWatchdogUseCaseMock
import com.appelis.kmp_demo.core.uiArchitecture.SharedViewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.flow
import kotlinx.coroutines.launch
import org.koin.core.annotation.Factory

@Factory
class CategoryViewModel(
    private val args: Args,
    private val getPagedAssortmentUseCase: GetPagedAssortmentUseCase,
    private val observeLoggedUserIdUseCase: ObserveLoggedUserIdUseCaseMock,
    private val observeCurrentUsersFavoritesUseCase: ObserveCurrentUsersFavoritesUseCaseMock,
    private val addArticleAsFavoriteUseCase: AddArticleAsFavoriteUseCaseMock,
    private val removeArticleFromFavoriteUseCase: RemoveArticleFromFavoriteUseCaseMock,
    private val observeCurrentUsersWatchdogsUseCase: ObserveCurrentUsersWatchdogsUseCaseMock,
    private val addArticleAsWatchdogUseCase: AddArticleAsWatchdogUseCaseMock,
    private val removeArticleAsWatchdogUseCaseMock: RemoveArticleFromWatchdogUseCaseMock,
    private val observeSelectedBusinessUseCase: ObserveSelectedBusinessIdUseCaseMock,
    private val observeSelectedTaxUseCase: ObserveSelectedTaxUseCaseMock,
    private val observeSelectedPriceTypeUseCase: ObserveSelectedPriceTypeUseCaseMock
) : SharedViewModel<CategoryViewState, Nothing>(), CategoryComponent.ViewModel {
    private val _viewState: MutableStateFlow<CategoryViewState> = MutableStateFlow(CategoryViewState(args.id, PagingData.empty()))
    override val viewState: StateFlow<CategoryViewState> = _viewState

    override var pagedItems: Flow<PagingData<ArticlePreviewModel>> = flow { PagingData.empty<ArticlePreviewModel>() }

    init {
        setup()
    }

    fun setup() {
        viewModelScope.launch {
            pagedItems = getPagedAssortmentUseCase.execute()

//            getAssortmentUseCase.execute().cachedIn(viewModelScope).collect{ data ->
//                _viewState.value = _viewState.value.copy(articles = data)
//            }
        }
    }

    data class Args(val id: String)
}

data class CategoryViewState(
    val id: String,
    val articles: PagingData<ArticlePreviewModel>
): ViewState