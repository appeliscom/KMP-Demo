//
//  AsyncStream+Ext.swift
//
//
//  Created by Jan Maloušek on 08.05.2024.
//

import Foundation
import Shared

public extension AsyncStream {
    static func fromSkieSwiftStateFlow<Input, Output>(
        skieStateFlow: SkieSwiftStateFlow<Input>,
        mapFunction: @escaping (Input) -> Output
    ) -> AsyncStream<Output> {
        AsyncStream<Output> { continuation in
            Task {
                for await item in skieStateFlow {
                    continuation.yield(mapFunction(item))
                }
                continuation.finish()
            }
        }
    }
    
    func fromSkieSwiftStateFlow<T>(skieStateFlow: SkieSwiftStateFlow<T>) -> AsyncStream<T> {
        AsyncStream<T> { continuation in
            Task {
                for await item in skieStateFlow {
                    continuation.yield(item)
                }
                continuation.finish()
            }
        }
    }
}
