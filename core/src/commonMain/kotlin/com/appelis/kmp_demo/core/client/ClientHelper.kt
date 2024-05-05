package com.appelis.kmp_demo.core.client
import kotlin.coroutines.suspendCoroutine

suspend fun <In, Out> convertCallbackCallToSuspend(
    input: In,
    callbackClosure: ((In, ((Out?, Throwable?) -> Unit)) -> Unit),
): Out {
    return suspendCoroutine { continuation ->
        callbackClosure(input) { result, error ->
            Unit
            when {
                error != null -> {
                    continuation.resumeWith(Result.failure(error))
                }

                result != null -> {
                    continuation.resumeWith(Result.success(result))
                }

                else -> {
                    continuation.resumeWith(Result.failure(IllegalStateException("Incorrect grpc call processing")))
                }
            }
        }
    }
}