package com.appelis.kmp_demo.core.auth.toClean.data.network

import com.appelis.core.data.network.ErrorHandlingManager
import kotlinx.coroutines.delay

suspend fun <T> queryRetry(times: Int = 3, block: suspend () -> T): T {
    fun handleError(throwable: Throwable) {
        if (throwable is NetworkException) {
            when (throwable.code) {
                ErrorHandlingManager.ErrorCodes.AUTH_ERROR,
                ErrorHandlingManager.ErrorCodes.AUTH_SERVER_ERROR,
                ErrorHandlingManager.ErrorCodes.MISSING_AUTH_TOKEN -> return
                ErrorHandlingManager.ErrorCodes.CONNECTION_TIMEOUT,
                ErrorHandlingManager.ErrorCodes.NO_INTERNET,
                ErrorHandlingManager.ErrorCodes.SERVER_DOWN,
                ErrorHandlingManager.ErrorCodes.COMMAND_TIME_OUT -> return
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
                ErrorHandlingManager.ErrorCodes.AUTH_ERROR,
                ErrorHandlingManager.ErrorCodes.AUTH_SERVER_ERROR,
                ErrorHandlingManager.ErrorCodes.MISSING_AUTH_TOKEN -> return
                ErrorHandlingManager.ErrorCodes.SERVER_DOWN,
                ErrorHandlingManager.ErrorCodes.COMMAND_TIME_OUT -> return
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
                ErrorHandlingManager.ErrorCodes.AUTH_ERROR,
                ErrorHandlingManager.ErrorCodes.AUTH_SERVER_ERROR,
                ErrorHandlingManager.ErrorCodes.MISSING_AUTH_TOKEN -> return
                ErrorHandlingManager.ErrorCodes.CONNECTION_TIMEOUT,
                ErrorHandlingManager.ErrorCodes.NO_INTERNET,
                ErrorHandlingManager.ErrorCodes.SERVER_DOWN,
                ErrorHandlingManager.ErrorCodes.COMMAND_TIME_OUT -> return
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

suspend fun <T> fetchAndHandleErrors(
    times: Int = 2,
    block: suspend () -> T,
    handleError: suspend (e: NetworkException) -> Unit
): T {
    repeat(times - 1) {
        try {
            return block()
        } catch (e: NetworkException) {
            handleError.invoke(e)
        }
    }
    return block()
}
