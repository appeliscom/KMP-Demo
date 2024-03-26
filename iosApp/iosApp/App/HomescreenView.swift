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
    private let actions: HomescreenScreenActions
    
    public init(screen: HomescreenScreen) {
        self._viewState = StateValue(screen.viewState)
        self.actions = screen.actions
    }
    
    var body: some View {
        VStack {
            Text("Homescreen")
                .font(.title)
            
            Spacer()
            
            Button(
                action: {
                    actions.navigateToCategory(id: "123456")
                },
                label: {
                    Text("open category")
                }
            )
            
            Spacer()
        }
    }
}
