package com.appelis.kmp_demo.core.paging

interface IEntityIdentifiable<T> {
    fun getItemIdentifier(): String

    fun isContentSame(o: T): Boolean

    fun hasPayloadChanged(o: T): Any? {
        return null
    }
}
