//
//  CategoryView.swift
//  iosApp
//
//  Created by Jan Maloušek on 22.03.2024.
//  Copyright © 2024 orgName. All rights reserved.
//

import SwiftUI
import Shared
import SwiftUICore

struct CategoryView: View {
    @ObservedObject
    @StateFlowAdapter
    private var viewState: CategoryViewState
    
    public init(screen: CategoryScreen) {
        self._viewState = .init(screen.viewState)
    }
    
    var body: some View {
        VStack {
            Text("Category")
                .font(.title)
            
            Text("id: \(viewState.id)")
            
            Spacer()
        }
    }
}

