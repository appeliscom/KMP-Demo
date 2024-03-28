//
//  DecomposeNavigationStack.swift
//
//
//  Created by Jan Maloušek on 22.03.2024.
//

import SwiftUI
import Shared

public struct DecomposeNavigationStack<
    Child: ChildCreated<Destination, Entry>,
    Destination: AnyObject,
    Entry: AnyObject,
    Content: View
>: View {
    @ObservedObject
    @StateFlowAdapter
    private var kotlinStack: ChildStack<Destination, Entry>
    
    private let setPath: ([Child]) -> Void
    @ViewBuilder private let content: (Entry) -> Content

    private var swiftStack: [Child] {
        guard let swiftStack = kotlinStack.items as? [Child] else {
            fatalError("Kotlin navigation stack can't be converted to Swift stack.")
        }
        return swiftStack
    }

    private var path: Binding<Array<Child>.SubSequence> {
        .init {
            swiftStack.dropFirst()
        } set: {
            guard let rootItem = swiftStack.first else {
                fatalError("Navigation stack is inconsistent. It should have at least one item but is empty.")
            }
            setPath([rootItem] + $0)
        }
    }

    public init(
        kotlinStack: SkieSwiftStateFlow<ChildStack<Destination, Entry>>,
        setPath: @escaping ([Child]) -> Void,
        @ViewBuilder content: @escaping (Entry) -> Content
    ) {
        self._kotlinStack = .init(kotlinStack)
        self.setPath = setPath
        self.content = content
    }

    public var body: some View {
        NavigationStack(path: path) {
            if let firstEntry = swiftStack.first?.instance {
                content(firstEntry)
                    .navigationDestination(for: Child.self) { child in
                        content(child.instance)
                    }
            }
        }
    }
}

