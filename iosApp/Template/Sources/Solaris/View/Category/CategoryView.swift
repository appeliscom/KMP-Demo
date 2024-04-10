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
    @StateValue
    private var viewState: CategoryViewState
    
    private var router: CategoryRouter = inject()
    private let viewModel: CategoryComponentViewModel
    
    public init(component: CategoryComponent) {
        self.viewModel = component.viewModel
        self._viewState = StateValue(viewModel.viewState)
    }
    
    var body: some View {
        VStack {
            Text("id: \(viewState.id)")
            
            Spacer()
            
            Button(
                action: {
                    router.navigateTo(route: .Category(id: viewState.id + "1"))
                }, label: {
                    Text("NavigateToInnerCategory")
                }
            )
        }
        .navigationTitle("Category \(viewState.id)")
    }
}
