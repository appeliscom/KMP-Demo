//
//  CategoryView.swift
//
//
//  Created by Jan Maloušek on 10.06.2024.
//

import Shared
import SwiftUI
import SwiftUICore

struct CategoryView: View {
    @State
    private var viewState: CategoryViewState
    
    private let viewModel: CategoryComponentViewModel
    private let component: CategoryComponent
    
    public init(component: CategoryComponent) {
        self.component = component
        self.viewModel = component.viewModel
        self.viewState = .Loading()
    }
    
    var body: some View {
        VStack {
            switch onEnum(of: viewState) {
            case let .articleCollection(data):
                CategoryArticleCollectionView(component: component.articleCollectionSubComponent, categoryId: data.parentCategory.id)
            case let .categoryCollection(data):
                CategoryCollectionView(component: component.categoryCollectionSubComponent, parentId: data.parentCategory.id)
            case .generalError:
                Text("GeneralError")
            case .loading:
                loading
            case .networkError:
                Text("NetworkError")
            }
        }
        .frame(maxWidth: .infinity, maxHeight: .infinity)
        .background(Color(\.appBackground))
        .onAppear(first: { viewModel.setup() })
        .task {
            for await state in viewModel.viewState {
                self.viewState = state
            }
        }
    }
    
    private var loading: some View {
        VStack {
            Spacer()
            
            ProgressView()
            
            Spacer()
        }
    }
}
