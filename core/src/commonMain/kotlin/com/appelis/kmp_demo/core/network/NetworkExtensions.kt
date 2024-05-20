package com.appelis.kmp_demo.core.network

import kotlinx.coroutines.delay

suspend fun <T> queryRetry(times: Int = 3, block: suspend () -> T): T {
    fun handleError(throwable: Throwable) {
        if (throwable is NetworkException) {
            when (throwable.code) {
                NetworkException.ErrorCode.CONNECTION_TIMEOUT,
                NetworkException.ErrorCode.NO_INTERNET,
                NetworkException.ErrorCode.SERVER_DOWN,
                NetworkException.ErrorCode.COMMAND_TIME_OUT -> return
                else -> throw throwable
            }
        } else {
            throw throwable
        }
    }

    return retryIO(times = times, block = block, handleError = ::handleError)
}

suspend fun <T> mutationRetry(block: suspend () -> T): T {
    fun handleError(throwable: Throwable) {
        if (throwable is NetworkException) {
            when (throwable.code) {
                NetworkException.ErrorCode.SERVER_DOWN,
                NetworkException.ErrorCode.COMMAND_TIME_OUT -> return
                else -> throw throwable
            }
        } else {
            throw throwable
        }
    }

    return retryIO(times = 3, block = block, handleError = ::handleError)
}

suspend fun <T> subscriptionRetry(block: suspend () -> T): T {
    fun handleError(throwable: Throwable) {
        if (throwable is NetworkException) {
            when (throwable.code) {
                NetworkException.ErrorCode.CONNECTION_TIMEOUT,
                NetworkException.ErrorCode.NO_INTERNET,
                NetworkException.ErrorCode.SERVER_DOWN,
                NetworkException.ErrorCode.COMMAND_TIME_OUT -> return
                else -> throw throwable
            }
        } else {
            throw throwable
        }
    }

    return retryIO(initialDelay = 500, maxDelay = 30_000, block = block, handleError = ::handleError)
}

suspend fun <T> retryIO(
    times: Int = Int.MAX_VALUE,
    initialDelay: Long = 100, // 0.1 second
    maxDelay: Long = 1000, // 1 second
    factor: Double = 2.0,
    block: suspend () -> T,
    handleError: suspend (e: Throwable) -> Unit
): T {
    var currentDelay = initialDelay
    repeat(times - 1) {
        try {
            return block()
        } catch (e: Throwable) {
            handleError.invoke(e)
        }
        delay(currentDelay)
        currentDelay = (currentDelay * factor).toLong().coerceAtMost(maxDelay)
    }
    return block() // last attempt
}