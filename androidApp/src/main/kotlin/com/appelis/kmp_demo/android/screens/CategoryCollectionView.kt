package com.appelis.kmp_demo.android.screens

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.material3.CircularProgressIndicator
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.remember
import androidx.compose.ui.Alignment
import androidx.paging.LoadState
import app.cash.paging.compose.LazyPagingItems
import app.cash.paging.compose.collectAsLazyPagingItems
import com.appelis.kmp_demo.assortment.domain.model.CategoryModel
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryRouter
import com.appelis.kmp_demo.assortment.uiLogic.categoryCollection.CategoryCollectionComponent
import org.koin.compose.koinInject

@Composable
fun CategoryCollectionView(
    component: CategoryCollectionComponent,
    parentId: String
) {
    val viewModel = remember { component.viewModel }
    val pagingItems = viewModel.pagedItems.collectAsLazyPagingItems()

    LaunchedEffect(Unit) {
        viewModel.setup(parentId)
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
    pagingItems: LazyPagingItems<CategoryModel>,
    router: CategoryRouter = koinInject()
) {
    Column(
        verticalArrangement = Arrangement.Center,
        horizontalAlignment = Alignment.CenterHorizontally
    )  {
        Text("CategoryView", style = MaterialTheme.typography.titleLarge)
        Text("count ${pagingItems.itemCount}")

        LazyColumn {
            items(
                pagingItems.itemCount
            ) {index ->
                pagingItems[index]?.let { CategoryCell(it) }
            }
        }
    }
}

@Composable
private fun CategoryCell(item: CategoryModel) {
    Text(item.name, style = MaterialTheme.typography.titleMedium)
}