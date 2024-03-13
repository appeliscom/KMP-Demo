// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: appelis/address.proto
//
// For information on using the generated types, please see the documentation:
//   https://github.com/apple/swift-protobuf/

import Foundation
import SwiftProtobuf

// If the compiler emits an error on this type, it is because this file
// was generated by a version of the `protoc` Swift plug-in that is
// incompatible with the version of SwiftProtobuf to which you are linking.
// Please ensure that you are building against the same version of the API
// that was used to generate this file.
fileprivate struct _GeneratedWithProtocGenSwiftVersion: SwiftProtobuf.ProtobufAPIVersionCheck {
  struct _2: SwiftProtobuf.ProtobufAPIVersion_2 {}
  typealias Version = _2
}

public struct Appelis_Address {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var address: String = String()

  public var address2: String = String()

  public var city: String = String()

  public var zipCode: String = String()

  public var country: String = String()

  public var location: Appelis_Location {
    get {return _location ?? Appelis_Location()}
    set {_location = newValue}
  }
  /// Returns true if `location` has been explicitly set.
  public var hasLocation: Bool {return self._location != nil}
  /// Clears the value of `location`. Subsequent reads from it will return its default value.
  public mutating func clearLocation() {self._location = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _location: Appelis_Location? = nil
}

#if swift(>=5.5) && canImport(_Concurrency)
extension Appelis_Address: @unchecked Sendable {}
#endif  // swift(>=5.5) && canImport(_Concurrency)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "appelis"

extension Appelis_Address: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".Address"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "address"),
    2: .same(proto: "address2"),
    3: .same(proto: "city"),
    4: .same(proto: "zipCode"),
    5: .same(proto: "country"),
    6: .same(proto: "location"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularStringField(value: &self.address) }()
      case 2: try { try decoder.decodeSingularStringField(value: &self.address2) }()
      case 3: try { try decoder.decodeSingularStringField(value: &self.city) }()
      case 4: try { try decoder.decodeSingularStringField(value: &self.zipCode) }()
      case 5: try { try decoder.decodeSingularStringField(value: &self.country) }()
      case 6: try { try decoder.decodeSingularMessageField(value: &self._location) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    // The use of inline closures is to circumvent an issue where the compiler
    // allocates stack space for every if/case branch local when no optimizations
    // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
    // https://github.com/apple/swift-protobuf/issues/1182
    if !self.address.isEmpty {
      try visitor.visitSingularStringField(value: self.address, fieldNumber: 1)
    }
    if !self.address2.isEmpty {
      try visitor.visitSingularStringField(value: self.address2, fieldNumber: 2)
    }
    if !self.city.isEmpty {
      try visitor.visitSingularStringField(value: self.city, fieldNumber: 3)
    }
    if !self.zipCode.isEmpty {
      try visitor.visitSingularStringField(value: self.zipCode, fieldNumber: 4)
    }
    if !self.country.isEmpty {
      try visitor.visitSingularStringField(value: self.country, fieldNumber: 5)
    }
    try { if let v = self._location {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 6)
    } }()
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Appelis_Address, rhs: Appelis_Address) -> Bool {
    if lhs.address != rhs.address {return false}
    if lhs.address2 != rhs.address2 {return false}
    if lhs.city != rhs.city {return false}
    if lhs.zipCode != rhs.zipCode {return false}
    if lhs.country != rhs.country {return false}
    if lhs._location != rhs._location {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}