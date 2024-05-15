package com.appelis.kmp_demo.core.auth.toClean.domain.settings

import com.appelis.kmp_demo.core.auth.toClean.domain.translation.Language

data class DeviceSettings(
    val id: Int = -1,
    val applicationKey: String = "",
    val deviceKey: String = "",
    val mobileDeviceId: String = "",
    val language: String = Language.CZ.iso,
    val publicToken: String = "",
    val deviceToken: String = "",
    val refreshToken: String = ""
)
