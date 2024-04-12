package com.appelis.kmp_demo.assortment.articleDetail

import com.appelis.kmp_demo.core.ViewModelComponent
import com.appelis.kmp_demo.core.extensions.viewModel
import com.arkivanov.decompose.ComponentContext
import com.arkivanov.decompose.value.Value
import org.koin.core.parameter.parametersOf

interface ArticleDetailComponent {
    val viewModel: ViewModel

    interface ViewModel {
        val viewState: Value<ArticleDetailViewState>

        fun setup()
    }
}

class ArticleDetailComponentImpl(
    componentContext: ComponentContext,
    id: String
) : ViewModelComponent<ArticleDetailViewModel>(componentContext), ArticleDetailComponent {
    override val viewModel: ArticleDetailViewModel by viewModel(parameters = {
        parametersOf(
            ArticleDetailViewModel.Args(id)
        )
    })
}