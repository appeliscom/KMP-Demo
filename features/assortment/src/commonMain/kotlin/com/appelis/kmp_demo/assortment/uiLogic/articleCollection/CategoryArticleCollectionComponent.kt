package com.appelis.kmp_demo.assortment.uiLogic.articleCollection

import app.cash.paging.PagingData
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.arkivanov.decompose.ComponentContext
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.parameter.parametersOf

interface CategoryArticleCollectionComponent {
    val viewModel: ViewModel

    interface ViewModel {
        val viewState: StateFlow<CategoryArticleCollectionViewState>
        val pagedItems: Flow<PagingData<ArticlePreviewModel>>
    }
}

class CategoryArticleCollectionComponentImpl(
    componentContext: ComponentContext,
    id: String
) : ViewModelComponent<CategoryArticleCollectionViewModel>(componentContext),
    CategoryArticleCollectionComponent {
    override val viewModel: CategoryArticleCollectionViewModel by viewModel(parameters = {
        parametersOf(
            CategoryArticleCollectionViewModel.Args(id)
        )
    })
}