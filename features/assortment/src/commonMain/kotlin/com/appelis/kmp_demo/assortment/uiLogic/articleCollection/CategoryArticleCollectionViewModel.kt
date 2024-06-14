package com.appelis.kmp_demo.assortment.uiLogic.articleCollection

import app.cash.paging.PagingData
import app.cash.paging.cachedIn
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.assortment.domain.model.AssortmentSortingField
import com.appelis.kmp_demo.assortment.domain.model.AssortmentSortingModel
import com.appelis.kmp_demo.assortment.domain.model.Order
import com.appelis.kmp_demo.assortment.domain.model.StockStatus
import com.appelis.kmp_demo.assortment.domain.usecase.GetPagedAssortmentUseCase
import com.appelis.kmp_demo.assortment.domain.usecase.GetPagedAssortmentUseCaseInput
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
import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.async
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.distinctUntilChanged
import kotlinx.coroutines.flow.filterNotNull
import kotlinx.coroutines.flow.flatMapLatest
import kotlinx.coroutines.flow.flowOf
import kotlinx.coroutines.flow.map
import kotlinx.coroutines.launch
import org.koin.core.annotation.Factory

@Factory
class CategoryArticleCollectionViewModel(
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

    private val _pagedItems: MutableStateFlow<PagingData<ArticlePreviewModel>> =
        MutableStateFlow(PagingData.empty())
    override var pagedItems = _pagedItems

    private val assortmentInputStateFlow: MutableStateFlow<GetPagedAssortmentUseCaseInput?> =
        MutableStateFlow(null)


    override fun setup(id: String) {
        viewModelScope.launch {
            val initAssortmentInputFlowTask = async { initAssortmentInputFlow(categoryId = id) }
            val initAssortmentFlowTask = async { initAssortmentStateFlow() }

            initAssortmentInputFlowTask.await()
            initAssortmentFlowTask.await()

//            assortmentInputStateFlow
//                .filterNotNull()
//                .flatMapLatest {
//                    getPagedAssortmentUseCase.execute(it)
//                }.cachedIn(viewModelScope)
//                .collect {
//                    _pagedItems.value = it
//                }
        }
    }

    private suspend fun initAssortmentInputFlow(categoryId: String) {
        viewState.map {
            GetPagedAssortmentUseCaseInput(
                categoryId = categoryId,
                sorting = map(it)
            )
        }
            .distinctUntilChanged()
            .collect {
                assortmentInputStateFlow.value = it
            }
    }

    @OptIn(ExperimentalCoroutinesApi::class)
    private suspend fun initAssortmentStateFlow() {
        assortmentInputStateFlow
            .filterNotNull()
            .flatMapLatest {
                getPagedAssortmentUseCase.execute(it)
            }.cachedIn(viewModelScope)
            .collect {
                _pagedItems.value = it
            }
    }

    override fun setSortedBy(sortBy: SortedBy) {
        _viewState.value = _viewState.value.copy(sortedBy = sortBy)
    }

    override fun setSearchedAvailability(stockStatus: StockStatus?) {
        _viewState.value = _viewState.value.copy(searchedAvailability = stockStatus)
    }

    private fun map(viewState: CategoryArticleCollectionViewState): AssortmentSortingModel {
        // todo set correctly selected price type
        return AssortmentSortingModel(
            field = when (viewState.sortedBy) {
                SortedBy.RELEVANCE -> AssortmentSortingField.RELEVANCE
                SortedBy.PRICE_DESC -> AssortmentSortingField.PRICE_UNIT
                SortedBy.PRICE_ASC -> AssortmentSortingField.PRICE_UNIT
            },
            order = when (viewState.sortedBy) {
                SortedBy.RELEVANCE -> Order.DESC
                SortedBy.PRICE_DESC -> Order.DESC
                SortedBy.PRICE_ASC -> Order.ASC
            }
        )
    }
}

data class CategoryArticleCollectionViewState(
    val sortedBy: SortedBy = SortedBy.RELEVANCE,
    val searchedAvailability: StockStatus? = null
) : ViewState

enum class SortedBy {
    RELEVANCE,
    PRICE_DESC,
    PRICE_ASC
}
