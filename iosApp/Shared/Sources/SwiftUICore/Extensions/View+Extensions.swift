//
//  View+Extensions.swift
//
//
//  Created by Jan Maloušek on 11.06.2024.
//

import Foundation
import SwiftUI

// MARK: - Sizing

public extension View {
    func frame(
        size: CGSize,
        alignment: Alignment = .center
    ) -> some View {
        frame(
            width: CGFloat(abs(size.width)),
            height: CGFloat(abs(size.height)),
            alignment: alignment
        )
    }

    func fixedFrame(
        size: CGSize,
        alignment: Alignment = .center
    ) -> some View {
        frame(size: size, alignment: alignment).fixedSize()
    }

    func fixedFrame(
        width: CGFloat? = nil,
        height: CGFloat? = nil,
        alignment: Alignment = .center
    ) -> some View {
        frame(
            width: width,
            height: height,
            alignment: alignment
        )
        .fixedSize(horizontal: width != nil, vertical: height != nil)
    }
}
