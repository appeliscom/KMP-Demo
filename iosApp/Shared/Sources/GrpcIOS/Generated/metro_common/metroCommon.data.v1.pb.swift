// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: metro_common/metroCommon.data.v1.proto
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

public enum Metro_Common_Data_V1_CompanySegment: SwiftProtobuf.Enum {
  public typealias RawValue = Int
  case unknown // = 0
  case horeca // = 1
  case sco // = 2
  case traders // = 3
  case UNRECOGNIZED(Int)

  public init() {
    self = .unknown
  }

  public init?(rawValue: Int) {
    switch rawValue {
    case 0: self = .unknown
    case 1: self = .horeca
    case 2: self = .sco
    case 3: self = .traders
    default: self = .UNRECOGNIZED(rawValue)
    }
  }

  public var rawValue: Int {
    switch self {
    case .unknown: return 0
    case .horeca: return 1
    case .sco: return 2
    case .traders: return 3
    case .UNRECOGNIZED(let i): return i
    }
  }

}

#if swift(>=4.2)

extension Metro_Common_Data_V1_CompanySegment: CaseIterable {
  // The compiler won't synthesize support with the UNRECOGNIZED case.
  public static let allCases: [Metro_Common_Data_V1_CompanySegment] = [
    .unknown,
    .horeca,
    .sco,
    .traders,
  ]
}

#endif  // swift(>=4.2)

public struct Metro_Common_Data_V1_CompanySegmentMapEntry {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var companySegment: Metro_Common_Data_V1_CompanySegment = .unknown

  public var count: Int64 = 0

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}
}

public struct Metro_Common_Data_V1_CardholderId {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var custNo: String = String()

  public var storeNo: String = String()

  public var cardholderNo: String = String()

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}
}

#if swift(>=5.5) && canImport(_Concurrency)
extension Metro_Common_Data_V1_CompanySegment: @unchecked Sendable {}
extension Metro_Common_Data_V1_CompanySegmentMapEntry: @unchecked Sendable {}
extension Metro_Common_Data_V1_CardholderId: @unchecked Sendable {}
#endif  // swift(>=5.5) && canImport(_Concurrency)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "metro.common.data.v1"

extension Metro_Common_Data_V1_CompanySegment: SwiftProtobuf._ProtoNameProviding {
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    0: .same(proto: "UNKNOWN"),
    1: .same(proto: "HORECA"),
    2: .same(proto: "SCO"),
    3: .same(proto: "TRADERS"),
  ]
}

extension Metro_Common_Data_V1_CompanySegmentMapEntry: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".CompanySegmentMapEntry"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .standard(proto: "company_segment"),
    2: .same(proto: "count"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularEnumField(value: &self.companySegment) }()
      case 2: try { try decoder.decodeSingularInt64Field(value: &self.count) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if self.companySegment != .unknown {
      try visitor.visitSingularEnumField(value: self.companySegment, fieldNumber: 1)
    }
    if self.count != 0 {
      try visitor.visitSingularInt64Field(value: self.count, fieldNumber: 2)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Common_Data_V1_CompanySegmentMapEntry, rhs: Metro_Common_Data_V1_CompanySegmentMapEntry) -> Bool {
    if lhs.companySegment != rhs.companySegment {return false}
    if lhs.count != rhs.count {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Common_Data_V1_CardholderId: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".CardholderId"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "custNo"),
    2: .same(proto: "storeNo"),
    3: .same(proto: "cardholderNo"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularStringField(value: &self.custNo) }()
      case 2: try { try decoder.decodeSingularStringField(value: &self.storeNo) }()
      case 3: try { try decoder.decodeSingularStringField(value: &self.cardholderNo) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.custNo.isEmpty {
      try visitor.visitSingularStringField(value: self.custNo, fieldNumber: 1)
    }
    if !self.storeNo.isEmpty {
      try visitor.visitSingularStringField(value: self.storeNo, fieldNumber: 2)
    }
    if !self.cardholderNo.isEmpty {
      try visitor.visitSingularStringField(value: self.cardholderNo, fieldNumber: 3)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Common_Data_V1_CardholderId, rhs: Metro_Common_Data_V1_CardholderId) -> Bool {
    if lhs.custNo != rhs.custNo {return false}
    if lhs.storeNo != rhs.storeNo {return false}
    if lhs.cardholderNo != rhs.cardholderNo {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}
