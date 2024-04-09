package com.appelis.kmp_demo.android

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.*
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import com.appelis.kmp_demo.Greeting
import com.appelis.kmp_demo.android.navigation.RootNavigationGraph
import com.appelis.kmp_demo.navigation.navigationComponents.root.RootNavigationComponentImpl
import com.arkivanov.decompose.defaultComponentContext
import org.koin.android.ext.android.inject

class MainActivity : ComponentActivity() {
    private val greeting: Greeting by inject()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        val rootComponent = RootNavigationComponentImpl(
            componentContext = defaultComponentContext()
        )

        setContent {
            MyApplicationTheme {
                Surface(
                    modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colorScheme.background
                ) {
                    RootNavigationGraph(rootComponent, Modifier.fillMaxSize())
                }
            }
        }
    }
}

@Composable
fun GreetingView(text: String) {
    Text(text = text)
}

@Preview
@Composable
fun DefaultPreview() {
    MyApplicationTheme {
        GreetingView("Hello, Android!")
    }
}
