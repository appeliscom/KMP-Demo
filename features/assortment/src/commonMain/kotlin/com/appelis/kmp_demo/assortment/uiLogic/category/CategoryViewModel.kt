package com.appelis.kmp_demo.assortment.uiLogic.category

import com.appelis.kmp_demo.assortment.domain.model.CategoryModel
import com.appelis.kmp_demo.assortment.domain.usecase.GetCategoryByIdUseCase
import com.appelis.kmp_demo.assortment.domain.usecase.GetCategoryByKeyUseCase
import com.appelis.kmp_demo.core.network.NetworkException
import com.appelis.kmp_demo.core.uiArchitecture.SharedViewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewState
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch
import kotlinx.serialization.Serializable
import org.koin.core.annotation.Factory

@Factory
class CategoryViewModel(
    private val args: Args,
    private val getCategoryByIdUseCase: GetCategoryByIdUseCase,
    private val getCategoryByKeyUseCase: GetCategoryByKeyUseCase,
) : SharedViewModel<CategoryViewState, Nothing>(), CategoryComponent.ViewModel {
    private val _viewState: MutableStateFlow<CategoryViewState> =
        MutableStateFlow(CategoryViewState.Loading)
    override val viewState: StateFlow<CategoryViewState> = _viewState

    override fun setup() {
        viewModelScope.launch {
            try {
                val category = loadCategory()
                _viewState.value = if (category.childCount == 0 || args.displayOnlyArticles) {
                    CategoryViewState.ArticleCollection(category)
                } else {
                    CategoryViewState.CategoryCollection(category)
                }
            } catch (e: NetworkException) {
                if (e.code == NetworkException.ErrorCode.CONNECTION_TIMEOUT) {
                    _viewState.value = CategoryViewState.NetworkError
                } else {
                    _viewState.value = CategoryViewState.GeneralError
                }
            }
        }
    }

    private suspend fun loadCategory(): CategoryModel {
        return when (args.categoryInput) {
            is CategoryInput.Id -> getCategoryByIdUseCase.execute(args.categoryInput.id)
            is CategoryInput.Key -> getCategoryByKeyUseCase.execute(args.categoryInput.key)
            is CategoryInput.Category -> args.categoryInput.category
        }
    }

    data class Args(
        val categoryInput: CategoryInput,
        val displayOnlyArticles: Boolean = false
    )
}

sealed class CategoryViewState : ViewState {
    data object Loading : CategoryViewState()

    data class ArticleCollection(val parentCategory: CategoryModel) : CategoryViewState()
    data class CategoryCollection(val parentCategory: CategoryModel) : CategoryViewState()

    data object GeneralError : CategoryViewState()
    data object NetworkError : CategoryViewState()
}

@Serializable
sealed class CategoryInput {
    @Serializable
    data class Id(val id: String) : CategoryInput()
    @Serializable
    data class Key(val key: String) : CategoryInput()
    @Serializable
    data class Category(val category: CategoryModel) : CategoryInput()
}
