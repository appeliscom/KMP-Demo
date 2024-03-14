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
import com.appelis.LeafletRepository
import com.appelis.LeafletSuspendClientImpl
import com.appelis.RegisterDeviceRepositoryImpl
import com.appelis.kmp_demo.Greeting
import com.example.common.Test
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.withContext

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            MyApplicationTheme {
                Surface(
                    modifier = Modifier.fillMaxSize(),
                    color = MaterialTheme.colorScheme.background
                ) {
                    LaunchedEffect(key1 = true) {
                        val leafletClient = LeafletSuspendClientImpl()
                        val repository = LeafletRepository(leafletClient)

                        withContext(Dispatchers.IO) {
                            val response = repository.getLeaflets()
                            println("Response from android view: ${response}")
                        }
                    }

                    GreetingView(Test().sayHello())
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
