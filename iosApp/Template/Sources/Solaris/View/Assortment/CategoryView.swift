//
//  CategoryView.swift
//  iosApp
//
//  Created by Jan Maloušek on 22.03.2024.
//  Copyright © 2024 orgName. All rights reserved.
//

import Shared
import SwiftUI
import SwiftUICore

struct CategoryView: View {
    @State
    private var viewState: CategoryViewState?
    
    @StateObject
    private var pager: Pager<ArticlePreviewModel>
    
    private var router: CategoryRouter = inject()
    private let viewModel: CategoryComponentViewModel
    
    public init(component: CategoryComponent) {
        self.viewModel = component.viewModel
        self._pager = StateObject(wrappedValue: Pager())
    }
    
    var body: some View {
        VStack {
            Text("id: \(String(describing: viewState?.id))")
            
            ScrollView {
                LazyVStack {
                    Text("Kolekce")
                        .font(.title)
                    
                    ForEach(pager.items, id: \.name) { item in
                        Text(item.name)
                            .frame(height: 300)
                            .frame(maxWidth: .infinity)
                            .background(
                                [Color.red, Color.green, Color.blue].randomElement() ?? Color.red
                            )
                    }
                    
                    if !pager.items.isEmpty, pager.hasNextPage {
                        ProgressView()
                            .onAppear {
                                pager.loadNextPage()
                            }
                    }
                }
            }
            .frame(maxHeight: .infinity)
            
            Button(
                action: {
                    router.navigateTo(route: .ArticleDetail(id: "123"))
                }, label: {
                    Text("Navigate to article")
                }
            )
            .padding(.bottom, 40)
            
            Button(
                action: {
                    router.navigateTo(route: .Category(id: viewState?.id ?? "" + "1", isSheetRoot: false))
                }, label: {
                    Text("NavigateToInnerCategory")
                }
            )
            .padding(.bottom, 40)
            
            Button(
                action: {
                    router.navigateTo(route: .Category(id: viewState?.id ?? "" + "1", isSheetRoot: true))
                }, label: {
                    Text("NavigateToInnerCategory in sheet")
                }
            )
            .padding(.bottom, 40)
        }
        .navigationTitle("Category \(String(describing: viewState?.id))")
        .task {
            await pager.initPager(
                pagedDataStream: AsyncStream<AsyncStream<PagedData<ArticlePreviewModel>>>.fromSkieSwiftStateFlow(
                    skieStateFlow: viewModel.viewState,
                    mapFunction: { $0.articles }
                )
            )
        }
    }
}

public extension AsyncStream {
    static func fromSkieSwiftStateFlow<Input, Output>(
        skieStateFlow: SkieSwiftStateFlow<Input>,
        mapFunction: @escaping (Input) -> Output
    ) -> AsyncStream<Output> {
        AsyncStream<Output> { continuation in
            Task {
                for await item in skieStateFlow {
                    continuation.yield(mapFunction(item))
                }
                continuation.finish()
            }
        }
    }
    
    func fromSkieSwiftStateFlow<T>(skieStateFlow: SkieSwiftStateFlow<T>) -> AsyncStream<T> {
        AsyncStream<T> { continuation in
            Task {
                for await item in skieStateFlow {
                    continuation.yield(item)
                }
                continuation.finish()
            }
        }
    }
}

public typealias PagedData = Paging_commonPagingData

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
    
    func loadNextPage() {
        delegate.loadNextPage()
    }
}
