// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: metro_assortment/assortment.cip.v1.proto
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

public struct Metro_Assortment_V1_ChangeCipPricesResponse {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var payload: Metro_Assortment_V1_ChangeCipPricesResponse.OneOf_Payload? = nil

  public var error: Appelis_Identity_Common_V1_TokenError {
    get {
      if case .error(let v)? = payload {return v}
      return .unknownTokenError
    }
    set {payload = .error(newValue)}
  }

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public enum OneOf_Payload: Equatable {
    case error(Appelis_Identity_Common_V1_TokenError)

  #if !swift(>=4.1)
    public static func ==(lhs: Metro_Assortment_V1_ChangeCipPricesResponse.OneOf_Payload, rhs: Metro_Assortment_V1_ChangeCipPricesResponse.OneOf_Payload) -> Bool {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch (lhs, rhs) {
      case (.error, .error): return {
        guard case .error(let l) = lhs, case .error(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      }
    }
  #endif
  }

  public init() {}
}

public struct Metro_Assortment_V1_DeleteCipPricesRequest {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var token: Appelis_Identity_Common_V1_Token {
    get {return _token ?? Appelis_Identity_Common_V1_Token()}
    set {_token = newValue}
  }
  /// Returns true if `token` has been explicitly set.
  public var hasToken: Bool {return self._token != nil}
  /// Clears the value of `token`. Subsequent reads from it will return its default value.
  public mutating func clearToken() {self._token = nil}

  public var data: [Appelis_ObjectId] = []

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _token: Appelis_Identity_Common_V1_Token? = nil
}

public struct Metro_Assortment_V1_CreateCipPricesRequest {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var token: Appelis_Identity_Common_V1_Token {
    get {return _token ?? Appelis_Identity_Common_V1_Token()}
    set {_token = newValue}
  }
  /// Returns true if `token` has been explicitly set.
  public var hasToken: Bool {return self._token != nil}
  /// Clears the value of `token`. Subsequent reads from it will return its default value.
  public mutating func clearToken() {self._token = nil}

  public var prices: [Metro_Assortment_V1_CipPriceData] = []

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _token: Appelis_Identity_Common_V1_Token? = nil
}

public struct Metro_Assortment_V1_CipPricesResponse {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var payload: Metro_Assortment_V1_CipPricesResponse.OneOf_Payload? = nil

  public var error: Appelis_Identity_Common_V1_TokenError {
    get {
      if case .error(let v)? = payload {return v}
      return .unknownTokenError
    }
    set {payload = .error(newValue)}
  }

  public var data: Metro_Assortment_V1_CipPrices {
    get {
      if case .data(let v)? = payload {return v}
      return Metro_Assortment_V1_CipPrices()
    }
    set {payload = .data(newValue)}
  }

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public enum OneOf_Payload: Equatable {
    case error(Appelis_Identity_Common_V1_TokenError)
    case data(Metro_Assortment_V1_CipPrices)

  #if !swift(>=4.1)
    public static func ==(lhs: Metro_Assortment_V1_CipPricesResponse.OneOf_Payload, rhs: Metro_Assortment_V1_CipPricesResponse.OneOf_Payload) -> Bool {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch (lhs, rhs) {
      case (.error, .error): return {
        guard case .error(let l) = lhs, case .error(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      case (.data, .data): return {
        guard case .data(let l) = lhs, case .data(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      default: return false
      }
    }
  #endif
  }

  public init() {}
}

public struct Metro_Assortment_V1_CipPrices {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var data: [Metro_Assortment_V1_CipPrice] = []

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}
}

public struct Metro_Assortment_V1_CipPriceData {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var unitTax: Double = 0

  public var unit: Double = 0

  public var munitTax: Double = 0

  public var munit: Double = 0

  public var packTax: Double = 0

  public var pack: Double = 0

  public var idArticle: String = String()

  public var idCompany: Int64 = 0

  public var validityFrom: SwiftProtobuf.Google_Protobuf_Timestamp {
    get {return _validityFrom ?? SwiftProtobuf.Google_Protobuf_Timestamp()}
    set {_validityFrom = newValue}
  }
  /// Returns true if `validityFrom` has been explicitly set.
  public var hasValidityFrom: Bool {return self._validityFrom != nil}
  /// Clears the value of `validityFrom`. Subsequent reads from it will return its default value.
  public mutating func clearValidityFrom() {self._validityFrom = nil}

  public var validityTo: SwiftProtobuf.Google_Protobuf_Timestamp {
    get {return _validityTo ?? SwiftProtobuf.Google_Protobuf_Timestamp()}
    set {_validityTo = newValue}
  }
  /// Returns true if `validityTo` has been explicitly set.
  public var hasValidityTo: Bool {return self._validityTo != nil}
  /// Clears the value of `validityTo`. Subsequent reads from it will return its default value.
  public mutating func clearValidityTo() {self._validityTo = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _validityFrom: SwiftProtobuf.Google_Protobuf_Timestamp? = nil
  fileprivate var _validityTo: SwiftProtobuf.Google_Protobuf_Timestamp? = nil
}

public struct Metro_Assortment_V1_CipPrice {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  /// Id for deleting whole price.
  public var idPrice: Appelis_ObjectId {
    get {return _idPrice ?? Appelis_ObjectId()}
    set {_idPrice = newValue}
  }
  /// Returns true if `idPrice` has been explicitly set.
  public var hasIDPrice: Bool {return self._idPrice != nil}
  /// Clears the value of `idPrice`. Subsequent reads from it will return its default value.
  public mutating func clearIDPrice() {self._idPrice = nil}

  public var data: Metro_Assortment_V1_CipPriceData {
    get {return _data ?? Metro_Assortment_V1_CipPriceData()}
    set {_data = newValue}
  }
  /// Returns true if `data` has been explicitly set.
  public var hasData: Bool {return self._data != nil}
  /// Clears the value of `data`. Subsequent reads from it will return its default value.
  public mutating func clearData() {self._data = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _idPrice: Appelis_ObjectId? = nil
  fileprivate var _data: Metro_Assortment_V1_CipPriceData? = nil
}

#if swift(>=5.5) && canImport(_Concurrency)
extension Metro_Assortment_V1_ChangeCipPricesResponse: @unchecked Sendable {}
extension Metro_Assortment_V1_ChangeCipPricesResponse.OneOf_Payload: @unchecked Sendable {}
extension Metro_Assortment_V1_DeleteCipPricesRequest: @unchecked Sendable {}
extension Metro_Assortment_V1_CreateCipPricesRequest: @unchecked Sendable {}
extension Metro_Assortment_V1_CipPricesResponse: @unchecked Sendable {}
extension Metro_Assortment_V1_CipPricesResponse.OneOf_Payload: @unchecked Sendable {}
extension Metro_Assortment_V1_CipPrices: @unchecked Sendable {}
extension Metro_Assortment_V1_CipPriceData: @unchecked Sendable {}
extension Metro_Assortment_V1_CipPrice: @unchecked Sendable {}
#endif  // swift(>=5.5) && canImport(_Concurrency)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "metro.assortment.v1"

extension Metro_Assortment_V1_ChangeCipPricesResponse: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".ChangeCipPricesResponse"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "error"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try {
        var v: Appelis_Identity_Common_V1_TokenError?
        try decoder.decodeSingularEnumField(value: &v)
        if let v = v {
          if self.payload != nil {try decoder.handleConflictingOneOf()}
          self.payload = .error(v)
        }
      }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    // The use of inline closures is to circumvent an issue where the compiler
    // allocates stack space for every if/case branch local when no optimizations
    // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
    // https://github.com/apple/swift-protobuf/issues/1182
    try { if case .error(let v)? = self.payload {
      try visitor.visitSingularEnumField(value: v, fieldNumber: 1)
    } }()
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Assortment_V1_ChangeCipPricesResponse, rhs: Metro_Assortment_V1_ChangeCipPricesResponse) -> Bool {
    if lhs.payload != rhs.payload {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Assortment_V1_DeleteCipPricesRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".DeleteCipPricesRequest"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "token"),
    2: .same(proto: "data"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularMessageField(value: &self._token) }()
      case 2: try { try decoder.decodeRepeatedMessageField(value: &self.data) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    // The use of inline closures is to circumvent an issue where the compiler
    // allocates stack space for every if/case branch local when no optimizations
    // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
    // https://github.com/apple/swift-protobuf/issues/1182
    try { if let v = self._token {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 1)
    } }()
    if !self.data.isEmpty {
      try visitor.visitRepeatedMessageField(value: self.data, fieldNumber: 2)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Assortment_V1_DeleteCipPricesRequest, rhs: Metro_Assortment_V1_DeleteCipPricesRequest) -> Bool {
    if lhs._token != rhs._token {return false}
    if lhs.data != rhs.data {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Assortment_V1_CreateCipPricesRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".CreateCipPricesRequest"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "token"),
    2: .same(proto: "prices"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularMessageField(value: &self._token) }()
      case 2: try { try decoder.decodeRepeatedMessageField(value: &self.prices) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    // The use of inline closures is to circumvent an issue where the compiler
    // allocates stack space for every if/case branch local when no optimizations
    // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
    // https://github.com/apple/swift-protobuf/issues/1182
    try { if let v = self._token {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 1)
    } }()
    if !self.prices.isEmpty {
      try visitor.visitRepeatedMessageField(value: self.prices, fieldNumber: 2)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Assortment_V1_CreateCipPricesRequest, rhs: Metro_Assortment_V1_CreateCipPricesRequest) -> Bool {
    if lhs._token != rhs._token {return false}
    if lhs.prices != rhs.prices {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Assortment_V1_CipPricesResponse: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".CipPricesResponse"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "error"),
    2: .same(proto: "data"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try {
        var v: Appelis_Identity_Common_V1_TokenError?
        try decoder.decodeSingularEnumField(value: &v)
        if let v = v {
          if self.payload != nil {try decoder.handleConflictingOneOf()}
          self.payload = .error(v)
        }
      }()
      case 2: try {
        var v: Metro_Assortment_V1_CipPrices?
        var hadOneofValue = false
        if let current = self.payload {
          hadOneofValue = true
          if case .data(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.payload = .data(v)
        }
      }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    // The use of inline closures is to circumvent an issue where the compiler
    // allocates stack space for every if/case branch local when no optimizations
    // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
    // https://github.com/apple/swift-protobuf/issues/1182
    switch self.payload {
    case .error?: try {
      guard case .error(let v)? = self.payload else { preconditionFailure() }
      try visitor.visitSingularEnumField(value: v, fieldNumber: 1)
    }()
    case .data?: try {
      guard case .data(let v)? = self.payload else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 2)
    }()
    case nil: break
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Assortment_V1_CipPricesResponse, rhs: Metro_Assortment_V1_CipPricesResponse) -> Bool {
    if lhs.payload != rhs.payload {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Assortment_V1_CipPrices: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".CipPrices"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "data"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeRepeatedMessageField(value: &self.data) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.data.isEmpty {
      try visitor.visitRepeatedMessageField(value: self.data, fieldNumber: 1)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Assortment_V1_CipPrices, rhs: Metro_Assortment_V1_CipPrices) -> Bool {
    if lhs.data != rhs.data {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Assortment_V1_CipPriceData: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".CipPriceData"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "unitTax"),
    2: .same(proto: "unit"),
    3: .same(proto: "munitTax"),
    4: .same(proto: "munit"),
    5: .same(proto: "packTax"),
    6: .same(proto: "pack"),
    7: .same(proto: "idArticle"),
    8: .same(proto: "idCompany"),
    9: .same(proto: "validityFrom"),
    10: .same(proto: "validityTo"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularDoubleField(value: &self.unitTax) }()
      case 2: try { try decoder.decodeSingularDoubleField(value: &self.unit) }()
      case 3: try { try decoder.decodeSingularDoubleField(value: &self.munitTax) }()
      case 4: try { try decoder.decodeSingularDoubleField(value: &self.munit) }()
      case 5: try { try decoder.decodeSingularDoubleField(value: &self.packTax) }()
      case 6: try { try decoder.decodeSingularDoubleField(value: &self.pack) }()
      case 7: try { try decoder.decodeSingularStringField(value: &self.idArticle) }()
      case 8: try { try decoder.decodeSingularInt64Field(value: &self.idCompany) }()
      case 9: try { try decoder.decodeSingularMessageField(value: &self._validityFrom) }()
      case 10: try { try decoder.decodeSingularMessageField(value: &self._validityTo) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    // The use of inline closures is to circumvent an issue where the compiler
    // allocates stack space for every if/case branch local when no optimizations
    // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
    // https://github.com/apple/swift-protobuf/issues/1182
    if self.unitTax != 0 {
      try visitor.visitSingularDoubleField(value: self.unitTax, fieldNumber: 1)
    }
    if self.unit != 0 {
      try visitor.visitSingularDoubleField(value: self.unit, fieldNumber: 2)
    }
    if self.munitTax != 0 {
      try visitor.visitSingularDoubleField(value: self.munitTax, fieldNumber: 3)
    }
    if self.munit != 0 {
      try visitor.visitSingularDoubleField(value: self.munit, fieldNumber: 4)
    }
    if self.packTax != 0 {
      try visitor.visitSingularDoubleField(value: self.packTax, fieldNumber: 5)
    }
    if self.pack != 0 {
      try visitor.visitSingularDoubleField(value: self.pack, fieldNumber: 6)
    }
    if !self.idArticle.isEmpty {
      try visitor.visitSingularStringField(value: self.idArticle, fieldNumber: 7)
    }
    if self.idCompany != 0 {
      try visitor.visitSingularInt64Field(value: self.idCompany, fieldNumber: 8)
    }
    try { if let v = self._validityFrom {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 9)
    } }()
    try { if let v = self._validityTo {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 10)
    } }()
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Assortment_V1_CipPriceData, rhs: Metro_Assortment_V1_CipPriceData) -> Bool {
    if lhs.unitTax != rhs.unitTax {return false}
    if lhs.unit != rhs.unit {return false}
    if lhs.munitTax != rhs.munitTax {return false}
    if lhs.munit != rhs.munit {return false}
    if lhs.packTax != rhs.packTax {return false}
    if lhs.pack != rhs.pack {return false}
    if lhs.idArticle != rhs.idArticle {return false}
    if lhs.idCompany != rhs.idCompany {return false}
    if lhs._validityFrom != rhs._validityFrom {return false}
    if lhs._validityTo != rhs._validityTo {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Assortment_V1_CipPrice: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".CipPrice"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    11: .same(proto: "idPrice"),
    1: .same(proto: "data"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularMessageField(value: &self._data) }()
      case 11: try { try decoder.decodeSingularMessageField(value: &self._idPrice) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    // The use of inline closures is to circumvent an issue where the compiler
    // allocates stack space for every if/case branch local when no optimizations
    // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
    // https://github.com/apple/swift-protobuf/issues/1182
    try { if let v = self._data {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 1)
    } }()
    try { if let v = self._idPrice {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 11)
    } }()
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Assortment_V1_CipPrice, rhs: Metro_Assortment_V1_CipPrice) -> Bool {
    if lhs._idPrice != rhs._idPrice {return false}
    if lhs._data != rhs._data {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}