//
//  File.swift
//  
//
//  Created by Jan Maloušek on 05.05.2024.
//

import SwiftUI

public struct OnAppearViewModifier: ViewModifier {
    // MARK: - Instance properties
    
    @State
    private var isFirstAppear = true
    
    private var onFirst: (() -> Void)?
    private var onNext: (() -> Void)?
    
    // MARK: - Lifecycle
    
    public init(
        onFirst: (() -> Void)? = nil,
        onNext: (() -> Void)? = nil
    ) {
        self.onFirst = onFirst
        self.onNext = onNext
    }
    
    // MARK: - ViewModifier
    
    public func body(content: Content) -> some View {
        content.onAppear {
            if isFirstAppear {
                isFirstAppear = false
                onFirst?()
            } else {
                onNext?()
            }
        }
    }
}

extension View {
    public func onAppear(
        first onFirst: (() -> Void)? = nil,
        next onNext: (() -> Void)? = nil
    ) -> some View {
        modifier(
            OnAppearViewModifier(onFirst: onFirst, onNext: onNext)
        )
    }
}
