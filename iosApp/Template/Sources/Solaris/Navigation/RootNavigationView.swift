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
    private var slot: ChildSlot<RootSlotChildConfig, RootSlotNavigationChild>
    
    public init(_ component: RootNavigationComponent) {
        self._slot = StateValue(component.slot)
    }
    
    public var body: some View {
        ZStack {
            if let rootSlotNavigationChild = slot.child?.instance {
                switch onEnum(of: rootSlotNavigationChild) {
                case let .appStartup(child):
                    AppStartupView(component: child.component)
                case let .mainAppFlow(child):
                    MainFlowNavigationView(component: child.component)
                }
            }
        }
    }
}
