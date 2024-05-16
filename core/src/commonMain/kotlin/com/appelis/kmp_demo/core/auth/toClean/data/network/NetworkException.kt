package com.appelis.kmp_demo.core.auth.toClean.data.network

class NetworkException(
    var code: ErrorCode = ErrorCode.UNKNOWN,
    var msg: String? = null
) : Exception() {
    constructor(code: Int, msg: String? = null) : this(
        code = ErrorCode.fromInt(code),
        msg
    )

    override fun toString(): String {
        return "$code/$msg"
    }

    enum class ErrorCode(val errCode: Int) {
        UNKNOWN(-1),

        // AUTH ERRORS
        CLIENT_ERROR(400),
        AUTH_ERROR(401),
        MISSING_AUTH_TOKEN(403),
        DATA_NOT_FOUND(404),
        INVALID_CARD(405),
        TOO_MANY_REQUESTS(429),
        SERVER_DOWN(500),
        AUTH_SERVER_ERROR(503),

        // PERMISSIONS ERRORS
        UNFULFILLED_PERMISSIONS(7000),

        // Connecting to other services
        EXTERNAL_SERVICE_ERROR(5001),
        CONFIGURATION_SERVER_ERROR(5002),
        COMMAND_TIME_OUT(5003),

        UNAUTHORIZED(510),

        // Input errors
        BAD_VALUE_ERROR(4001),
        CUSTOMER_NOT_FOUND(4002), // bad app key
        MOBILE_DEVICE_NOT_FOUND(4003), // Device is not registered
        ALREADY_REGISTERED(4004),
        USER_NOT_LOGGED(4005),
        USER_EMPTY_PHONE(4006),
        USER_NOT_FOUND(4046),
        CARD_NOT_FOUND(4047),
        WRONG_CARD_CODE(4048),
        WRONG_CARD_VERSION(4049),
        WRONG_SMS_CODE(4050),

        NO_INTERNET(10000),
        CONNECTION_TIMEOUT(10001),
        SUBSCRIPTION_FAILED(10002),
        CANCELLED_CALL(10003);

        companion object {
            fun fromInt(value: Int): ErrorCode = ErrorCode.entries.find { it.errCode == value } ?: ErrorCode.UNKNOWN
        }
    }
}

