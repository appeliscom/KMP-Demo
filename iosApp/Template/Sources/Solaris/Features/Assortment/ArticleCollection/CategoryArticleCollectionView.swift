//
//  CategoryArticleCollectionView.swift
//  iosApp
//
//  Created by Jan Maloušek on 22.03.2024.
//  Copyright © 2024 orgName. All rights reserved.
//

import NukeUI
import Shared
import SwiftUI
import SwiftUICore

struct CategoryArticleCollectionView: View {
    @Environment(\.theme) var theme
    @Environment(\.translations) var translations
    
    @State var viewState: CategoryArticleCollectionViewState = CategoryArticleCollectionViewState.companion.default
    @StateObject var pager: Pager<ArticlePreviewModel>
    
    var router: CategoryRouter = inject()
    let viewModel: CategoryArticleCollectionComponentViewModel
    private let columns: [GridItem]
    private let categoryId: String
    
    public init(component: CategoryArticleCollectionComponent, categoryId: String) {
        self.viewModel = component.viewModel
        self.categoryId = categoryId
        self._pager = StateObject(wrappedValue: Pager())
        
        self.columns = Array(
            repeating: .init(
                .flexible(),
                spacing: 8.0
            ),
            count: 2
        )
    }
    
    var body: some View {
        ScrollView {
            VStack {
                searchFilterWidget
                sortingWidget
                stateView
            }
        }
        .background(Color(\.appBackground))
        .edgesIgnoringSafeArea(.bottom)
        .navigationTitle("Articles")
        .onAppear(first: { viewModel.setup(id: categoryId) })
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
        .task {
            for await state in viewModel.viewState {
                viewState = state
            }
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
        LazyVGrid(
            columns: columns,
            alignment: .center,
            spacing: 8.0
        ) {
            ForEach(pager.items, id: \.name) { item in
                ArticleCellView(
                    article: item,
                    isFavorite: Binding(
                        get: { viewState.usersFavourites.contains(item.id) },
                        set: { shouldBeFavorite in
                            if shouldBeFavorite {
                                viewModel.addArticleToFavorites(articleId: item.id)
                            } else {
                                viewModel.removeArticleFromFavorites(articleId: item.id)
                            }
                        }
                    ),
                    isWatchdog: Binding(
                        get: { viewState.usersWatchdogs.contains(item.id) },
                        set: { isWatchdog in
                            if isWatchdog {
                                viewModel.addArticleToWatchdogs(articleId: item.id)
                            } else {
                                viewModel.removeArticleFromWatchdogs(articleId: item.id)
                            }
                        }
                    )
                )
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
        .padding(16.0)
    }
}
