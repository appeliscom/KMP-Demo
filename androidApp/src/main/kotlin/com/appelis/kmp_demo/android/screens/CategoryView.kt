package com.appelis.kmp_demo.android.screens

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.material3.Button
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryComponent
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryRoute
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryRouter
import com.appelis.kmp_demo.assortment.uiLogic.category.CategoryViewState
import org.koin.compose.koinInject
import app.cash.paging.compose.collectAsLazyPagingItems
import com.appelis.kmp_demo.assortment.domain.model.ArticlePreviewModel

@Composable
fun CategoryView(
    component: CategoryComponent,
    modifier: Modifier = Modifier
) {
    val viewModel = remember { component.viewModel }
    val viewState by viewModel.viewState.collectAsState()

    Content(viewModel = viewModel, viewState = viewState, modifier = modifier)
}

@Composable
private fun Content(
    viewModel: CategoryComponent.ViewModel,
    viewState: CategoryViewState,
    modifier: Modifier = Modifier,
    router: CategoryRouter = koinInject()
) {
    val items = viewModel.pagedItems.collectAsLazyPagingItems()
    val loadState = items.loadState.append

    Column(
        modifier,
        verticalArrangement = Arrangement.Center,
        horizontalAlignment = Alignment.CenterHorizontally
    )  {
        Text("CategoryView", style = MaterialTheme.typography.titleLarge)

        Text(loadState.toString())

        LazyColumn {
            items(items.itemCount) { index ->
                val item = items[index]?:return@items
                layoutArticle(item = item)
            }
        }


        Spacer(modifier = Modifier.weight(1f))

        Text("id: ${viewState.id}")

        Spacer(modifier = Modifier.weight(1f))

        Button(
            onClick = {
                router.navigateTo(CategoryRoute.Category(id = viewState.id + "1"))
            }
        ) {
            Text("Open Category")
        }

        Spacer(modifier = Modifier.weight(1f))
    }
}

@Composable
private fun layoutArticle(item: ArticlePreviewModel) {
    Text(item.name, style = MaterialTheme.typography.titleMedium)
}