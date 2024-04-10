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
import com.appelis.kmp_demo.homescreen.HomescreenComponent
import com.appelis.kmp_demo.homescreen.HomescreenRoute
import com.appelis.kmp_demo.homescreen.HomescreenRouter
import com.appelis.kmp_demo.homescreen.HomescreenViewState
import com.appelis.kmp_demo.startup.router.AppStartupRoute
import com.arkivanov.decompose.extensions.compose.jetpack.subscribeAsState
import org.koin.compose.koinInject

@Composable
fun HomescreenView(
    component: HomescreenComponent,
    modifier: Modifier = Modifier
) {
    val viewModel = remember { component.viewModel }
    val viewState by viewModel.viewState.subscribeAsState()

    Content(viewModel = viewModel, viewState = viewState, modifier = modifier)
}

@Composable
private fun Content(
    viewModel: HomescreenComponent.ViewModel,
    viewState: HomescreenViewState,
    modifier: Modifier = Modifier,
    router: HomescreenRouter = koinInject()
) {
    Column(
        modifier,
        verticalArrangement = Arrangement.Center,
        horizontalAlignment = Alignment.CenterHorizontally
    )  {
        Text("HomescreenView", style = MaterialTheme.typography.titleLarge)

        Spacer(modifier = Modifier.weight(1f))

        Button(
            onClick = {
                router.navigateTo(HomescreenRoute.Category(id = "1"))
            }
        ) {
            Text("Open Category")
        }

        Button(
            onClick = {
                router.navigateTo(HomescreenRoute.LeafletCollection)
            }
        ) {
            Text("Open Leaflets")
        }

        Spacer(modifier = Modifier.weight(1f))
    }
}