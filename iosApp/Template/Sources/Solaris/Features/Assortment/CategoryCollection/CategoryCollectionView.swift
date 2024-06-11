//
//  SwiftUIView.swift
//
//
//  Created by Jan Maloušek on 06.06.2024.
//

import NukeUI
import Shared
import SwiftUI
import SwiftUICore

struct CategoryCollectionView: View {
    @StateObject
    private var pager: Pager<CategoryModel>
    
    @State
    private var viewState: CategoryCollectionViewState = CategoryCollectionViewState.companion.Empty
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
        .task {
            for await state in viewModel.viewState {
                viewState = state
            }
        }
        .overlay(buttonOverlay)
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
                    layoutCategoryCell(category: item)
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
            .padding(.vertical, 8)
            .background(
                RoundedRectangle(cornerRadius: 16)
                    .fill(Color(\.surface))
            )
            
            Spacer().frame(height: 92)
        }
        .frame(maxHeight: .infinity, alignment: .top)
    }
    
    private func layoutCategoryCell(category: CategoryModel) -> some View {
        HStack(spacing: 16.0) {
            LazyImage(url: category.imageUrl?.url) { state in
                if let image = state.image {
                    image
                        .resizable()
                        .scaledToFit()
                }
            }
            .frame(width: 24, height: 24)
            
            Text(category.name)
            
            Spacer()
            
//            Text("\(viewModel.articleCountByCategoryId[category.categoryId] ?? 0)")
        }
        .padding(.horizontal, 16)
        .frame(height: 48, alignment: .center)
        .contentShape(Rectangle())
    }
    
    private var buttonOverlay: some View {
        layoutButton(
            text: R.strings().show_articles.desc().localized(),
            action: {
                router.navigateTo(route: .Category(
                    categoryInput: .Id(id: viewState.parentId),
                    displayOnlyArticles: true, 
                    isSheetRoot: false
                ))
            }
        )
        .frame(maxHeight: .infinity, alignment: .bottom)
        .padding(.horizontal, 16)
        .padding(.bottom, 24)
    }
    
    private func layoutButton(
        text: String,
        action: @escaping () -> Void
    ) -> some View {
        Button(action: action, label: {
            HStack {
                Text(text)
                    .foregroundStyle(Color(\.surface))
            }
            .frame(maxWidth: .infinity)
            .frame(height: 54)
            .background(
                RoundedRectangle(cornerRadius: 28.0)
                    .fill(Color(\.secondary))
            )
        })
    }
}
