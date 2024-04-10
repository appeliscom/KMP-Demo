//
//  StackView.swift
//
//
//  Created by Jan Maloušek on 26.03.2024.
//

import Shared
import SwiftUI
import UIKit

public struct StackView<NAV_CHILD: AnyObject, Content: View>: View {
    @StateValue
    private var stackValue: ChildStack<AnyObject, NAV_CHILD>
    private var onBack: (_ toIndex: Int32) -> Void
    private var childContent: (NAV_CHILD) -> Content
    
    
    private var rootChild: NAV_CHILD { stackValue.items.first!.instance }

    private var stack: [Child<AnyObject, NAV_CHILD>] {
        // dropne prvni
        Array(stackValue.items.dropFirst())
    }

    public init(
        stackValue: StateValue<ChildStack<AnyObject, NAV_CHILD>>,
        onBack: @escaping (_: Int32) -> Void,
        @ViewBuilder childContent: @escaping (NAV_CHILD) -> Content
    ) {
        self._stackValue = stackValue
        self.onBack = onBack
        self.childContent = childContent
    }

    public var body: some View {
        NavigationStack(
            path: Binding(
                get: { stack },
                set: { updatedPath in onBack(Int32(updatedPath.count)) }
            )
        ) {
            childContent(rootChild)
                .navigationDestination(for: Child<AnyObject, NAV_CHILD>.self) {
                    childContent($0.instance!)
                }
        }
    }
}
