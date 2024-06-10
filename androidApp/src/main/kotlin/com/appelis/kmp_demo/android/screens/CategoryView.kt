package com.appelis.kmp_demo.android.screens

import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.size
import androidx.compose.material3.CircularProgressIndicator
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryComponent
import androidx.compose.runtime.remember
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.text.style.LineHeightStyle
import androidx.compose.ui.unit.dp
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryViewState

@Composable
fun CategoryView(
    component: CategoryComponent
) {
    val viewModel = remember { component.viewModel }
    val viewState by viewModel.viewState.collectAsState()

    LaunchedEffect(Unit) {
        viewModel.setup()
    }

    Box(
        contentAlignment = Alignment.Center,
        modifier = Modifier.fillMaxSize()
    ) {
        when (viewState) {
            is CategoryViewState.ArticleCollection -> CategoryArticleCollectionView(
                component = component.articleCollectionSubComponent,
                categoryId = (viewState as? CategoryViewState.ArticleCollection)?.parentCategory?.id ?: ""
            )
            is CategoryViewState.CategoryCollection -> CategoryCollectionView(
                component = component.categoryCollectionSubComponent,
                parentId = (viewState as? CategoryViewState.CategoryCollection)?.parentCategory?.id  ?: ""
            )
            CategoryViewState.GeneralError -> GeneralError()
            CategoryViewState.Loading -> Loading()
            CategoryViewState.NetworkError -> NetworkError()
        }
    }
}

@Composable
private fun Loading() {
    CircularProgressIndicator()
}

@Composable
private fun NetworkError() {
    Text("Network Error")
}

@Composable
private fun GeneralError() {
    Text("General Error")
}