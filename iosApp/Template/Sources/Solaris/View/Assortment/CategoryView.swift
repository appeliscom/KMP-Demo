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
                pagedDataStream: AsyncStream<PagedData<ArticlePreviewModel>>.fromSkieSwiftStateFlow(
                    skieStateFlow: viewModel.viewState,
                    mapFunction: { $0.articles }
                )
            )
        }
    }
}
