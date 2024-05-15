package com.appelis.kmp_demo.core.auth.domain

data class TokenPayload(val accessToken: String, val refreshToken: String)
