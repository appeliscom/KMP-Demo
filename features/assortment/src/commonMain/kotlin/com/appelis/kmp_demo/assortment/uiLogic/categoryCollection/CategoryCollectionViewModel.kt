package com.appelis.kmp_demo.assortment.uiLogic.categoryCollection

import app.cash.paging.PagingData
import app.cash.paging.cachedIn
import com.appelis.kmp_demo.assortment.domain.model.CategoryModel
import com.appelis.kmp_demo.assortment.domain.usecase.GetPagedSubCategoriesUseCase
import com.appelis.kmp_demo.core.uiArchitecture.SharedViewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch
import org.koin.core.annotation.Factory

@Factory
class CategoryCollectionViewModel(
    private val getPagedSubCategoriesUseCase: GetPagedSubCategoriesUseCase
) : SharedViewModel<CategoryCollectionViewState, Nothing>(), CategoryCollectionComponent.ViewModel {
    private val _viewState: MutableStateFlow<CategoryCollectionViewState> = MutableStateFlow(CategoryCollectionViewState.Empty)
    override val viewState: StateFlow<CategoryCollectionViewState> = _viewState

    private val _pagedItems: MutableStateFlow<PagingData<CategoryModel>> = MutableStateFlow(PagingData.empty())
    override val pagedItems = _pagedItems

    override fun setup(parentId: String) {
        viewModelScope.launch {
            _viewState.value = _viewState.value.copy(parentId = parentId)

            getPagedSubCategoriesUseCase
                .execute(parentId)
                .cachedIn(viewModelScope)
                .collect{
                    _pagedItems.value = it
                }
        }
    }
}

data class CategoryCollectionViewState(val parentId: String): ViewState {
    companion object {
        val Empty = CategoryCollectionViewState("")
    }
}
