package com.appelis.kmp_demo.android.screens

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.material3.CircularProgressIndicator
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.ui.Alignment
import androidx.paging.LoadState
import app.cash.paging.compose.LazyPagingItems
import com.appelis.kmp_demo.assortment.uiLogic.articleCollection.CategoryArticleCollectionComponent
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryRouter
import org.koin.compose.koinInject
import app.cash.paging.compose.collectAsLazyPagingItems
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel

@Composable
fun CategoryArticleCollectionView(
    component: CategoryArticleCollectionComponent,
    categoryId: String
) {
    val viewModel = remember { component.viewModel }
    val viewState by viewModel.viewState.collectAsState()
    val pagingItems = viewModel.pagedItems.collectAsLazyPagingItems()

    LaunchedEffect(Unit) {
        viewModel.setup(categoryId)
    }

    when(pagingItems.loadState.refresh) {
        LoadState.Loading -> Loading()
        is LoadState.Error -> Text("Error")
        is LoadState.NotLoading -> Content(pagingItems = pagingItems)
    }
}

@Composable
private fun Loading() {
    CircularProgressIndicator()
}

@Composable
private fun Content(
    pagingItems: LazyPagingItems<ArticlePreviewModel>,
    router: CategoryRouter = koinInject()
) {
    Column(
        verticalArrangement = Arrangement.Center,
        horizontalAlignment = Alignment.CenterHorizontally
    )  {
        Text("CategoryView", style = MaterialTheme.typography.titleLarge)
        LazyColumn {
            items(
                pagingItems.itemCount
            ) {index ->
                pagingItems[index]?.let { ArticleCell(it) }
            }
        }
    }
}

@Composable
private fun ArticleCell(item: ArticlePreviewModel) {
    Text(item.name, style = MaterialTheme.typography.titleMedium)
}