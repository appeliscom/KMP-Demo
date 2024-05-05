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
    
    @ObservedObject
    private var pager: CategoryPager = .init()
    
    private var router: CategoryRouter = inject()
    private let viewModel: CategoryComponentViewModel
    
    public init(component: CategoryComponent) {
        self.viewModel = component.viewModel
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
            for await viewState in viewModel.viewState {
                self.viewState = viewState
                print(viewState.articles)
            }
        }
        .onAppear(first: {
            pager.initPager(flow: viewModel.viewState)
        })
    }
}

@MainActor
class CategoryPager: ObservableObject {
    @Published public private(set) var items: [ArticlePreviewModel] = []
    @Published private(set) var isLoading: Bool = false
    @Published private(set) var hasNextPage: Bool = false
    
    private var delegate = PagingDelegate<ArticlePreviewModel>()
    
    func initPager(flow: SkieSwiftStateFlow<CategoryViewState>) {
        Task {
            for try await viewState in flow {
                try? await skie(delegate).submitData(pagingData: viewState.articles)
            }
        }
        
        Task {
            for await _ in delegate.onPagesUpdatedFlow {
                items = delegate.getItems()
            }
        }
        
        Task {
            for await loadState in delegate.loadStateFlow {
                switch onEnum(of: loadState.refresh) {
                case .error:
                    isLoading = false
                case .loading:
                    isLoading = true
                case .notLoading:
                    isLoading = false
                }
                
                switch onEnum(of: loadState.append) {
                case let .notLoading(notLoading):
                    hasNextPage = !notLoading.endOfPaginationReached
                default:
                    break
                }
            }
        }
    }
    
    func loadNextPage() {
        delegate.loadNextPage()
    }
}
