package com.appelis.kmp_demo.android.navigation

import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import androidx.compose.runtime.Composable
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.ui.Modifier
import com.appelis.kmp_demo.android.screens.CategoryView
import com.appelis.kmp_demo.android.screens.HomescreenView
import com.appelis.kmp_demo.android.screens.LeafletCollectionView
import com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow.MainFlowNavigationChild
import com.appelis.kmp_demo.navigation.navigationComponents.mainAppFlow.MainNavigationComponent
import com.arkivanov.decompose.extensions.compose.jetpack.stack.Children
import com.arkivanov.decompose.extensions.compose.jetpack.stack.animation.fade
import com.arkivanov.decompose.extensions.compose.jetpack.stack.animation.stackAnimation
import com.arkivanov.decompose.router.stack.ChildStack


@Composable
fun MainFlowNavigationGraph(
    component: MainNavigationComponent,
    modifier: Modifier = Modifier
) {
    val stack: ChildStack<*, MainFlowNavigationChild> by component.stack.collectAsState()

    Surface(
        modifier = modifier,
        color = MaterialTheme.colorScheme.background,
    ) {
        Children(
            stack = stack,
            modifier = Modifier.fillMaxSize(),
            animation = stackAnimation(fade())
        ) { child ->
            when (val childInstance = child.instance) {
                is MainFlowNavigationChild.Homescreen -> HomescreenView(component = childInstance.component, modifier)
                is MainFlowNavigationChild.Category -> CategoryView(component = childInstance.component, modifier)
                is MainFlowNavigationChild.LeafletCollection -> LeafletCollectionView(component = childInstance.component, modifier)
            }
        }
    }
}