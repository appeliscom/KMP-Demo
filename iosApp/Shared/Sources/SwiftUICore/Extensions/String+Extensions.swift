//
//  String+Extensions.swift
//
//
//  Created by Jan Maloušek on 04.06.2024.
//

import Foundation

public extension String {
    var url: URL? { URL(string: self) }
}
