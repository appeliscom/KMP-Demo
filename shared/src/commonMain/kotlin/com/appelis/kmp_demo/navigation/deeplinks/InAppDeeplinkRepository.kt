package com.appelis.kmp_demo.navigation.deeplinks

import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.MutableSharedFlow
import kotlinx.coroutines.launch
import org.koin.core.annotation.Single

@Single
class InAppDeeplinkRepository {
    private val inAppDeeplink = MutableSharedFlow<Deeplink.InApp>()

    fun handleNavigationEvent(deeplink: Deeplink.InApp) {
        CoroutineScope(Dispatchers.Default).launch {
            inAppDeeplink.emit(deeplink)
        }
    }

    fun observeInAppDeeplink(): Flow<Deeplink.InApp> = inAppDeeplink
}