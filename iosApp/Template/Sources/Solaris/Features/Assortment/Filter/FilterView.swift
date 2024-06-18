//
//  FilterView.swift
//
//
//  Created by Jan Maloušek on 17.06.2024.
//

import Shared
import SwiftUI
import SwiftUICore

struct FilterView: View {
    @Environment(\.theme) private var theme
    private let viewModel: FilterComponentViewModel
    private let component: FilterComponent
    
    var router: FilterRouter = inject()
    
    public init(component: FilterComponent) {
        self.component = component
        self.viewModel = component.viewModel
    }
    
    var body: some View {
        VStack{
            Spacer()
            
            Text("Mock filter:\n\t- priceFrom:\t1000\n\t- priceTo:\t2000")
                .font(theme.font(.bodyLarge))
                .foregroundStyle(theme.color(.onSurfaceH))
            
            Spacer()
            
            layoutButton(text: "Set mock filter") {
                viewModel.setFilter(priceFrom: 1000, priceTo: 2000)
            }
            
            layoutButton(text: "Reset filter") {
                viewModel.clearFilter()
            }
        }
        .padding(Spacing.pt16)
        .task {
            for await uiEvent in viewModel.uiEvents {
                handleUIEvent(event: uiEvent)
            }
        }
    }
    
    private func layoutButton(
        text: String,
        action: @escaping () -> Void
    ) -> some View {
        Button(action: action, label: {
            HStack {
                Text(text)
                    .font(theme.font(.button))
                    .foregroundStyle(theme.color(.surface))
            }
            .frame(maxWidth: .infinity)
            .frame(height: 54)
            .background(
                RoundedRectangle(cornerRadius: 28.0)
                    .fill(Color(\.secondary))
            )
        })
    }
    
    private func handleUIEvent(event: FilterUIEvent) {
        switch onEnum(of: event) {
        case .closeFilter(_):
            router.navigateTo(route: .CloseFilter())
        }
    }
}
