package com.appelis.kmp_demo.assortment.uiLogic.categoryCollection

import app.cash.paging.cachedIn
import com.appelis.kmp_demo.assortment.domain.usecase.GetPagedSubCategoriesUseCase
import com.appelis.kmp_demo.core.uiArchitecture.SharedViewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.annotation.Factory

@Factory
class CategoryCollectionViewModel(
    private val args: Args,
    private val getPagedSubCategoriesUseCase: GetPagedSubCategoriesUseCase
) : SharedViewModel<CategoryCollectionViewState, Nothing>(), CategoryCollectionComponent.ViewModel {
    private val _viewState: MutableStateFlow<CategoryCollectionViewState> = MutableStateFlow(CategoryCollectionViewState(args.parentId))
    override val viewState: StateFlow<CategoryCollectionViewState> = _viewState

    override var pagedItems = getPagedSubCategoriesUseCase.execute(parentId = args.parentId).cachedIn(viewModelScope)

    data class Args(val parentId: String)
}

data class CategoryCollectionViewState(val parentId: String): ViewState
