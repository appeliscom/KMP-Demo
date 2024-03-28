//
//  StateFlowAdapter.swift
//
//
//  Created by Jan Maloušek on 21.03.2024.
//

import Foundation
import Shared
import SwiftUI

@propertyWrapper
public final class StateFlowAdapter<T: AnyObject>: ObservableObject {

    private let stateFlow: SkieSwiftStateFlow<T>

    @Published public var wrappedValue: T

    private var publisher: Task<(), Never>?

    public init(_ value: SkieSwiftStateFlow<T>) {
        self.stateFlow = value
        self.wrappedValue = value.value

        self.publisher = Task { @MainActor in
            for await item in stateFlow {
                self.wrappedValue = item
            }
        }
    }

    deinit {
        if let publisher {
            publisher.cancel()
        }
    }
}

public extension ObservedObject {
    init<F>(_ stateFlow: SkieSwiftStateFlow<F>) where ObjectType == StateFlowAdapter<F> {
        self.init(wrappedValue: StateFlowAdapter(stateFlow))
    }
}
