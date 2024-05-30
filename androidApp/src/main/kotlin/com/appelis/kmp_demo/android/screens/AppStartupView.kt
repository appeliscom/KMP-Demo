package com.appelis.kmp_demo.android.screens

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.Button
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import com.appelis.kmp_demo.startup.component.AppStartupComponent
import com.appelis.kmp_demo.startup.router.AppStartupRoute
import com.appelis.kmp_demo.startup.router.AppStartupRouter
import com.appelis.kmp_demo.startup.viewModel.AppStartupViewState
import com.arkivanov.decompose.extensions.compose.jetpack.subscribeAsState
import org.koin.compose.koinInject

@Composable
fun AppStartupView(
    component: AppStartupComponent,
    modifier: Modifier = Modifier
) {
    val viewModel = remember { component.viewModel }
    val viewState by viewModel.viewState.collectAsState()

    Content(viewModel = viewModel, viewState = viewState, modifier = modifier)
}

@Composable
private fun Content(
    viewModel: AppStartupComponent.ViewModel,
    viewState: AppStartupViewState,
    modifier: Modifier = Modifier,
    router: AppStartupRouter = koinInject()
    ) {
    Column(
        modifier,
        verticalArrangement = Arrangement.Center,
        horizontalAlignment = Alignment.CenterHorizontally
    )  {
        Text("AppStartupView", style = MaterialTheme.typography.titleLarge)

        Spacer(modifier = Modifier.weight(1f))

        Button(
            onClick = {
                router.navigateTo(AppStartupRoute.MainAppFlow)
            }
        ) {
            Text("Continue to app")
        }

        Spacer(modifier = Modifier.weight(1f))
    }
}