package com.appelis.kmp_demo.extractToModules.features.category

import com.appelis.kmp_demo.core.SharedViewModel
import com.appelis.kmp_demo.extractToModules.navigation.mainAppFlow.MainFlowNavigator
import kotlinx.coroutines.flow.MutableStateFlow

internal class CategoryViewModel(
    private val mainFlowNavigator: MainFlowNavigator,
    private val args: Args
) :SharedViewModel<CategoryViewState, Nothing>() {
    override val viewState: MutableStateFlow<CategoryViewState> = MutableStateFlow(CategoryViewState(args.id))


    data class Args(val id: String)
}