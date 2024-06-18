package com.appelis.kmp_demo.assortment.uiLogic.category

import com.appelis.kmp_demo.assortment.uiLogic.articleCollection.CategoryArticleCollectionComponent
import com.appelis.kmp_demo.assortment.uiLogic.articleCollection.CategoryArticleCollectionComponentImpl
import com.appelis.kmp_demo.assortment.uiLogic.categoryCollection.CategoryCollectionComponent
import com.appelis.kmp_demo.assortment.uiLogic.categoryCollection.CategoryCollectionComponentImpl
import com.appelis.kmp_demo.core.extensions.viewModel
import com.appelis.kmp_demo.core.uiArchitecture.ViewModelComponent
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.childContext
import kotlinx.coroutines.flow.StateFlow
import org.koin.core.parameter.parametersOf

interface CategoryComponent {
    val viewModel: ViewModel
    val articleCollectionSubComponent: CategoryArticleCollectionComponent
    val categoryCollectionSubComponent: CategoryCollectionComponent

    interface ViewModel {
        val viewState: StateFlow<CategoryViewState>

        fun setup()
    }
}

class CategoryComponentImpl(
    componentContext: ComponentContext,
    val categoryInput: CategoryInput,
    val displayOnlyArticles: Boolean
): ViewModelComponent<CategoryViewModel>(componentContext), CategoryComponent {
    override val viewModel: CategoryViewModel by viewModel(parameters = {
        parametersOf(
            CategoryViewModel.Args(
                categoryInput = categoryInput,
                displayOnlyArticles = displayOnlyArticles
            )
        )
    })

    override val articleCollectionSubComponent = CategoryArticleCollectionComponentImpl(
        componentContext.childContext("CategoryArticleCollection")
    )

    override val categoryCollectionSubComponent = CategoryCollectionComponentImpl(
        componentContext.childContext("categoryCollectionSubComponent")
    )
}