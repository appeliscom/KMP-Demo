package com.appelis

import metro.leaflet.v1.GetLeafletsRequest
import metro.leaflet.v1.GetLeafletsResponse
import kotlin.coroutines.suspendCoroutine

class LeafletSuspendClientImpl(
    private val callBackClient: LeafletCallBackClient
) : LeafletSuspendClient {
    override suspend fun getLeaflets(request: GetLeafletsRequest): GetLeafletsResponse {
        return convertCallbackCallToSuspend(request, callbackClosure = { input, callback ->
            callBackClient.getLeaflets(input, callback)
        })
    }

    private suspend fun <In, Out> convertCallbackCallToSuspend(
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
}