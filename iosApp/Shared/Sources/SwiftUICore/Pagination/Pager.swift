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
    @Published public private(set) var refreshLoadState: LoadState = .loading
    @Published public private(set) var appendLoadState: LoadState = .notLoading
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
                refreshLoadState = .loading
            case let .notLoading(notLoading):
                refreshLoadState = .notLoading
                hasNextPage = !notLoading.endOfPaginationReached
            case let .error(error):
                if let networkException = (error.error as? NetworkException),
                   networkException.code == .connectionTimeout {
                    refreshLoadState = .networkError
                } else {
                    refreshLoadState = .generalError
                }
            }
            
            switch onEnum(of: loadState.append) {
            case .loading:
                appendLoadState = .loading
            case let .notLoading(notLoading):
                appendLoadState = .notLoading
                hasNextPage = !notLoading.endOfPaginationReached
            case let .error(error):
                if let networkException = (error.error as? NetworkException),
                   networkException.code == .connectionTimeout {
                    refreshLoadState = .networkError
                } else {
                    refreshLoadState = .generalError
                }
            }
        }
    }
    
    public func loadNextPage() {
        delegate.loadNextPage()
    }
    
    public enum LoadState {
        case loading
        case generalError
        case networkError
        case notLoading
    }
}

public typealias PagedData = Paging_commonPagingData
