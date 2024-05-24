package com.appelis.kmp_demo.android.screens

import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.material3.Button
import androidx.compose.material3.CircularProgressIndicator
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.remember
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import com.appelis.kmp_demo.leaflet.uiLogic.component.LeafletCollectionComponent
import com.appelis.kmp_demo.leaflet.uiLogic.router.LeafletCollectionRoute
import com.appelis.kmp_demo.leaflet.uiLogic.router.LeafletCollectionRouter
import com.appelis.kmp_demo.leaflet.uiLogic.viewModel.LeafletCollectionUIEvent
import com.appelis.kmp_demo.leaflet.uiLogic.viewModel.LeafletCollectionViewState
import com.arkivanov.decompose.extensions.compose.jetpack.subscribeAsState
import org.koin.compose.koinInject

@Composable
fun LeafletCollectionView(
    component: LeafletCollectionComponent,
    modifier: Modifier = Modifier
) {
    val viewModel = remember { component.viewModel }
    val viewState by viewModel.viewState.collectAsState()
    val router: LeafletCollectionRouter = koinInject()

    LaunchedEffect(Unit) {
        viewModel.setup()
        viewModel.uiEvents.collect{ uiEvent ->
            when(uiEvent) {
                LeafletCollectionUIEvent.CloseScreen -> router.navigateTo(LeafletCollectionRoute.Pop)
            }
        }
    }

    Content(viewModel = viewModel, viewState = viewState, modifier = modifier)
}

@Composable
private fun Content(
    viewModel: LeafletCollectionComponent.ViewModel,
    viewState: LeafletCollectionViewState,
    modifier: Modifier = Modifier
) {
    Column(
        modifier,
        verticalArrangement = Arrangement.Center,
        horizontalAlignment = Alignment.CenterHorizontally
    )  {
        Text("LeafletCollection", style = MaterialTheme.typography.titleLarge)

        when(val instance = viewState){
            is LeafletCollectionViewState.Error -> Error(error = instance)
            LeafletCollectionViewState.Loading -> Loading()
            is LeafletCollectionViewState.Success -> Success(success = instance)
        }

        Spacer(modifier = Modifier.weight(1f))

        Button(
            onClick = {
                viewModel.closeIn3Seconds()
            }
        ) {
            Text("Close in 3s")
        }
    }
}

@Composable
private fun Loading() {
    CircularProgressIndicator(
        modifier = Modifier.width(64.dp),
        color = MaterialTheme.colorScheme.secondary,
        trackColor = MaterialTheme.colorScheme.surfaceVariant,
    )
}

@Composable
private fun Success(success: LeafletCollectionViewState.Success) {
    LazyColumn {
        items(success.leaflets) {
            Text(it.title)
        }
    }
}

@Composable
private fun Error(error: LeafletCollectionViewState.Error) {
    Text(error.error.toString())
}