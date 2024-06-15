package com.appelis.kmp_demo.assortment.uiLogic.articleCollection

import app.cash.paging.PagingData
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.assortment.domain.model.StockStatus
import com.appelis.kmp_demo.core.uiArchitecture.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.childContext
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.parameter.parametersOf

interface CategoryArticleCollectionComponent {
    val viewModel: ViewModel

    interface ViewModel {
        val viewState: StateFlow<CategoryArticleCollectionViewState>
        val pagedItems: Flow<PagingData<ArticlePreviewModel>>

        fun setup(id: String)
        fun setSortedBy(sortBy: SortedBy)
        fun setSearchedAvailability(stockStatus: StockStatus?)
        fun addArticleToWatchdogs(articleId: String)
        fun removeArticleFromWatchdogs(articleId: String)
        fun addArticleToFavorites(articleId: String)
        fun removeArticleFromFavorites(articleId: String)
    }
}

class CategoryArticleCollectionComponentImpl(
    componentContext: ComponentContext
) : ViewModelComponent<CategoryArticleCollectionViewModel>(componentContext),
    CategoryArticleCollectionComponent {
    override val viewModel: CategoryArticleCollectionViewModel by viewModel()
}