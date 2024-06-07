//
//  CategoryArticleCollectionView.swift
//  iosApp
//
//  Created by Jan Maloušek on 22.03.2024.
//  Copyright © 2024 orgName. All rights reserved.
//

import Shared
import SwiftUI
import SwiftUICore

struct CategoryArticleCollectionView: View {
    @State
    private var viewState: CategoryArticleCollectionViewState?
    
    @StateObject
    private var pager: Pager<ArticlePreviewModel>
    
    private var router: CategoryRouter = inject()
    private let viewModel: CategoryArticleCollectionComponentViewModel
    private let columns: [GridItem]
    
    public init(component: CategoryArticleCollectionComponent) {
        self.viewModel = component.viewModel
        self._pager = StateObject(wrappedValue: Pager())
        
        columns = Array(
            repeating: .init(
                .flexible(),
                spacing: 8.0
            ),
            count: 2
        )
    }
    
    var body: some View {
        VStack {
            stateView
        
//            Button(
//                action: {
//                    router.navigateTo(route: .ArticleDetail(id: "123"))
//                }, label: {
//                    Text("Navigate to article")
//                }
//            )
//            .padding(.bottom, 40)
            
//            Button(
//                action: {
//                    router.navigateTo(route: .Category(id: viewState?.id ?? "" + "1", isSheetRoot: false))
//                }, label: {
//                    Text("NavigateToInnerCategory")
//                }
//            )
//            .padding(.bottom, 40)
//            
//            Button(
//                action: {
//                    router.navigateTo(route: .Category(id: viewState?.id ?? "" + "1", isSheetRoot: true))
//                }, label: {
//                    Text("NavigateToInnerCategory in sheet")
//                }
//            )
//            .padding(.bottom, 40)
        }
        .background(Color(\.appBackground))
        .edgesIgnoringSafeArea(.bottom)
        .navigationTitle("Category")
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
            LazyVGrid(
                columns: columns,
                alignment: .center,
                spacing: 8.0
            ) {
                ForEach(pager.items, id: \.name) { item in
                    ArticleCellView(article: item)
                        .onTapGesture {
                            router.navigateTo(route: .ArticleDetail(id: item.id))
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
