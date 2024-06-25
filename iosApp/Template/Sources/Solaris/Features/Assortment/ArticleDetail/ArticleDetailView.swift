//
//  ArticleDetailView.swift
//
//
//  Created by Jan Maloušek on 12.04.2024.
//

import Foundation
import NukeUI
import Shared
import SwiftUI
import SwiftUICore

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
        VStack {
            switch onEnum(of: viewState) {
            case .loading:
                loading
            case let .success(data):
                layoutSuccess(data: data)
            case .generalError:
                Text("GeneralError")
            case .networkError:
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
            
            Button(
                action: { router.navigateTo(route: ArticleRoute.Home()) },
                label: {
                    Text("Navigate Home")
                }
            )
        }
    }
}
