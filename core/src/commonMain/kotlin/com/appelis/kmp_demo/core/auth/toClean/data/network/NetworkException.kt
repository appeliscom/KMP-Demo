package com.appelis.kmp_demo.core.auth.toClean.data.network

import com.appelis.core.data.network.ErrorHandlingManager

class NetworkException(
    var code: ErrorHandlingManager.ErrorCodes = ErrorHandlingManager.ErrorCodes.UNKNOWN,
    var msg: String? = null
) : Exception() {

    fun setCode(code: Int): NetworkException {
        this.code = ErrorHandlingManager.createErrorCode(code)
        return this
    }

    fun setCode(code: ErrorHandlingManager.ErrorCodes, msg: String? = null): NetworkException {
        this.code = code
        this.msg = msg
        return this
    }

    override fun toString(): String {
        return "$code/$msg"
    }
}