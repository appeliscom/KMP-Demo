package com.appelis.kmp_demo.core.paging

import androidx.paging.PagingConfig

val defaultPagingConfig = PagingConfig(
    pageSize = 20,
    prefetchDistance = 40,
    initialLoadSize = 40,
    enablePlaceholders = false
)