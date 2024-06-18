//
//  ShadowProperties.swift
//
//
//  Created by Jan Maloušek on 12.06.2024.
//

import Foundation
import SwiftUI

public struct ShadowProperties: Equatable {
    public var color: Color
    public var radius: CGFloat
    public var x: CGFloat
    public var y: CGFloat
    
    public init(
        color: Color = Color(.sRGBLinear, white: 0, opacity: 0.33),
        radius: CGFloat,
        x: CGFloat = 0,
        y: CGFloat = 0
    ) {
        self.color = color
        self.radius = radius
        self.x = x
        self.y = y
    }
}
