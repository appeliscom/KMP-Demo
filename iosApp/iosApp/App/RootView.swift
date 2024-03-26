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

struct RootView: View {
    @Environment(\.scenePhase) var scenePhase: ScenePhase
    
    @State private var componentHolder = ComponentHolder { componentContext in
        RootNavigationFactory().create(componentContext: componentContext)
    }
    
    var body: some View {
        RootNavigationView(componentHolder.component)
            .onChange(of: scenePhase) { newPhase in
                switch newPhase {
                case .background:
                    LifecycleRegistryExtKt.stop(componentHolder.lifecycle)
                case .inactive:
                    LifecycleRegistryExtKt.pause(componentHolder.lifecycle)
                case .active:
                    LifecycleRegistryExtKt.resume(componentHolder.lifecycle)
                @unknown default:
                    break
                }
            }
    }
}

struct RootNavigationView: View {
    @StateValue
    private var slot: ChildSlot<RootDestination, RootEntry>
    
    init(_ component: RootNavigation) {
        self._slot = StateValue(component.slot)
    }
    
    var body: some View {
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

struct AppStartupView: View {
    @StateValue
    private var viewState: AppStartupViewState
    
    private let actions: AppStartupScreenActions
    
    public init(screen: AppStartupScreen) {
        self._viewState = StateValue(screen.viewState)
        self.actions = screen.actions
    }
    
    var body: some View {
        VStack {
            Text("AppStartupView")
                .font(.title)
            
            Spacer()
            
            Button(
                action: {
                    actions.finishStartup()
                },
                label: {
                    Text("continue to app")
                }
            )
            
            Spacer()
        }
    }
}
