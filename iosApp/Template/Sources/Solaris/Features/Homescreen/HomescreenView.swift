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
            
            Text(R.strings().my_string.desc().localized())
            
            Text("counter: \(counter)")
                .onTapGesture {
                    counter += 1
                }
                .padding(.bottom, 16)
            
            Button(
                action: {
                    router.navigateTo(route: .Category(id: "37808"))
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
        .frame(maxWidth: .infinity)
        .background(
            Color(\.appBackground)
        )
        .navigationTitle("Homescreen")
    }
}
