package com.appelis.core.domain.network

data class PagingResult<Value>(
    val pageInfo: PageInfo.Offset,
    val edges: List<Edge.Offset<Value>>
)

data class CursorPagingResult<Value>(
    val pageInfo: PageInfo.Cursor,
    val edges: List<Edge.Cursor<Value>>
)

sealed class PageInfo {
    class Offset(val itemCount: Int) : PageInfo()
    class Cursor(val hasNextPage: Boolean) : PageInfo()
}

sealed class Edge<T>(val node: T) {
    class Cursor<T>(val cursor: String?, node: T) : Edge<T>(node)
    class Offset<T>(node: T) : Edge<T>(node)
}
