//
//  AppStartupView.swift
//
//
//  Created by Jan Maloušek on 27.03.2024.
//

import Shared
import SwiftUI
import SwiftUICore

struct AppStartupView: View {
    @StateValue
    private var viewState: AppStartupViewState
    private var router: AppStartupRouter = inject()
    
    public init(component: AppStartupComponent) {
        self._viewState = StateValue(component.viewState)
    }
    
    var body: some View {
        VStack {
            Text("AppStartupView")
                .font(.title)
            
            Spacer()
            
            Button(
                action: {
                    router.navigateTo(route: .MainAppFlow())
                },
                label: {
                    Text("continue to app")
                }
            )
            
            Spacer()
        }
    }
}

