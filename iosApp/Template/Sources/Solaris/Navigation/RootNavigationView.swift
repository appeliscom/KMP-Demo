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
    private let component: RootNavigationComponent
    
    public init(_ component: RootNavigationComponent) {
        self.component = component
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
            
            Circle()
                .fill(.black)
                .overlay(
                    Text("deeplink")
                        .foregroundColor(.white)
                )
                .frame(width: 80, height: 80)
                .padding()
                .onTapGesture {
                    Task{ @MainActor in
//                        try await Task.sleep(nanoseconds: 5_000_000_000)
                        
                        component.handleDeeplink(deeplink: .ArticleDetail(id: "123", voucherCode: "voucheeeer"))
                    }
                }
                .frame(maxWidth: .infinity, maxHeight: .infinity, alignment: .bottomTrailing)
        }
    }
}
