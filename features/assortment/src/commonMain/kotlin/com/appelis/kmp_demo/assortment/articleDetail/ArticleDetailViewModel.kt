package com.appelis.kmp_demo.assortment.articleDetail

import com.appelis.kmp_demo.core.SharedViewModel
import com.appelis.kmp_demo.core.ViewState
import com.arkivanov.decompose.value.MutableValue
import com.arkivanov.decompose.value.Value
import kotlinx.coroutines.delay
import kotlinx.coroutines.launch
import org.koin.core.annotation.Factory

@Factory
class ArticleDetailViewModel(
    private val args: ArticleDetailViewModel.Args
): SharedViewModel<ArticleDetailViewState, Nothing>(), ArticleDetailComponent.ViewModel {
    private val _viewState: MutableValue<ArticleDetailViewState> =
        MutableValue(ArticleDetailViewState.Loading)
    override val viewState: Value<ArticleDetailViewState> = _viewState

    data class Args(val id: String)


    override fun setup() {
        viewModelScope.launch {
            delay(2000)
            _viewState.value = ArticleDetailViewState.Success(id = args.id, voucher = "")
        }
    }
}

sealed class ArticleDetailViewState: ViewState {
    data object Loading : ArticleDetailViewState()
    data class Error(val error: Exception): ArticleDetailViewState()
    data class Success(val id: String, val voucher: String): ArticleDetailViewState()
}