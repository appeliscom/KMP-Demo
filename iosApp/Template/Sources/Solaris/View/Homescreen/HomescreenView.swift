//
//  HomescreenView.swift
//  iosApp
//
//  Created by Jan Maloušek on 22.03.2024.
//  Copyright © 2024 orgName. All rights reserved.
//

import SwiftUI
import Shared
import SwiftUICore

struct HomescreenView: View {
    @StateValue
    private var viewState: HomescreenViewState
    
    private var router: HomescreenRouter = inject()
    
    private let viewModel: HomescreenComponentViewModel
    
    public init(component: HomescreenComponent) {
        self.viewModel = component.viewModel
        self._viewState = StateValue(viewModel.viewState)
    }
    
    var body: some View {
        VStack {
            Text("Homescreen")
                .font(.title)
            
            Spacer()
            
            Button(
                action: {
                    router.navigateTo(route: .Category(id: "321654"))
                },
                label: {
                    Text("open category")
                }
            )
            .padding(.bottom, 16)
            
            Button(
                action: {
                    router.navigateTo(route: .LeafletCollection())
                },
                label: {
                    Text("open leaflets")
                }
            )
            
            Spacer()
        }
    }
}
