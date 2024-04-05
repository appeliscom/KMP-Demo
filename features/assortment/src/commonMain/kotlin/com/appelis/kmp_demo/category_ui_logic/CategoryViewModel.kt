package com.appelis.kmp_demo.category_ui_logic

import com.appelis.kmp_demo.core.SharedViewModel
import com.appelis.kmp_demo.core.ViewState
import com.arkivanov.decompose.value.MutableValue
import com.arkivanov.decompose.value.Value

class CategoryViewModel(
    private val args: Args
) :SharedViewModel<CategoryViewState, Nothing>(), CategoryComponent.ViewModel {
    private val _viewState: MutableValue<CategoryViewState> = MutableValue(CategoryViewState(args.id))
    override val viewState: Value<CategoryViewState> = _viewState

    data class Args(val id: String)
}

data class CategoryViewState(val id: String): ViewState