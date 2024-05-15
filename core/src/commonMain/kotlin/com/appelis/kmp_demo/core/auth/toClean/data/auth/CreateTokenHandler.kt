package com.appelis.kmp_demo.core.auth.toClean.data.auth

import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.MutableSharedFlow
import kotlinx.coroutines.flow.asSharedFlow

interface CreateTokenHandler {
    suspend fun tokenCreated(token: String)
    fun subscribeToTokenCreated(): Flow<String>
}

class CreateTokenHandlerImpl : CreateTokenHandler {
    private val _subscription = MutableSharedFlow<String>(replay = 1)

    override suspend fun tokenCreated(token: String) {
        _subscription.emit(token)
    }

    override fun subscribeToTokenCreated(): Flow<String> {
        return _subscription.asSharedFlow()
    }
}
