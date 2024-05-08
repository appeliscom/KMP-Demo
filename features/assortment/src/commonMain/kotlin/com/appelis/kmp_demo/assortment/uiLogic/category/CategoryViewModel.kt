package com.appelis.kmp_demo.assortment.uiLogic.category

import app.cash.paging.PagingData
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.assortment.domain.usecase.GetAssortmentUseCase
import com.appelis.kmp_demo.core.uiArchitecture.SharedViewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch
import org.koin.core.annotation.Factory

@Factory
class CategoryViewModel(
    private val args: Args,
    private val getAssortmentUseCase: GetAssortmentUseCase
) : SharedViewModel<CategoryViewState, Nothing>(), CategoryComponent.ViewModel {
    private val _viewState: MutableStateFlow<CategoryViewState> = MutableStateFlow(CategoryViewState(args.id, PagingData.empty()))
    override val viewState: StateFlow<CategoryViewState> = _viewState

    init {
        setup()
    }

    fun setup() {
        viewModelScope.launch {
            getAssortmentUseCase.execute().collect{ data ->
                _viewState.value = _viewState.value.copy(articles = data)
            }
        }
    }

    data class Args(val id: String)
}

data class CategoryViewState(
    val id: String,
    val articles: PagingData<ArticlePreviewModel>
): ViewState