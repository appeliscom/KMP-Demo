//
//  SwiftUIView.swift
//
//
//  Created by Jan Maloušek on 06.06.2024.
//

import Shared
import SwiftUI
import SwiftUICore

struct CategoryCollectionView: View {
    @StateObject
    private var pager: Pager<CategoryModel>
    private var router: CategoryRouter = inject()
    private let viewModel: CategoryCollectionComponentViewModel
    private let parentId: String
    
    public init(component: CategoryCollectionComponent, parentId: String) {
        self.viewModel = component.viewModel
        self.parentId = parentId
        self._pager = StateObject(wrappedValue: Pager())
    }
        
    var body: some View {
        VStack {
            stateView
        }
        .edgesIgnoringSafeArea(.bottom)
        .navigationTitle("Category")
        .onAppear(first: { viewModel.setup(parentId: parentId) })
        .task {
            await pager.initPager(
                pagedDataStream: .init { continuation in
                    Task {
                        for await items in viewModel.pagedItems {
                            continuation.yield(items)
                        }
                        continuation.finish()
                    }
                }
            )
        }
    }
    
    @ViewBuilder
    private var stateView: some View {
        switch pager.refreshLoadState {
        case .loading:
            ProgressView()
                .frame(maxWidth: .infinity, maxHeight: .infinity, alignment: .center)
        case .generalError:
            Text("GeneralError")
                .frame(maxWidth: .infinity, maxHeight: .infinity, alignment: .center)
        case .networkError:
            Text("NetworkError")
                .frame(maxWidth: .infinity, maxHeight: .infinity, alignment: .center)
        case .notLoading:
            content
        }
    }
    
    @ViewBuilder
    private var content: some View {
        if pager.items.isEmpty {
            emptyCollection
        } else {
            collection
        }
    }
    
    private var emptyCollection: some View {
        Text("Empty")
            .frame(maxWidth: .infinity, maxHeight: .infinity, alignment: .center)
    }
    
    private var collection: some View {
        ScrollView {
            LazyVStack(spacing: 8.0) {
                ForEach(pager.items, id: \.id) { item in
                    Text(item.name)
                        .padding(16)
                        .onTapGesture {
                            router.navigateTo(
                                route: .Category(
                                    categoryInput: CategoryInput.Category(category: item),
                                    displayOnlyArticles: false,
                                    isSheetRoot: false
                                )
                            )
                        }
                }
                
                switch pager.appendLoadState {
                case .loading:
                    ProgressView()
                case .generalError, .networkError:
                    Text("Error loading other items")
                case .notLoading:
                    if pager.hasNextPage {
                        Spacer()
                            .frame(height: 10)
                            .onAppear {
                                pager.loadNextPage()
                            }
                    }
                }
            }
        }
        .padding(16.0)
        .frame(maxHeight: .infinity)
    }
}
