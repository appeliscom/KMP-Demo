//
//  Theme.swift
//
//
//  Created by Jan Maloušek on 12.06.2024.
//

import Foundation
import Shared
import SwiftUI
import SwiftUICore

public class Theme {
    public init(){}
    
    func color(_ type: ThemeColor) -> SwiftUI.Color {
        switch type {
        case .secondary:
            Color(\.secondary)
        case .secondaryVariant:
            Color(\.secondaryVariant)
        case .onSecondary:
            Color(\.onSecondary)
        case .background:
            Color(\.appBackground)
        case .onBackgroundH:
            Color(\.onBackgroundH)
        case .onBackgroundP:
            Color(\.onBackgroundP)
        case .surface:
            Color(\.surface)
        case .onSurfaceH:
            Color(\.onSurfaceH)
        case .onSurfaceP:
            Color(\.onSurfaceP)
        case .dividerColor:
            Color(\.divider)
        case .hintColor:
            Color(\.hint)
        case .error:
            Color(\.error)
        case .badge:
            Color(\.badge)
        case .onBadge:
            Color(\.surface)
        case .onSpecial:
            Color(\.onSpecial)
        case .special1:
            Color(\.special1)
        case .special2:
            Color(\.special2)
        case .special3:
            Color(\.special3)
        case .special4:
            Color(\.special4)
        case .special3Container:
            Color(\.special3Container)
        case .errorContainer:
            Color(\.errorContainer)
        }
    }

    func font(_ type: ThemeFont) -> Font {
        switch type {
        case .displayLarge:
            return Font(R.fonts().cametro_black.uiFont(withSize: 57))
        case .displayMedium:
            return Font(R.fonts().cametro_regular.uiFont(withSize: 45))
        case .displaySmall:
            return Font(R.fonts().cametro_regular.uiFont(withSize: 36))
        case .headlineLarge:
            return Font(R.fonts().cametro_regular.uiFont(withSize: 32))
        case .headlineMedium:
            return Font(R.fonts().cametro_regular.uiFont(withSize: 28))
        case .headlineSmall:
            return Font(R.fonts().cametro_regular.uiFont(withSize: 24))
        case .titleLarge:
            return Font(R.fonts().cametro_bold.uiFont(withSize: 22))
        case .titleMedium:
            return Font(R.fonts().cametro_bold.uiFont(withSize: 16))
        case .titleSmall:
            return Font(R.fonts().cametro_bold.uiFont(withSize: 14))
        case .labelLarge:
            return Font(R.fonts().cametro_bold.uiFont(withSize: 14))
        case .labelMedium:
            return Font(R.fonts().cametro_bold.uiFont(withSize: 12))
        case .labelSmall:
            return Font(R.fonts().cametro_bold.uiFont(withSize: 11))
        case .bodyLarge:
            return Font(R.fonts().cametro_regular.uiFont(withSize: 16))
        case .bodyMedium:
            return Font(R.fonts().cametro_regular.uiFont(withSize: 14))
        case .bodySmall:
            return Font(R.fonts().cametro_regular.uiFont(withSize: 12))
        case .button:
            return Font(R.fonts().cametro_bold.uiFont(withSize: 14))
        }
    }
    
    func shadow(_ shadow: ThemeShadow) -> ShadowProperties {
        switch shadow {
        case .shadow100:
            return ShadowProperties(color: Color.black.opacity(0.1), radius: 6, y: 6)
        case .shadow200:
            return ShadowProperties(color: Color.black.opacity(0.1), radius: 12, y: 12)
        case .shadow300:
            return ShadowProperties(color: Color.black.opacity(0.1), radius: 24, y: 24)
        case .shadow400:
            return ShadowProperties(color: Color.black.opacity(0.1), radius: 48, y: 48)
        }
    }
}

struct ThemeKey: EnvironmentKey {
    static let defaultValue: Theme = Theme()
}

extension EnvironmentValues {
    var theme: Theme {
        get { self[ThemeKey.self] }
        set { self[ThemeKey.self] = newValue }
    }
}

public enum ThemeColor {
    case secondary, secondaryVariant, onSecondary
    case background, onBackgroundH, onBackgroundP
    case surface, onSurfaceH, onSurfaceP
    case dividerColor, hintColor
    case error, badge, onBadge, onSpecial
    case special1, special2, special3, special4
    case special3Container, errorContainer
}

public enum ThemeFont {
    case displayLarge
    case displayMedium
    case displaySmall

    case headlineLarge
    case headlineMedium
    case headlineSmall

    case titleLarge
    case titleMedium
    case titleSmall

    case labelLarge
    case labelMedium
    case labelSmall

    case bodyLarge
    case bodyMedium
    case bodySmall

    case button
}

public enum ThemeShadow {
    case shadow100
    case shadow200
    case shadow300
    case shadow400
}

public enum Spacing {
    public static let pt2 = CGFloat(2)
    public static let pt4 = CGFloat(4)
    public static let pt8 = CGFloat(8)
    public static let pt12 = CGFloat(12)
    public static let pt16 = CGFloat(16)
    public static let pt24 = CGFloat(24)
    public static let pt32 = CGFloat(32)
}

public enum CornerRadius {
    public static let pt2 = CGFloat(2)
    public static let pt4 = CGFloat(4)
    public static let pt8 = CGFloat(8)
    public static let pt12 = CGFloat(12)
    public static let pt16 = CGFloat(16)
    public static let pt24 = CGFloat(24)
    public static let pt28 = CGFloat(28)
    public static let pt32 = CGFloat(32)
    public static let pt40 = CGFloat(40)
}

public enum IconSize {
    public static let pt16 = 16.cgSize
    public static let pt20 = 20.cgSize
    public static let pt24 = 24.cgSize
    public static let pt32 = 32.cgSize
    public static let pt40 = 40.cgSize
    public static let pt64 = 64.cgSize
    public static let pt88 = 88.cgSize
}
