package com.appelis.kmp_demo.assortment.uiLogic.articleDetail

import com.appelis.kmp_demo.core.SharedViewModel
import com.appelis.kmp_demo.core.ViewState
import com.appelis.kmp_demo.core.extensions.asStateFlow
import com.arkivanov.decompose.value.MutableValue
import com.arkivanov.decompose.value.Value
import kotlinx.coroutines.MainScope
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.first
import kotlinx.coroutines.launch
import org.koin.core.annotation.Factory

@Factory
class ArticleDetailViewModel(
    private val args: Args
) : SharedViewModel<ArticleDetailViewState, Nothing>(), ArticleDetailComponent.ViewModel {
    private val _viewState: MutableStateFlow<ArticleDetailViewState> =
        MutableStateFlow(ArticleDetailViewState.Loading)
    override val viewState: StateFlow<ArticleDetailViewState> = _viewState

    data class Args(val id: String)


    override fun setup() {
        viewModelScope.launch {
            delay(2000)
            _viewState.value = ArticleDetailViewState.Success(id = args.id)
        }
    }

    override fun fillInVoucherCode(code: String) {
        viewModelScope.launch {
            // wait until article is loaded
            viewState.first { state ->
                return@first when (state) {
                    is ArticleDetailViewState.Success -> true
                    else -> false
                }
            }
            _viewState.value = ArticleDetailViewState.Success(id = args.id, voucher = code)
        }
    }
}

sealed class ArticleDetailViewState : ViewState {
    data object Loading : ArticleDetailViewState()
    data class Error(val error: Exception) : ArticleDetailViewState()
    data class Success(val id: String, val voucher: String? = null) : ArticleDetailViewState()
}