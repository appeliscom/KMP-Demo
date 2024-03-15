// The Swift Programming Language
// https://docs.swift.org/swift-book

import Shared
import SwiftUI
import KoinHelpers

public struct ArticleView: View {
    let greeting: NativeTestDependency = inject()
    let greeting2: NativeTestDependency = inject()
    
    public init() {
        
    }
    
    public var body: some View {
        VStack{
            Text(greeting.greet())
            Text(greeting2.greet())
        }
        
    }
}
