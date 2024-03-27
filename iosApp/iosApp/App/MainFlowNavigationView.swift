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
        StackView(
            stackValue: StateValue(component.stack),
            onBack: { index in component.onBackClicked(toIndex: index) }
        ){ entry in
                switch onEnum(of: entry) {
                case let .homescreen(entry):
                    HomescreenView(component: entry.component)
                case let .category(entry):
                    CategoryView(component: entry.component)
                }
            }
    }
}
