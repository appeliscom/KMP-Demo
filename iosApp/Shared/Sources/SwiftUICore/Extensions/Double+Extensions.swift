//
//  Double+Extensions.swift
//  Appelis
//
//  Created by Matúš Selecký on 30/11/2020.
//  Copyright © 2020 Vasapka.sk. All rights reserved.
//

import UIKit

// swiftlint:disable no_extension_access_modifier
public extension Double {
    // swiftlint:enable no_extension_access_modifier
    
    var cgFloat: CGFloat { CGFloat(self) }
    var cgSize: CGSize { CGSize(width: self, height: self) }
    
    func formatPrice(currencySymbol: String, fractionDigits: UInt = 2) -> String {
        String.localizedStringWithFormat("%.\(fractionDigits)f %@", self, currencySymbol)
    }
}
