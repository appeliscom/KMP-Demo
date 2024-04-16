//
//  StackView.swift
//
//
//  Created by Jan Maloušek on 26.03.2024.
//

import Shared
import SwiftUI
import UIKit

public struct SheetStackView<NAV_CHILD: StackNavigationChild, Content: View>: View {
    // Represents the whole stack in decompose navigation component
    private let stack: SkieSwiftStateFlow<ChildStack<AnyObject, NAV_CHILD>>

    // represents portion of the stack displayed by this layer of SheetStackView (without the root)
    @State private var substack: [Child<AnyObject, NAV_CHILD>] = []
    @State private var nextSheetRootIndex: Int?

    /*
     Poping views can come from SwiftUI (NavigationStack pop, closing sheet),
     so we need to also pop stack childs in decompose navigation component via this callback
     */
    private let popStackToIndex: (Int) -> Void

    // If this is a "base" of navigation (not in sheet) the root index is 0
    // otherwise it marks index of sheetRoot we handle in this layer
    private let rootIndex: Int
    private var childViewBuilder: (NAV_CHILD) -> Content

    public init(
        stack: SkieSwiftStateFlow<ChildStack<AnyObject, NAV_CHILD>>,
        rootIndex: Int = 0,
        popStackToIndex: @escaping (Int) -> Void,
        @ViewBuilder childViewBuilder: @escaping (NAV_CHILD) -> Content
    ) {
        self.stack = stack
        self.rootIndex = rootIndex
        self.childViewBuilder = childViewBuilder
        self.popStackToIndex = popStackToIndex
    }

    public var body: some View {
        NavigationStack(path: $substack) {
            ZStack{
                if let rootChild = stack.value.items.suffix(from: rootIndex).first?.instance {
                    childViewBuilder(rootChild)
                        .navigationDestination(for: Child<AnyObject, NAV_CHILD>.self) {
                            childViewBuilder($0.instance!)
                        }
                }
            }
        }
        .sheet(isPresented: .init(
            get: { nextSheetRootIndex != nil },
            set: { _ in
                // this closure is called when sheet is closed, so we need to pop decompose stack to appropriate child
                guard nextSheetRootIndex != nil else { return }
                popStackToIndex(rootIndex + substack.endIndex)
            }
        )) {
            if let nextSheetRootIndex {
                SheetStackView(
                    stack: stack,
                    rootIndex: nextSheetRootIndex,
                    popStackToIndex: popStackToIndex,
                    childViewBuilder: childViewBuilder
                )
            } else {
                Text("Navigation Error")
            }
        }
        .onChange(of: substack) { substack in
            popStackToIndex(substack.endIndex + rootIndex)
        }
        .task {
            /*
             Current substack displayed in Navigation Component (it has the role of path).
             First we remove all children before rootIndex (if this is base of navigation rootIndex is 0, if this is sheet rootIndex marks
             index of rootChild for this sheet)
             Then we drop rootChild of this navigation layer (layer of sheet)
             And finally we drop all children onward (and including) from the next child marked as "new sheet root" because they will be displayed in the next layer
             )
             */
            for await stackValue in stack {
                // When deeplink closes sheet, stackValue.items.count can be lower than rootIndex (iteration is called on right now closing sheet), so ignore it
                guard stackValue.items.count >= rootIndex else { return }
                
                substack = stackValue
                    .items
                    .suffix(from: rootIndex)
                    .dropFirst()
                    .prefix(while: { !$0.instance.isNewSheetRoot() })

                nextSheetRootIndex = stackValue
                    .items
                    .suffix(from: rootIndex)
                    .dropFirst()
                    .firstIndex(where: { $0.instance.isNewSheetRoot() })
            }
        }
    }
}
