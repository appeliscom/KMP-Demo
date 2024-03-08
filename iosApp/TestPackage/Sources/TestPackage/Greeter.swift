// The Swift Programming Language
// https://docs.swift.org/swift-book

import Shared

public class Greeter {
    public init(){
        Greeting().greetTwo()
    }
    
    public func getGreetings() -> String {
        return "Greetings from SPM Package \(Greeting().greet()) \(Test().sayHello())"
    }
}
