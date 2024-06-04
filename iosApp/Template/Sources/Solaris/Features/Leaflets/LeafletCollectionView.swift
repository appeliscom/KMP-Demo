//
//  LeafletCollectionView.swift
//
//
//  Created by Jan Maloušek on 28.03.2024.
//

import SwiftUI
import Shared
import SwiftUICore

struct LeafletCollectionView: View {
    @State
    private var viewState: LeafletCollectionViewState
    private let viewModel: LeafletCollectionComponentViewModel
    private var router: LeafletCollectionRouter = inject()
    
    public init(component: LeafletCollectionComponent) {
        self.viewModel = component.viewModel
        self.viewState = .Loading()
    }
    
    var body: some View {
        VStack {
            switch onEnum(of: viewState) {
            case .loading:
                loading
            case let .error(error):
                Text("error: \(error.description())")
            case let .success(data):
                layoutLeaflets(leaflets: data.leaflets as! [LeafletModel])
            }
            
            Spacer()
            
            Button(
                action: {
                    viewModel.closeIn3Seconds()
                },
                label: {
                    Text("close in 3 seconds")
                }
            )
        }
        .navigationTitle("LeafletCollection")
        .onAppear {
            viewModel.setup()
        }
        .task {
            for await state in viewModel.viewState {
                self.viewState = state
            }
        }
        .task {
            for await uiEvent in viewModel.uiEvents {
                switch onEnum(of: uiEvent) {
                case .closeScreen:
                    router.navigateTo(route: .Pop())
                }
            }
        }
    }
    
    private var loading: some View {
        VStack{
            Spacer()
            
            ProgressView()
            
            Spacer()
        }
    }
    
    private func layoutLeaflets(leaflets: [LeafletModel]) -> some View {
        VStack{
            Text("leaflet collection: ")
                .font(.caption)
            
            ForEach(leaflets, id: \.title) { leaflet in
                Text(leaflet.title)
            }
        }
    }
}

