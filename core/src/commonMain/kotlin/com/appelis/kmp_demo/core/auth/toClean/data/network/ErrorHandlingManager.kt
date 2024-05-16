package com.appelis.kmp_demo.core.auth.toClean.data.network
//
//import kotlinx.coroutines.delay
//
//object ErrorHandlingManager {
//
//    private const val MAX_RETRY_COUNT = 5
//
//    fun getErrorFromErrorCode(errCode: Int?): ErrorCodes? {
//        val map = ErrorCodes.values().associateBy(ErrorCodes::errCode)
//        if (errCode == null) {
//            return null
//        }
//        return map[errCode]
//    }
//
//    enum class ErrorCodes(val errCode: Int) {
//
//        UNKNOWN(-1),
//
//        // AUTH ERRORS
//        CLIENT_ERROR(400),
//        AUTH_ERROR(401),
//        MISSING_AUTH_TOKEN(403),
//        DATA_NOT_FOUND(404),
//        INVALID_CARD(405),
//        TOO_MANY_REQUESTS(429),
//        SERVER_DOWN(500),
//        AUTH_SERVER_ERROR(503),
//
//        // PERMISSIONS ERRORS
//        UNFULFILLED_PERMISSIONS(7000),
//
//        // Connecting to other services
//        EXTERNAL_SERVICE_ERROR(5001),
//        CONFIGURATION_SERVER_ERROR(5002),
//        COMMAND_TIME_OUT(5003),
//
//        UNAUTHORIZED(510),
//
//        // Input errors
//        BAD_VALUE_ERROR(4001),
//        CUSTOMER_NOT_FOUND(4002), // bad app key
//        MOBILE_DEVICE_NOT_FOUND(4003), // Device is not registered
//        ALREADY_REGISTERED(4004),
//        USER_NOT_LOGGED(4005),
//        USER_EMPTY_PHONE(4006),
//        USER_NOT_FOUND(4046),
//        CARD_NOT_FOUND(4047),
//        WRONG_CARD_CODE(4048),
//        WRONG_CARD_VERSION(4049),
//        WRONG_SMS_CODE(4050),
//
//        NO_INTERNET(10000),
//        CONNECTION_TIMEOUT(10001),
//        SUBSCRIPTION_FAILED(10002),
//        CANCELLED_CALL(10003)
//    }
//
//    enum class GoErrorCodes(val errCode: Int) {
//        UNKNOWN(-1),
//        NOT_FOUND(4004),
//        USER_NOT_LOGGED(4005),
//        GENERAL_AUTH_ERROR(4006),
//        WRONG_INPUT(4007),
//        PAST_TIME_ERROR(4008),
//        MY_OFFERS_EMPTY_LOCAL_COUNT(4090),
//        SERVER_INTERNAL_ERROR(5000),
//        WRONG_DATA_LOADER_RESULT_TYPE(5001),
//        USER_CANT_USE(5002),
//        COMMAND_TIME_OUT(5003),
//        DATABASE_ERROR(5005)
//    }
//
//    fun createErrorCode(code: Int?): ErrorCodes {
//        if (code == null) {
//            return ErrorCodes.UNKNOWN
//        }
//
//        val iCode = try {
//            code.toInt()
//        } catch (e: NumberFormatException) {
//            ErrorCodes.UNKNOWN.errCode
//        }
//
//        ErrorCodes.values().forEach {
//            if (it.errCode == iCode) {
//                return it
//            }
//        }
//
//        return ErrorCodes.UNKNOWN
//    }
//
//    fun mapGoErrorCodeToErrorCode(code: GoErrorCodes): ErrorCodes {
//        return when (code) {
//            GoErrorCodes.NOT_FOUND -> ErrorCodes.DATA_NOT_FOUND
//            GoErrorCodes.USER_NOT_LOGGED -> ErrorCodes.USER_NOT_LOGGED
//            GoErrorCodes.GENERAL_AUTH_ERROR -> ErrorCodes.MISSING_AUTH_TOKEN
//            GoErrorCodes.WRONG_INPUT -> ErrorCodes.BAD_VALUE_ERROR
//            GoErrorCodes.PAST_TIME_ERROR -> ErrorCodes.BAD_VALUE_ERROR
//            GoErrorCodes.SERVER_INTERNAL_ERROR -> ErrorCodes.SERVER_DOWN
//            GoErrorCodes.WRONG_DATA_LOADER_RESULT_TYPE -> ErrorCodes.SERVER_DOWN
//            GoErrorCodes.USER_CANT_USE -> ErrorCodes.SERVER_DOWN
//            GoErrorCodes.DATABASE_ERROR -> ErrorCodes.SERVER_DOWN
//            GoErrorCodes.COMMAND_TIME_OUT -> ErrorCodes.COMMAND_TIME_OUT
//            GoErrorCodes.MY_OFFERS_EMPTY_LOCAL_COUNT -> ErrorCodes.BAD_VALUE_ERROR
//            GoErrorCodes.UNKNOWN -> ErrorCodes.UNKNOWN
//        }
//    }
//
//    suspend fun genericHandleError(e: NetworkException) {
//        return when (e.code) {
//            ErrorCodes.MISSING_AUTH_TOKEN -> {
////                LoggerWrapper.logError(Exception("Missing auth token not handled!"))
//                throw e
//            }
//            ErrorCodes.MOBILE_DEVICE_NOT_FOUND -> {
////                LoggerWrapper.logError(Exception("Mobile device not found not handled!"))
//                throw e
//            }
//            ErrorCodes.NO_INTERNET -> throw e
//            ErrorCodes.SUBSCRIPTION_FAILED -> delay(5000)
//            ErrorCodes.CANCELLED_CALL -> throw e
//            ErrorCodes.USER_NOT_LOGGED -> {
////                LoggerWrapper.logError(Exception("User not logged not handled!"))
//                throw e
//            }
//            ErrorCodes.USER_EMPTY_PHONE -> throw e
//            ErrorCodes.AUTH_ERROR -> {
////                LoggerWrapper.logError(Exception("Auth error not handled!"))
//                throw e
//            }
//            ErrorCodes.AUTH_SERVER_ERROR -> {
////                LoggerWrapper.logError(Exception("Auth server error not handled!"))
//                throw e
//            }
//            ErrorCodes.UNFULFILLED_PERMISSIONS,
//            ErrorCodes.EXTERNAL_SERVICE_ERROR,
//            ErrorCodes.CONFIGURATION_SERVER_ERROR,
//            ErrorCodes.CUSTOMER_NOT_FOUND,
//            ErrorCodes.ALREADY_REGISTERED,
//            ErrorCodes.DATA_NOT_FOUND,
//            ErrorCodes.CONNECTION_TIMEOUT,
//            ErrorCodes.TOO_MANY_REQUESTS,
//            ErrorCodes.INVALID_CARD,
//            ErrorCodes.USER_NOT_FOUND,
//            ErrorCodes.CARD_NOT_FOUND,
//            ErrorCodes.WRONG_CARD_CODE,
//            ErrorCodes.WRONG_CARD_VERSION,
//            ErrorCodes.WRONG_SMS_CODE,
//            ErrorCodes.BAD_VALUE_ERROR,
//            ErrorCodes.SERVER_DOWN,
//            ErrorCodes.CLIENT_ERROR,
//            ErrorCodes.COMMAND_TIME_OUT,
//            ErrorCodes.UNKNOWN,
//            ErrorCodes.UNAUTHORIZED -> throw e
//        }
//    }
//
//    private fun handleNetworkError(error: NetworkException, retryCount: Int): Pair<Int, Int> {
//        return when (error.code) {
//            ErrorCodes.NO_INTERNET,
//            ErrorCodes.COMMAND_TIME_OUT,
//            ErrorCodes.CONNECTION_TIMEOUT,
//            ErrorCodes.SERVER_DOWN -> {
//                throwErrorIfMaxRetry(error, retryCount, 0)
//            }
//            ErrorCodes.USER_NOT_LOGGED -> throw error
//            ErrorCodes.UNFULFILLED_PERMISSIONS -> throw error
//            ErrorCodes.AUTH_ERROR -> throw error
//            ErrorCodes.DATA_NOT_FOUND -> throw error
//            ErrorCodes.TOO_MANY_REQUESTS -> {
//                throwErrorIfMaxRetry(error, retryCount, 30)
//            }
//            ErrorCodes.UNAUTHORIZED -> throw error
//            else -> throw error
//        }
//    }
//
////    private fun handleGrpcError(error: StatusRuntimeException, retryCount: Int): Pair<Int, Int> {
////        return when (error.status?.code) {
////            Status.Code.UNAVAILABLE -> {
////                throwErrorIfMaxRetry(error, retryCount, 0)
////            }
////            else -> throw error
////        }
////    }
//
//    private fun throwErrorIfMaxRetry(error: Throwable, retryCount: Int, delay: Int): Pair<Int, Int> {
//        return if (retryCount > MAX_RETRY_COUNT) {
//            throw error
//        } else {
//            Pair(retryCount, delay)
//        }
//    }
//}
