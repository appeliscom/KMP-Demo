package com.appelis.kmp_demo.core.auth.data.common

import com.appelis.kmp_demo.core.auth.domain.DeviceTokenProvider
import com.appelis.kmp_demo.core.auth.toClean.data.network.fetchAndHandleErrors

abstract class BaseRepository(private val deviceTokenProvider: DeviceTokenProvider) {
    suspend fun <T : Any?> fetch(subject: suspend () -> T): T {
        return fetchAndHandleErrors(block = subject) { e ->
            deviceTokenProvider.handleError(e)
        }
    }
}