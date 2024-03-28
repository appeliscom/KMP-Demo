//
//  TestSwiftDependency.swift
//
//
//  Created by Jan Maloušek on 15.03.2024.
//

import Foundation
import Shared

public class TestSwiftDependency: NativeTestDependency {
    private let greetings: Greeting // dependency in shared module
    private var randomNumber: Int
    
    public init(greetings: Greeting) {
        self.greetings = greetings
        randomNumber = Int.random(in: 1...1000)
    }
    public func greet() -> String {
        "\(greetings.greet()) from swift test dependency\nseed: \(randomNumber)"
    }
}
