//
//  HomescreenView.swift
//  iosApp
//
//  Created by Jan Maloušek on 22.03.2024.
//  Copyright © 2024 orgName. All rights reserved.
//

import Shared
import SwiftUI
import SwiftUICore

struct HomescreenView: View {
    @State
    private var viewState: HomescreenViewState
    
    @State
    private var counter: Int = 0
    
    private var router: HomescreenRouter = inject()
    
    private let viewModel: HomescreenComponentViewModel
    
    public init(component: HomescreenComponent) {
        self.viewModel = component.viewModel
        viewState = .init()
    }
    
    var body: some View {
        VStack {
            Image(resource: \.test_image)
                .resizable()
                .scaledToFit()
                .frame(width: 300, height: 300)
            
            Text("counter: \(counter)")
                .onTapGesture {
                    counter += 1
                }
                .padding(.bottom, 16)
            
            Button(
                action: {
                    router.navigateTo(route: .Category(id: "1"))
                },
                label: {
                    Text("open category")
                        .font(Font(R.fonts().cametro_regular.uiFont(withSize: 20)))
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
        .frame(maxWidth: .infinity)
        .background(
            Color(\.appBackground)
        )
        .navigationTitle("Homescreen")
    }
}
