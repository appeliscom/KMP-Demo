package com.appelis.kmp_demo.assortment.uiLogic.category

import app.cash.paging.PagingData
import app.cash.paging.cachedIn
import app.cash.paging.map
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
import com.appelis.kmp_demo.core.network.NetworkException
import com.appelis.kmp_demo.core.uiArchitecture.SharedViewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.SharingStarted
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.catch
import kotlinx.coroutines.flow.collect
import kotlinx.coroutines.flow.collectLatest
import kotlinx.coroutines.flow.flow
import kotlinx.coroutines.flow.onEach
import kotlinx.coroutines.flow.onStart
import kotlinx.coroutines.flow.shareIn
import kotlinx.coroutines.flow.stateIn
import kotlinx.coroutines.launch
import org.koin.core.KoinApplication.Companion.init
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
    private val _viewState: MutableStateFlow<CategoryViewState> = MutableStateFlow(CategoryViewState())
    override val viewState: StateFlow<CategoryViewState> = _viewState

//    private val _pagedItems: MutableStateFlow<PagingData<ArticlePreviewModel>> = MutableStateFlow(PagingData.empty())
    override var pagedItems = getPagedAssortmentUseCase.execute(categoryId = args.id).cachedIn(viewModelScope)

    init {
        setup()
    }

    fun setup() {
//        viewModelScope.launch {
//            getPagedAssortmentUseCase
//                .execute()
//                .cachedIn(viewModelScope)
//                .collect{
//                    _pagedItems.value = it
//                }
//        }
    }

    data class Args(val id: String)
}

data class CategoryViewState(val sortedBy: SortedBy = SortedBy.RELEVANCE) : ViewState

enum class SortedBy {
    RELEVANCE,
    PRICE_DESC,
    PRICE_ASC
}