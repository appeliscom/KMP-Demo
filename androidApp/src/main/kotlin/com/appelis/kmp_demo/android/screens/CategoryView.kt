package com.appelis.kmp_demo.android.screens

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.material3.Button
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import com.appelis.kmp_demo.assortment.CategoryComponent
import com.appelis.kmp_demo.assortment.CategoryRoute
import com.appelis.kmp_demo.assortment.CategoryRouter
import com.appelis.kmp_demo.assortment.CategoryViewState
import com.appelis.kmp_demo.homescreen.HomescreenRoute
import com.appelis.kmp_demo.homescreen.HomescreenRouter
import com.arkivanov.decompose.extensions.compose.jetpack.subscribeAsState
import org.koin.compose.koinInject

@Composable
fun CategoryView(
    component: CategoryComponent,
    modifier: Modifier = Modifier
) {
    val viewModel = remember { component.viewModel }
    val viewState by viewModel.viewState.subscribeAsState()

    Content(viewModel = viewModel, viewState = viewState, modifier = modifier)
}

@Composable
private fun Content(
    viewModel: CategoryComponent.ViewModel,
    viewState: CategoryViewState,
    modifier: Modifier = Modifier,
    router: CategoryRouter = koinInject()
) {
    Column(
        modifier,
        verticalArrangement = Arrangement.Center,
        horizontalAlignment = Alignment.CenterHorizontally
    )  {
        Text("CategoryView", style = MaterialTheme.typography.titleLarge)

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