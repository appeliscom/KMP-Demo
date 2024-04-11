//
//  MainFlowNavigationView.swift
//  iosApp
//
//  Created by Jan Maloušek on 22.03.2024.
//  Copyright © 2024 orgName. All rights reserved.
//

import Foundation
import Shared
import SwiftUI
import SwiftUICore

struct MainFlowNavigationView: View {
    private let component: MainNavigationComponent

    init(component: MainNavigationComponent) {
        self.component = component
    }

    var body: some View {
        
        SheetStackView(
            stack: StateValue(component.stack),
            popStackToIndex: { index in
                print("poptoindex \(index)")
                component.pop(toIndex: Int32(index))
            },
            childViewBuilder: { mainFlowNavigationChild in
                switch onEnum(of: mainFlowNavigationChild) {
                case let .homescreen(child):
                    HomescreenView(component: child.component)
                case let .category(child):
                    CategoryView(component: child.component)
                case let .leafletCollection(child):
                    LeafletCollectionView(component: child.component)
                }
            }
        )
    }
}
