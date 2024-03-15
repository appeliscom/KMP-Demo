// The Swift Programming Language
// https://docs.swift.org/swift-book

import Shared
import SwiftUI
import KoinHelpers

public struct ArticleView: View {
    let greeting: Greeting = inject()
    
    public init() {
        
    }
    
    public var body: some View {
        Text(greeting.greet())
    }
}
