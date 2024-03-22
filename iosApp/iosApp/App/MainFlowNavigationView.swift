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
    private let stack: SkieSwiftStateFlow<ChildStack<MainFlowDestination, MainFlowEntry>>
    private let actions: MainNavigationActions

    init(component: MainNavigation) {
        self.stack = component.stack
        self.actions = component.actions
    }

    var body: some View {
        DecomposeNavigationStack(
            kotlinStack: stack,
            setPath: actions.iosPopTo
        ) { entry in
            switch onEnum(of: entry) {
            case let .homescreen(entry):
                HomescreenView(screen: entry.screen)
            case let .category(entry):
                CategoryView(screen: entry.screen)
            }
        }
    }
}
