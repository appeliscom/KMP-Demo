//
//  TestSwiftDependency.swift
//
//
//  Created by Jan Maloušek on 15.03.2024.
//

import Foundation
import Shared

public class TestSwiftDependency: NativeTestDependency {
    private var randomNumber: Int
    
    public init() {
        randomNumber = Int.random(in: 1...1000)
    }
    public func greet() -> String {
        "Greetings from swift test dependency\nseed: \(randomNumber)"
    }
}
