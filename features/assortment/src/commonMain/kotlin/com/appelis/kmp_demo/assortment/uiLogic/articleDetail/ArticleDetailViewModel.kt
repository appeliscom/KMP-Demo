package com.appelis.kmp_demo.assortment.uiLogic.articleDetail

import com.appelis.kmp_demo.assortment.domain.model.ArticleModel
import com.appelis.kmp_demo.assortment.domain.usecase.GetArticleUseCase
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryViewState
import com.appelis.kmp_demo.core.network.NetworkException
import com.appelis.kmp_demo.core.uiArchitecture.SharedViewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import io.github.aakira.napier.Napier
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.first
import kotlinx.coroutines.launch
import org.koin.core.annotation.Factory

@Factory
class ArticleDetailViewModel(
    private val args: Args,
    private val getArticleUseCase: GetArticleUseCase
) : SharedViewModel<ArticleDetailViewState, Nothing>(), ArticleDetailComponent.ViewModel {
    private val _viewState: MutableStateFlow<ArticleDetailViewState> =
        MutableStateFlow(ArticleDetailViewState.Loading)
    override val viewState: StateFlow<ArticleDetailViewState> = _viewState

    data class Args(val id: String)


    override fun setup() {
        viewModelScope.launch {
            try {
                val article = getArticleUseCase.execute(args.id)
                _viewState.value = ArticleDetailViewState.Success(article)
            } catch (e: NetworkException) {
                if (e.code == NetworkException.ErrorCode.CONNECTION_TIMEOUT) {
                    _viewState.value = ArticleDetailViewState.NetworkError
                } else {
                    _viewState.value = ArticleDetailViewState.GeneralError
                }
            } catch (e: Exception) {
                _viewState.value = ArticleDetailViewState.GeneralError
            }
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
            (_viewState.value as? ArticleDetailViewState.Success)?.let {
                _viewState.value = it.copy(voucher = code)
            }
        }
    }
}

sealed interface ArticleDetailViewState : ViewState {
    data object Loading : ArticleDetailViewState
    data class Success(val article: ArticleModel, val voucher: String? = null) :
        ArticleDetailViewState

    data object GeneralError : ArticleDetailViewState
    data object NetworkError : ArticleDetailViewState
}