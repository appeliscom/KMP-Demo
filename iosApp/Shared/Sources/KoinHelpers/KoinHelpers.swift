//
//  KoinHelpers.swift
//
//
//  Created by Jan Maloušek on 14.03.2024.
//

import Foundation
import Shared

public class SwiftKClass<T>: NSObject, KotlinKClass {
    public func isInstance(value: Any?) -> Bool { value is T }
    public var qualifiedName: String? { String(reflecting: T.self) }
    public var simpleName: String? { String(describing: T.self) }
}

public func KClass<T>(for type: T.Type) -> KotlinKClass {
    SwiftType(type: type, swiftClazz: SwiftKClass<T>()).getClazz()
}

public extension Koin_coreScope {
    func get<T>() -> T {
        // swiftlint:disable force_cast
        get(clazz: KClass(for: T.self), qualifier: nil, parameters: nil) as! T
        // swiftlint:enable force_cast
    }
}

public func inject<T>(
    qualifier: Koin_coreQualifier? = nil,
    parameters: (() -> Koin_coreParametersHolder)? = nil
) -> T {
    // swiftlint:disable force_cast
    DIHelpersKt.koinGet(clazz: KClass(for: T.self), qualifier: qualifier, parameters: parameters) as! T
    // swiftlint:enable force_cast
}
