package com.appelis.kmp_demo.extractToModules.features.category

import com.appelis.kmp_demo.core.SharedViewModel
import com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow.MainFlowNavigator
import com.arkivanov.decompose.value.MutableValue
import com.arkivanov.decompose.value.Value
import kotlinx.coroutines.flow.MutableStateFlow

internal class CategoryViewModel(
    private val mainFlowNavigator: MainFlowNavigator,
    private val args: Args
) :SharedViewModel<CategoryViewState, Nothing>() {
    private val _viewState: MutableValue<CategoryViewState> = MutableValue(CategoryViewState(args.id))
    override val viewState: Value<CategoryViewState> = _viewState


    data class Args(val id: String)
}