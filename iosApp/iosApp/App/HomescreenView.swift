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
    @ObservedObject
    @StateFlowAdapter
    private var viewState: HomescreenViewState
    private let actions: HomescreenScreenActions
    
    public init(screen: HomescreenScreen) {
        self._viewState = .init(screen.viewState)
        self.actions = screen.actions
    }
    
    var body: some View {
        VStack {
            Text("Homescreen")
                .font(.title)
            
            Spacer()
            
            Button(
                action: {
                    actions.navigateToCategory()
                },
                label: {
                    Text("open category")
                }
            )
            
            Spacer()
        }
    }
}
