//
//  Pager.swift
//
//
//  Created by Jan Maloušek on 08.05.2024.
//

import Foundation
import Shared

@MainActor
public class Pager<T: AnyObject>: ObservableObject {
    @Published public private(set) var items: [T] = []
    @Published public private(set) var isLoadingNextPage: Bool = false
    @Published public private(set) var hasNextPage: Bool = false
    
    private let delegate = PagingDelegate<T>()
    
    public init() {}
    
    public func initPager(pagedDataStream: AsyncStream<PagedData<T>>) async {
        await withTaskGroup(of: Void.self) { group in
            group.addTask { [weak self] in await self?.observeData(pagedDataStream: pagedDataStream) }
            group.addTask { [weak self] in await self?.observeDataChanges() }
            group.addTask { [weak self] in await self?.observeLoadState() }
        }
    }
    
    private func observeData(pagedDataStream: AsyncStream<PagedData<T>>) async {
        for try await pagedData in pagedDataStream {
            try? await skie(delegate).submitData(pagingData: pagedData)
        }
    }
    
    private func observeDataChanges() async {
        for await _ in delegate.onPagesUpdatedFlow {
            items = delegate.getItems()
        }
    }
    
    private func observeLoadState() async {
        for await loadState in delegate.loadStateFlow {
            switch onEnum(of: loadState.refresh) {
            case .loading:
                isLoadingNextPage = true
            case let .notLoading(notLoading):
                isLoadingNextPage = false
                hasNextPage = !notLoading.endOfPaginationReached
            case .error:
                isLoadingNextPage = false
            }
        }
    }
    
    public func loadNextPage() {
        delegate.loadNextPage()
    }
}

public typealias PagedData = Paging_commonPagingData
