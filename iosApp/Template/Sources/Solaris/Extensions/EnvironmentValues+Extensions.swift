//
//  EnvironmentValues+Extensions.swift
//
//
//  Created by Jan Maloušek on 13.06.2024.
//

import Foundation
import SwiftUICore
import Shared
import SwiftUI


extension EnvironmentValues {
    var theme: Theme {
        get { self[ThemeKey.self] }
        set { self[ThemeKey.self] = newValue }
    }
    
    var translations: R.strings {
        get { self[RStringKey.self] }
        set { self[RStringKey.self] = newValue }
    }
}

struct ThemeKey: EnvironmentKey {
    static let defaultValue: Theme = Theme()
}

struct RStringKey: EnvironmentKey {
    static let defaultValue: R.strings = R.strings()
}


