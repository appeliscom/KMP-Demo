// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: delivery_service/deliveryBusinessHoursAdmin.proto
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

public struct Appelis_Order_Delivery_V1_DeleteDeliveryHoursRequest {
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

  public var data: [Appelis_Order_Delivery_V1_DeliveryHourPk] = []

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _token: Appelis_Identity_Common_V1_Token? = nil
}

public struct Appelis_Order_Delivery_V1_DeleteDeliveryHoursResponse {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var payload: Appelis_Order_Delivery_V1_DeleteDeliveryHoursResponse.OneOf_Payload? = nil

  public var err: Appelis_Identity_Common_V1_TokenError {
    get {
      if case .err(let v)? = payload {return v}
      return .unknownTokenError
    }
    set {payload = .err(newValue)}
  }

  public var permErr: Appelis_Identity_Common_V1_PermissionError {
    get {
      if case .permErr(let v)? = payload {return v}
      return .unknownPermissionError
    }
    set {payload = .permErr(newValue)}
  }

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public enum OneOf_Payload: Equatable {
    case err(Appelis_Identity_Common_V1_TokenError)
    case permErr(Appelis_Identity_Common_V1_PermissionError)

  #if !swift(>=4.1)
    public static func ==(lhs: Appelis_Order_Delivery_V1_DeleteDeliveryHoursResponse.OneOf_Payload, rhs: Appelis_Order_Delivery_V1_DeleteDeliveryHoursResponse.OneOf_Payload) -> Bool {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch (lhs, rhs) {
      case (.err, .err): return {
        guard case .err(let l) = lhs, case .err(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      case (.permErr, .permErr): return {
        guard case .permErr(let l) = lhs, case .permErr(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      default: return false
      }
    }
  #endif
  }

  public init() {}
}

public struct Appelis_Order_Delivery_V1_SetBusinessDeliveryHoursRequest {
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

  public var hours: Appelis_Order_Delivery_V1_DeliveryHours {
    get {return _hours ?? Appelis_Order_Delivery_V1_DeliveryHours()}
    set {_hours = newValue}
  }
  /// Returns true if `hours` has been explicitly set.
  public var hasHours: Bool {return self._hours != nil}
  /// Clears the value of `hours`. Subsequent reads from it will return its default value.
  public mutating func clearHours() {self._hours = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _token: Appelis_Identity_Common_V1_Token? = nil
  fileprivate var _hours: Appelis_Order_Delivery_V1_DeliveryHours? = nil
}

public struct Appelis_Order_Delivery_V1_SetBusinessDeliveryHoursResponse {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var payload: Appelis_Order_Delivery_V1_SetBusinessDeliveryHoursResponse.OneOf_Payload? = nil

  public var err: Appelis_Identity_Common_V1_TokenError {
    get {
      if case .err(let v)? = payload {return v}
      return .unknownTokenError
    }
    set {payload = .err(newValue)}
  }

  public var permErr: Appelis_Identity_Common_V1_PermissionError {
    get {
      if case .permErr(let v)? = payload {return v}
      return .unknownPermissionError
    }
    set {payload = .permErr(newValue)}
  }

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public enum OneOf_Payload: Equatable {
    case err(Appelis_Identity_Common_V1_TokenError)
    case permErr(Appelis_Identity_Common_V1_PermissionError)

  #if !swift(>=4.1)
    public static func ==(lhs: Appelis_Order_Delivery_V1_SetBusinessDeliveryHoursResponse.OneOf_Payload, rhs: Appelis_Order_Delivery_V1_SetBusinessDeliveryHoursResponse.OneOf_Payload) -> Bool {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch (lhs, rhs) {
      case (.err, .err): return {
        guard case .err(let l) = lhs, case .err(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      case (.permErr, .permErr): return {
        guard case .permErr(let l) = lhs, case .permErr(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      default: return false
      }
    }
  #endif
  }

  public init() {}
}

public struct Appelis_Order_Delivery_V1_GetBusinessDeliveryHoursRequest {
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

  public var businessID: [String] = []

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _token: Appelis_Identity_Common_V1_Token? = nil
}

public struct Appelis_Order_Delivery_V1_GetBusinessDeliveryHoursResponse {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var payload: Appelis_Order_Delivery_V1_GetBusinessDeliveryHoursResponse.OneOf_Payload? = nil

  public var err: Appelis_Identity_Common_V1_TokenError {
    get {
      if case .err(let v)? = payload {return v}
      return .unknownTokenError
    }
    set {payload = .err(newValue)}
  }

  public var deliveryHours: Appelis_Order_Delivery_V1_DeliveryHours {
    get {
      if case .deliveryHours(let v)? = payload {return v}
      return Appelis_Order_Delivery_V1_DeliveryHours()
    }
    set {payload = .deliveryHours(newValue)}
  }

  public var permErr: Appelis_Identity_Common_V1_PermissionError {
    get {
      if case .permErr(let v)? = payload {return v}
      return .unknownPermissionError
    }
    set {payload = .permErr(newValue)}
  }

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public enum OneOf_Payload: Equatable {
    case err(Appelis_Identity_Common_V1_TokenError)
    case deliveryHours(Appelis_Order_Delivery_V1_DeliveryHours)
    case permErr(Appelis_Identity_Common_V1_PermissionError)

  #if !swift(>=4.1)
    public static func ==(lhs: Appelis_Order_Delivery_V1_GetBusinessDeliveryHoursResponse.OneOf_Payload, rhs: Appelis_Order_Delivery_V1_GetBusinessDeliveryHoursResponse.OneOf_Payload) -> Bool {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch (lhs, rhs) {
      case (.err, .err): return {
        guard case .err(let l) = lhs, case .err(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      case (.deliveryHours, .deliveryHours): return {
        guard case .deliveryHours(let l) = lhs, case .deliveryHours(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      case (.permErr, .permErr): return {
        guard case .permErr(let l) = lhs, case .permErr(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      default: return false
      }
    }
  #endif
  }

  public init() {}
}

public struct Appelis_Order_Delivery_V1_DeliveryHourPk {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var businessID: String = String()

  public var day: Appelis_WeekDay = .unknownWeekDay

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}
}

#if swift(>=5.5) && canImport(_Concurrency)
extension Appelis_Order_Delivery_V1_DeleteDeliveryHoursRequest: @unchecked Sendable {}
extension Appelis_Order_Delivery_V1_DeleteDeliveryHoursResponse: @unchecked Sendable {}
extension Appelis_Order_Delivery_V1_DeleteDeliveryHoursResponse.OneOf_Payload: @unchecked Sendable {}
extension Appelis_Order_Delivery_V1_SetBusinessDeliveryHoursRequest: @unchecked Sendable {}
extension Appelis_Order_Delivery_V1_SetBusinessDeliveryHoursResponse: @unchecked Sendable {}
extension Appelis_Order_Delivery_V1_SetBusinessDeliveryHoursResponse.OneOf_Payload: @unchecked Sendable {}
extension Appelis_Order_Delivery_V1_GetBusinessDeliveryHoursRequest: @unchecked Sendable {}
extension Appelis_Order_Delivery_V1_GetBusinessDeliveryHoursResponse: @unchecked Sendable {}
extension Appelis_Order_Delivery_V1_GetBusinessDeliveryHoursResponse.OneOf_Payload: @unchecked Sendable {}
extension Appelis_Order_Delivery_V1_DeliveryHourPk: @unchecked Sendable {}
#endif  // swift(>=5.5) && canImport(_Concurrency)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "appelis.order.delivery.v1"

extension Appelis_Order_Delivery_V1_DeleteDeliveryHoursRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".DeleteDeliveryHoursRequest"
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

  public static func ==(lhs: Appelis_Order_Delivery_V1_DeleteDeliveryHoursRequest, rhs: Appelis_Order_Delivery_V1_DeleteDeliveryHoursRequest) -> Bool {
    if lhs._token != rhs._token {return false}
    if lhs.data != rhs.data {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Appelis_Order_Delivery_V1_DeleteDeliveryHoursResponse: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".DeleteDeliveryHoursResponse"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "err"),
    2: .same(proto: "permErr"),
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
          self.payload = .err(v)
        }
      }()
      case 2: try {
        var v: Appelis_Identity_Common_V1_PermissionError?
        try decoder.decodeSingularEnumField(value: &v)
        if let v = v {
          if self.payload != nil {try decoder.handleConflictingOneOf()}
          self.payload = .permErr(v)
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
    case .err?: try {
      guard case .err(let v)? = self.payload else { preconditionFailure() }
      try visitor.visitSingularEnumField(value: v, fieldNumber: 1)
    }()
    case .permErr?: try {
      guard case .permErr(let v)? = self.payload else { preconditionFailure() }
      try visitor.visitSingularEnumField(value: v, fieldNumber: 2)
    }()
    case nil: break
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Appelis_Order_Delivery_V1_DeleteDeliveryHoursResponse, rhs: Appelis_Order_Delivery_V1_DeleteDeliveryHoursResponse) -> Bool {
    if lhs.payload != rhs.payload {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Appelis_Order_Delivery_V1_SetBusinessDeliveryHoursRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".SetBusinessDeliveryHoursRequest"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "token"),
    2: .same(proto: "hours"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularMessageField(value: &self._token) }()
      case 2: try { try decoder.decodeSingularMessageField(value: &self._hours) }()
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
    try { if let v = self._hours {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 2)
    } }()
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Appelis_Order_Delivery_V1_SetBusinessDeliveryHoursRequest, rhs: Appelis_Order_Delivery_V1_SetBusinessDeliveryHoursRequest) -> Bool {
    if lhs._token != rhs._token {return false}
    if lhs._hours != rhs._hours {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Appelis_Order_Delivery_V1_SetBusinessDeliveryHoursResponse: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".SetBusinessDeliveryHoursResponse"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "err"),
    2: .same(proto: "permErr"),
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
          self.payload = .err(v)
        }
      }()
      case 2: try {
        var v: Appelis_Identity_Common_V1_PermissionError?
        try decoder.decodeSingularEnumField(value: &v)
        if let v = v {
          if self.payload != nil {try decoder.handleConflictingOneOf()}
          self.payload = .permErr(v)
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
    case .err?: try {
      guard case .err(let v)? = self.payload else { preconditionFailure() }
      try visitor.visitSingularEnumField(value: v, fieldNumber: 1)
    }()
    case .permErr?: try {
      guard case .permErr(let v)? = self.payload else { preconditionFailure() }
      try visitor.visitSingularEnumField(value: v, fieldNumber: 2)
    }()
    case nil: break
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Appelis_Order_Delivery_V1_SetBusinessDeliveryHoursResponse, rhs: Appelis_Order_Delivery_V1_SetBusinessDeliveryHoursResponse) -> Bool {
    if lhs.payload != rhs.payload {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Appelis_Order_Delivery_V1_GetBusinessDeliveryHoursRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".GetBusinessDeliveryHoursRequest"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "token"),
    2: .same(proto: "businessId"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularMessageField(value: &self._token) }()
      case 2: try { try decoder.decodeRepeatedStringField(value: &self.businessID) }()
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
    if !self.businessID.isEmpty {
      try visitor.visitRepeatedStringField(value: self.businessID, fieldNumber: 2)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Appelis_Order_Delivery_V1_GetBusinessDeliveryHoursRequest, rhs: Appelis_Order_Delivery_V1_GetBusinessDeliveryHoursRequest) -> Bool {
    if lhs._token != rhs._token {return false}
    if lhs.businessID != rhs.businessID {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Appelis_Order_Delivery_V1_GetBusinessDeliveryHoursResponse: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".GetBusinessDeliveryHoursResponse"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "err"),
    2: .same(proto: "deliveryHours"),
    3: .same(proto: "permErr"),
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
          self.payload = .err(v)
        }
      }()
      case 2: try {
        var v: Appelis_Order_Delivery_V1_DeliveryHours?
        var hadOneofValue = false
        if let current = self.payload {
          hadOneofValue = true
          if case .deliveryHours(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.payload = .deliveryHours(v)
        }
      }()
      case 3: try {
        var v: Appelis_Identity_Common_V1_PermissionError?
        try decoder.decodeSingularEnumField(value: &v)
        if let v = v {
          if self.payload != nil {try decoder.handleConflictingOneOf()}
          self.payload = .permErr(v)
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
    case .err?: try {
      guard case .err(let v)? = self.payload else { preconditionFailure() }
      try visitor.visitSingularEnumField(value: v, fieldNumber: 1)
    }()
    case .deliveryHours?: try {
      guard case .deliveryHours(let v)? = self.payload else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 2)
    }()
    case .permErr?: try {
      guard case .permErr(let v)? = self.payload else { preconditionFailure() }
      try visitor.visitSingularEnumField(value: v, fieldNumber: 3)
    }()
    case nil: break
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Appelis_Order_Delivery_V1_GetBusinessDeliveryHoursResponse, rhs: Appelis_Order_Delivery_V1_GetBusinessDeliveryHoursResponse) -> Bool {
    if lhs.payload != rhs.payload {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Appelis_Order_Delivery_V1_DeliveryHourPk: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".DeliveryHourPk"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "businessId"),
    2: .same(proto: "day"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularStringField(value: &self.businessID) }()
      case 2: try { try decoder.decodeSingularEnumField(value: &self.day) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if !self.businessID.isEmpty {
      try visitor.visitSingularStringField(value: self.businessID, fieldNumber: 1)
    }
    if self.day != .unknownWeekDay {
      try visitor.visitSingularEnumField(value: self.day, fieldNumber: 2)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Appelis_Order_Delivery_V1_DeliveryHourPk, rhs: Appelis_Order_Delivery_V1_DeliveryHourPk) -> Bool {
    if lhs.businessID != rhs.businessID {return false}
    if lhs.day != rhs.day {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}