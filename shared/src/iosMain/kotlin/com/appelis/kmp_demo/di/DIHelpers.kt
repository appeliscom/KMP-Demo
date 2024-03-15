package com.appelis.kmp_demo.di

import kotlinx.cinterop.BetaInteropApi
import kotlinx.cinterop.ObjCClass
import kotlinx.cinterop.ObjCObject
import kotlinx.cinterop.ObjCProtocol
import kotlinx.cinterop.getOriginalKotlinClass
import org.koin.core.parameter.ParametersDefinition
import org.koin.core.qualifier.Qualifier
import org.koin.mp.KoinPlatformTools
import kotlin.reflect.KClass

fun <T> koinGet(
    clazz: KClass<*>,
    qualifier: Qualifier? = null,
    parameters: ParametersDefinition? = null
): T {
    val koin = KoinPlatformTools.defaultContext().get()

    return koin.get(clazz, qualifier, parameters)
}

@OptIn(BetaInteropApi::class)
data class SwiftType(
    val type: ObjCObject,
    val swiftClazz: KClass<*>,
)

@OptIn(BetaInteropApi::class)
fun SwiftType.getClazz(): KClass<*> =
    when (type) {
        is ObjCClass -> getOriginalKotlinClass(type)
        is ObjCProtocol -> getOriginalKotlinClass(type)
        else -> null
    } ?: swiftClazz

