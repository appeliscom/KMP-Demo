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
    val viewState by viewModel.viewState.subscribeAsState()
    val router: LeafletCollectionRouter = koinInject()

    LaunchedEffect(Unit) {
        viewModel.setup("eyJhbGciOiJIUzUxMiIsInR5cCI6IkpXVCJ9.eyJleHAiOjE3MTE5MDIwOTMsImlhdCI6MTcxMTkwMTc5MywiaXNzIjoiQXBwZWxpc0lkZW50aXR5UHJvdmlkZXIiLCJjbGFpbXMiOnsiYXBwZWxpcy5kZXZpY2VJZCI6IjE2OTg2IiwiYXBwZWxpcy5tb2JpbGVVc2VySWQiOiIxODU5MTcxOSIsImFwcGVsaXMucHJvamVjdElkIjoiMSJ9fQ.9RtVp_JZCnIa3CdUugNkMqGzesSQgv9G46Vqe63T9t1EvMMmoqwGRN5owChZP8I3oTcsNI_fnuT91lCC-w3bCw")
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