//
//  StringResource+Extensions.swift
//
//
//  Created by Jan Maloušek on 13.06.2024.
//

import Shared

public extension StringResource {
    var value: String {
        self.desc().localized()
    }
}
