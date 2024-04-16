package com.appelis.kmp_demo.navigation.deeplinks

sealed class Deeplink {
    data class ArticleDetail(val id: String, val voucherCode: String): Deeplink()
}