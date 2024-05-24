package com.appelis.kmp_demo.core.auth.domain

data class DeviceSettingsModel(
    private val deviceUUID: String,
    private val mobileDeviceId: String,
    private val publicToken: String,
    private val refreshToken: String,
    private val deviceToken: String,
)