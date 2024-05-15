package com.appelis.core.domain.model.device

import com.appelis.kmp_demo.core.auth.toClean.domain.translation.Language

data class MobileDevice(
    val idMobileDevice: Int,
    val idCustomer: Int,
    val deviceTemporaryId: String,
    val timeCreate: Long,
    val deviceLang: Language,
    val idMobileUser: Int?
)
