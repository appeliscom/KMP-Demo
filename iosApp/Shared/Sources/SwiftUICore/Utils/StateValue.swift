//
//  StateValue.swift
//
//
//  Created by Jan Maloušek on 26.03.2024.
//

import SwiftUI
import Shared

@propertyWrapper public struct StateValue<T : AnyObject>: DynamicProperty {
    @ObservedObject
    private var obj: ObservableValue<T>

    public var wrappedValue: T { obj.value }

    public init(_ value: Value<T>) {
        obj = ObservableValue(value)
    }
}

public class ObservableValue<T : AnyObject> : ObservableObject {
    @Published
    var value: T

    private var cancellation: Cancellation?
    
    init(_ value: Value<T>) {
        self.value = value.value
        self.cancellation = value.observe { [weak self] value in self?.value = value }
    }

    deinit {
        cancellation?.cancel()
    }
}
