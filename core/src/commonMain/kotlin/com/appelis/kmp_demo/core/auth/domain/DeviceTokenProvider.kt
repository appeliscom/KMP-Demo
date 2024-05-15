package com.appelis.kmp_demo.core.auth.domain

import com.appelis.kmp_demo.core.auth.toClean.data.network.NetworkException

interface DeviceTokenProvider {
    suspend fun getAccessToken(): String
    suspend fun getRefreshedAccessToken(invalidAccessToken: String): String
//    suspend fun handleError(e: NetworkException)
}
