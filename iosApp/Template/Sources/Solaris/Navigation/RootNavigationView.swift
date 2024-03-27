//
//  RootView.swift
//  iosApp
//
//  Created by Jan Maloušek on 20.03.2024.
//  Copyright © 2024 orgName. All rights reserved.
//

import Shared
import SwiftUI
import SwiftUICore

public struct RootNavigationView: View {
    @StateValue
    private var slot: ChildSlot<RootDestination, RootEntry>
    
    public init(_ component: RootNavigationComponent) {
        self._slot = StateValue(component.slot)
    }
    
    public var body: some View {
        ZStack {
            if let navigationEntry = slot.child?.instance {
                switch onEnum(of: navigationEntry) {
                case let .appStartup(entry):
                    AppStartupView(screen: entry.screen)
                case let .mainAppFlow(entry):
                    MainFlowNavigationView(component: entry.navigation)
                }
            }
        }
    }
}
