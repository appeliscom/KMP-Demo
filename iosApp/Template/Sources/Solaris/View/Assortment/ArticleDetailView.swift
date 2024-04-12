//
//  ArticleDetailView.swift
//
//
//  Created by Jan Maloušek on 12.04.2024.
//

import Foundation
import Shared
import SwiftUI
import SwiftUICore

struct ArticleDetailView: View {
    @StateValue
    private var viewState: ArticleDetailViewState
    private var router: ArticleDetailRouter = inject()
    private let viewModel: ArticleDetailComponentViewModel
    
    public init(component: ArticleDetailComponent) {
        self.viewModel = component.viewModel
        self._viewState = StateValue(viewModel.viewState)
    }
    
    var body: some View {
        VStack{
            switch onEnum(of: viewState) {
            case .loading:
                loading
            case let .error(error):
                Text("error: \(error.description())")
            case let .success(data):
                layoutSuccess(data: data)
            }
        }
        .navigationTitle("Article detail")
        .onAppear{
            viewModel.setup()
        }
    }
    
    private var loading: some View {
        VStack {
            Spacer()
            
            ProgressView()
            
            Spacer()
        }
    }
    
    private func layoutSuccess(data: ArticleDetailViewState.Success) -> some View {
        VStack {
            Spacer()
            
            Text("ArticleId: \(data.id)")
                .font(.caption)
            
            Spacer()
        }
    }
}
