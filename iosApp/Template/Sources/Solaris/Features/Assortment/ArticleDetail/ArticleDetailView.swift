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
import NukeUI

struct ArticleDetailView: View {
    @State
    private var viewState: ArticleDetailViewState
    private var router: ArticleDetailRouter = inject()
    private let viewModel: ArticleDetailComponentViewModel
    
    public init(component: ArticleDetailComponent) {
        self.viewModel = component.viewModel
        self.viewState = ArticleDetailViewStateLoading()
    }
    
    var body: some View {
        VStack{
            switch onEnum(of: viewState) {
            case .loading:
                loading
            case let .success(data):
                layoutSuccess(data: data)
            case .generalError(_):
                Text("GeneralError")
            case .networkError(_):
                Text("NetworkError")
            }
        }
        .navigationTitle("Article detail")
        .task {
            for await state in viewModel.viewState {
                viewState = state
            }
        }
        .onAppear(first: {
            viewModel.setup()
        })
    }
    
    private var loading: some View {
        VStack {
            Spacer()
            
            ProgressView()
            
            Spacer()
        }
    }
    
    @MainActor
    private func layoutSuccess(data: ArticleDetailViewStateSuccess) -> some View {
        VStack {
            LazyImage(
                url: data.article.imageUrl?.url,
                transaction: .init(animation: .easeIn)
            ) { state in
                if let image = state.image {
                    image
                        .resizable()
                        .scaledToFit()
                } else {
                    Image(resource: \.test_image)
                        .resizable()
                        .scaledToFit()
                }
            }
            .frame(width: UIScreen.main.bounds.width, height: UIScreen.main.bounds.width)
            
            Text(data.article.name)
                .font(.title)
            
            Spacer()
            
            Text("Voucher: \(data.voucher ?? "none")")
            
            Spacer()
        }
    }
}
