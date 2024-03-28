//
//  ComponentHolder.swift
//
//
//  Created by Jan Maloušek on 20.03.2024.
//

import Shared

/**
 This class is responsible for managing a root Decompose component at the application root.
 */

public final class ComponentHolder<T> {
    public let lifecycle: LifecycleRegistry
    public let component: T

    public init(factory: (ComponentContext) -> T) {
        let lifecycle = LifecycleRegistryKt.LifecycleRegistry()
        let component = factory(DefaultComponentContext(lifecycle: lifecycle))
        self.lifecycle = lifecycle
        self.component = component

        LifecycleRegistryExtKt.create(lifecycle)
    }

    deinit {
        LifecycleRegistryExtKt.destroy(lifecycle)
    }
}

