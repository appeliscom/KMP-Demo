package com.appelis.kmp_demo.android

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material3.*
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.Dp
import com.appelis.kmp_demo.Greeting
import com.appelis.kmp_demo.android.navigation.RootNavigationGraph
import com.appelis.kmp_demo.navigation.deeplinks.Deeplink
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
                    Box {
                        RootNavigationGraph(rootComponent, Modifier.fillMaxSize())

                        Button(
                            onClick = { rootComponent.handleDeeplink(Deeplink.ArticleDetail( id = "123", voucherCode = ""),) },
                            modifier = Modifier
                                .align(Alignment.BottomEnd)
                                .padding(bottom = Dp(16.0F))
                            ) {
                            Text("handleDeeplink")
                        }

                    }
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
