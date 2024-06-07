package com.appelis.kmp_demo.assortment.uiLogic.articleCollection

import app.cash.paging.cachedIn
import com.appelis.kmp_demo.assortment.domain.usecase.GetPagedAssortmentUseCase
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.AddArticleAsFavoriteUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.AddArticleAsWatchdogUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.ObserveCurrentUsersFavoritesUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.ObserveCurrentUsersWatchdogsUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.ObserveLoggedUserIdUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.ObserveSelectedBusinessIdUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.ObserveSelectedPriceTypeUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.ObserveSelectedTaxUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.RemoveArticleFromFavoriteUseCaseMock
import com.appelis.kmp_demo.assortment.domain.usecase.mocks.RemoveArticleFromWatchdogUseCaseMock
import com.appelis.kmp_demo.core.uiArchitecture.SharedViewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.annotation.Factory

@Factory
class CategoryArticleCollectionViewModel(
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
) : SharedViewModel<CategoryArticleCollectionViewState, Nothing>(),
    CategoryArticleCollectionComponent.ViewModel {
    private val _viewState: MutableStateFlow<CategoryArticleCollectionViewState> = MutableStateFlow(
        CategoryArticleCollectionViewState()
    )
    override val viewState: StateFlow<CategoryArticleCollectionViewState> = _viewState

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

data class CategoryArticleCollectionViewState(val sortedBy: SortedBy = SortedBy.RELEVANCE) : ViewState

enum class SortedBy {
    RELEVANCE,
    PRICE_DESC,
    PRICE_ASC
}