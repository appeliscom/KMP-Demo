package com.appelis.kmp_demo.assortment.uiLogic.categoryCollection

import app.cash.paging.PagingData
import com.appelis.kmp_demo.assortment.domain.model.CategoryModel
import com.appelis.kmp_demo.assortment.uiLogic.articleCollection.CategoryArticleCollectionViewModel
import com.appelis.kmp_demo.core.extensions.viewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewModelComponent
import com.arkivanov.decompose.ComponentContext
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.parameter.parametersOf

interface CategoryCollectionComponent {
    val viewModel: ViewModel

    interface  ViewModel {
        val viewState: StateFlow<CategoryCollectionViewState>
        val pagedItems: Flow<PagingData<CategoryModel>>
    }
}

class CategoryCollectionComponentImpl(
    componentContext: ComponentContext,
    parentId: String
) : ViewModelComponent<CategoryCollectionViewModel>(componentContext), CategoryCollectionComponent {
    override val viewModel: CategoryCollectionViewModel by viewModel(parameters = {
        parametersOf(
            CategoryCollectionViewModel.Args(parentId)
        )
    })
}