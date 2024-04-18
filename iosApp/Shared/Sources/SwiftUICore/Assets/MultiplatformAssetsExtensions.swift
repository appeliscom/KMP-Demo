//
//  Image+Extensions.swift
//
//
//  Created by Jan Maloušek on 18.04.2024.
//

import SwiftUI
import Shared

public extension Image {
    init(resource: KeyPath<R.images, Shared.ImageResource>) {
        self.init(
            R.images()[keyPath: resource].assetImageName,
            bundle: R.images()[keyPath: resource].bundle
        )
    }
}

public extension SwiftUI.Color {
    init(_ resource: KeyPath<R.colors, Shared.ColorResource>) {
        self.init(uiColor: R.colors()[keyPath: resource].getUIColor())
    }
}
