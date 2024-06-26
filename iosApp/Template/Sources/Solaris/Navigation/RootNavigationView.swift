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
    private var slotStateFlow: SkieSwiftStateFlow<ChildSlot<RootSlotChildConfig, RootSlotNavigationChild>>
    
    @State
    private var slot: ChildSlot<RootSlotChildConfig, RootSlotNavigationChild>?
    
    private let component: RootNavigationComponent
    
    public init(_ component: RootNavigationComponent) {
        self.component = component
        self.slotStateFlow = component.slot
    }
    
    public var body: some View {
        ZStack {
            if let rootSlotNavigationChild = slot?.child?.instance {
                switch onEnum(of: rootSlotNavigationChild) {
                case let .appStartup(child):
                    AppStartupView(component: child.component)
                        .frame(maxWidth: .infinity, maxHeight: .infinity)
                        .overlay(
                            Circle()
                                .fill(.black)
                                .overlay(
                                    Text("deeplink")
                                        .foregroundColor(.white)
                                )
                                .frame(width: 80, height: 80)
                                .padding()
                                .onTapGesture {
                                    component.handleDeeplink(
                                        deeplink: .ArticleDetail(id: "428982", voucherCode: "voucheeeer")
                                    )
                                }
                                .frame(maxWidth: .infinity, maxHeight: .infinity, alignment: .bottomTrailing)
                        )
                case let .mainAppFlow(child):
                    MainFlowNavigationView(component: child.component)
                }
            }
        }
        .task {
            for await slot in slotStateFlow {
                self.slot = slot
            }
        }
    }
}
