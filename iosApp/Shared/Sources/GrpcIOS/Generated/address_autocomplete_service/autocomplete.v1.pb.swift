// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: address_autocomplete_service/autocomplete.v1.proto
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

public struct Appelis_Address_Autocomplete_V1_AddressAutoCompleteRequest {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var address: String = String()

  /// Optional. Location to send. Point around which you wish to retrieve place information.
  public var location: Appelis_Location {
    get {return _location ?? Appelis_Location()}
    set {_location = newValue}
  }
  /// Returns true if `location` has been explicitly set.
  public var hasLocation: Bool {return self._location != nil}
  /// Clears the value of `location`. Subsequent reads from it will return its default value.
  public mutating func clearLocation() {self._location = nil}

  /// Optional. The language code, indicating in which language the results should be returned, if possible.
  /// The language code, indicating in which language the results should be returned, if possible. Searches are also biased to the selected language; results in the selected language may be given a higher ranking.
  public var lang: Appelis_Language = .unknown

  /// Origin is the point from which to calculate
  public var origin: Appelis_Location {
    get {return _origin ?? Appelis_Location()}
    set {_origin = newValue}
  }
  /// Returns true if `origin` has been explicitly set.
  public var hasOrigin: Bool {return self._origin != nil}
  /// Clears the value of `origin`. Subsequent reads from it will return its default value.
  public mutating func clearOrigin() {self._origin = nil}

  /// Radius is the distance (in meters) within which to return place results.
  public var radius: UInt32 = 0

  /// StrictBounds return only those places that are strictly within the region defined
  /// by location and radius. Default false.
  public var strictBounds: Bool = false

  /// Token with device claims.
  public var token: Appelis_Identity_Common_V1_Token {
    get {return _token ?? Appelis_Identity_Common_V1_Token()}
    set {_token = newValue}
  }
  /// Returns true if `token` has been explicitly set.
  public var hasToken: Bool {return self._token != nil}
  /// Clears the value of `token`. Subsequent reads from it will return its default value.
  public mutating func clearToken() {self._token = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _location: Appelis_Location? = nil
  fileprivate var _origin: Appelis_Location? = nil
  fileprivate var _token: Appelis_Identity_Common_V1_Token? = nil
}

public struct Appelis_Address_Autocomplete_V1_AutoCompleteResults {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var data: [Appelis_Address_Autocomplete_V1_AutoCompleteResult] = []

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}
}

public struct Appelis_Address_Autocomplete_V1_AddressAutoCompleteResponse {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var payload: Appelis_Address_Autocomplete_V1_AddressAutoCompleteResponse.OneOf_Payload? = nil

  public var tokenErr: Appelis_Identity_Common_V1_TokenError {
    get {
      if case .tokenErr(let v)? = payload {return v}
      return .unknownTokenError
    }
    set {payload = .tokenErr(newValue)}
  }

  public var data: Appelis_Address_Autocomplete_V1_AutoCompleteResults {
    get {
      if case .data(let v)? = payload {return v}
      return Appelis_Address_Autocomplete_V1_AutoCompleteResults()
    }
    set {payload = .data(newValue)}
  }

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public enum OneOf_Payload: Equatable {
    case tokenErr(Appelis_Identity_Common_V1_TokenError)
    case data(Appelis_Address_Autocomplete_V1_AutoCompleteResults)

  #if !swift(>=4.1)
    public static func ==(lhs: Appelis_Address_Autocomplete_V1_AddressAutoCompleteResponse.OneOf_Payload, rhs: Appelis_Address_Autocomplete_V1_AddressAutoCompleteResponse.OneOf_Payload) -> Bool {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch (lhs, rhs) {
      case (.tokenErr, .tokenErr): return {
        guard case .tokenErr(let l) = lhs, case .tokenErr(let r) = rhs else { preconditionFailure() }
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

public struct Appelis_Address_Autocomplete_V1_PlaceDetailsRequest {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var placeID: String = String()

  public var lang: Appelis_Language = .unknown

  /// Token with device claims.
  public var token: Appelis_Identity_Common_V1_Token {
    get {return _token ?? Appelis_Identity_Common_V1_Token()}
    set {_token = newValue}
  }
  /// Returns true if `token` has been explicitly set.
  public var hasToken: Bool {return self._token != nil}
  /// Clears the value of `token`. Subsequent reads from it will return its default value.
  public mutating func clearToken() {self._token = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _token: Appelis_Identity_Common_V1_Token? = nil
}

public struct Appelis_Address_Autocomplete_V1_PlaceDetailsResponse {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var payload: Appelis_Address_Autocomplete_V1_PlaceDetailsResponse.OneOf_Payload? = nil

  public var tokenErr: Appelis_Identity_Common_V1_TokenError {
    get {
      if case .tokenErr(let v)? = payload {return v}
      return .unknownTokenError
    }
    set {payload = .tokenErr(newValue)}
  }

  public var error: Appelis_Address_Autocomplete_V1_PlaceDetailsResponse.PlaceDetailsError {
    get {
      if case .error(let v)? = payload {return v}
      return .errorUnknown
    }
    set {payload = .error(newValue)}
  }

  public var data: Appelis_Address_Autocomplete_V1_PlaceDetails {
    get {
      if case .data(let v)? = payload {return v}
      return Appelis_Address_Autocomplete_V1_PlaceDetails()
    }
    set {payload = .data(newValue)}
  }

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public enum OneOf_Payload: Equatable {
    case tokenErr(Appelis_Identity_Common_V1_TokenError)
    case error(Appelis_Address_Autocomplete_V1_PlaceDetailsResponse.PlaceDetailsError)
    case data(Appelis_Address_Autocomplete_V1_PlaceDetails)

  #if !swift(>=4.1)
    public static func ==(lhs: Appelis_Address_Autocomplete_V1_PlaceDetailsResponse.OneOf_Payload, rhs: Appelis_Address_Autocomplete_V1_PlaceDetailsResponse.OneOf_Payload) -> Bool {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch (lhs, rhs) {
      case (.tokenErr, .tokenErr): return {
        guard case .tokenErr(let l) = lhs, case .tokenErr(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
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

  public enum PlaceDetailsError: SwiftProtobuf.Enum {
    public typealias RawValue = Int
    case errorUnknown // = 0
    case notFound // = 1
    case UNRECOGNIZED(Int)

    public init() {
      self = .errorUnknown
    }

    public init?(rawValue: Int) {
      switch rawValue {
      case 0: self = .errorUnknown
      case 1: self = .notFound
      default: self = .UNRECOGNIZED(rawValue)
      }
    }

    public var rawValue: Int {
      switch self {
      case .errorUnknown: return 0
      case .notFound: return 1
      case .UNRECOGNIZED(let i): return i
      }
    }

  }

  public init() {}
}

#if swift(>=4.2)

extension Appelis_Address_Autocomplete_V1_PlaceDetailsResponse.PlaceDetailsError: CaseIterable {
  // The compiler won't synthesize support with the UNRECOGNIZED case.
  public static let allCases: [Appelis_Address_Autocomplete_V1_PlaceDetailsResponse.PlaceDetailsError] = [
    .errorUnknown,
    .notFound,
  ]
}

#endif  // swift(>=4.2)

#if swift(>=5.5) && canImport(_Concurrency)
extension Appelis_Address_Autocomplete_V1_AddressAutoCompleteRequest: @unchecked Sendable {}
extension Appelis_Address_Autocomplete_V1_AutoCompleteResults: @unchecked Sendable {}
extension Appelis_Address_Autocomplete_V1_AddressAutoCompleteResponse: @unchecked Sendable {}
extension Appelis_Address_Autocomplete_V1_AddressAutoCompleteResponse.OneOf_Payload: @unchecked Sendable {}
extension Appelis_Address_Autocomplete_V1_PlaceDetailsRequest: @unchecked Sendable {}
extension Appelis_Address_Autocomplete_V1_PlaceDetailsResponse: @unchecked Sendable {}
extension Appelis_Address_Autocomplete_V1_PlaceDetailsResponse.OneOf_Payload: @unchecked Sendable {}
extension Appelis_Address_Autocomplete_V1_PlaceDetailsResponse.PlaceDetailsError: @unchecked Sendable {}
#endif  // swift(>=5.5) && canImport(_Concurrency)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "appelis.address.autocomplete.v1"

extension Appelis_Address_Autocomplete_V1_AddressAutoCompleteRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".AddressAutoCompleteRequest"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "address"),
    2: .same(proto: "location"),
    3: .same(proto: "lang"),
    4: .same(proto: "origin"),
    5: .same(proto: "radius"),
    6: .same(proto: "strictBounds"),
    7: .same(proto: "token"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularStringField(value: &self.address) }()
      case 2: try { try decoder.decodeSingularMessageField(value: &self._location) }()
      case 3: try { try decoder.decodeSingularEnumField(value: &self.lang) }()
      case 4: try { try decoder.decodeSingularMessageField(value: &self._origin) }()
      case 5: try { try decoder.decodeSingularUInt32Field(value: &self.radius) }()
      case 6: try { try decoder.decodeSingularBoolField(value: &self.strictBounds) }()
      case 7: try { try decoder.decodeSingularMessageField(value: &self._token) }()
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
    try { if let v = self._location {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 2)
    } }()
    if self.lang != .unknown {
      try visitor.visitSingularEnumField(value: self.lang, fieldNumber: 3)
    }
    try { if let v = self._origin {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 4)
    } }()
    if self.radius != 0 {
      try visitor.visitSingularUInt32Field(value: self.radius, fieldNumber: 5)
    }
    if self.strictBounds != false {
      try visitor.visitSingularBoolField(value: self.strictBounds, fieldNumber: 6)
    }
    try { if let v = self._token {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 7)
    } }()
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Appelis_Address_Autocomplete_V1_AddressAutoCompleteRequest, rhs: Appelis_Address_Autocomplete_V1_AddressAutoCompleteRequest) -> Bool {
    if lhs.address != rhs.address {return false}
    if lhs._location != rhs._location {return false}
    if lhs.lang != rhs.lang {return false}
    if lhs._origin != rhs._origin {return false}
    if lhs.radius != rhs.radius {return false}
    if lhs.strictBounds != rhs.strictBounds {return false}
    if lhs._token != rhs._token {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Appelis_Address_Autocomplete_V1_AutoCompleteResults: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".AutoCompleteResults"
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

  public static func ==(lhs: Appelis_Address_Autocomplete_V1_AutoCompleteResults, rhs: Appelis_Address_Autocomplete_V1_AutoCompleteResults) -> Bool {
    if lhs.data != rhs.data {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Appelis_Address_Autocomplete_V1_AddressAutoCompleteResponse: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".AddressAutoCompleteResponse"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "tokenErr"),
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
          self.payload = .tokenErr(v)
        }
      }()
      case 2: try {
        var v: Appelis_Address_Autocomplete_V1_AutoCompleteResults?
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
    case .tokenErr?: try {
      guard case .tokenErr(let v)? = self.payload else { preconditionFailure() }
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

  public static func ==(lhs: Appelis_Address_Autocomplete_V1_AddressAutoCompleteResponse, rhs: Appelis_Address_Autocomplete_V1_AddressAutoCompleteResponse) -> Bool {
    if lhs.payload != rhs.payload {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Appelis_Address_Autocomplete_V1_PlaceDetailsRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".PlaceDetailsRequest"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "placeId"),
    2: .same(proto: "lang"),
    3: .same(proto: "token"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularStringField(value: &self.placeID) }()
      case 2: try { try decoder.decodeSingularEnumField(value: &self.lang) }()
      case 3: try { try decoder.decodeSingularMessageField(value: &self._token) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    // The use of inline closures is to circumvent an issue where the compiler
    // allocates stack space for every if/case branch local when no optimizations
    // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
    // https://github.com/apple/swift-protobuf/issues/1182
    if !self.placeID.isEmpty {
      try visitor.visitSingularStringField(value: self.placeID, fieldNumber: 1)
    }
    if self.lang != .unknown {
      try visitor.visitSingularEnumField(value: self.lang, fieldNumber: 2)
    }
    try { if let v = self._token {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 3)
    } }()
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Appelis_Address_Autocomplete_V1_PlaceDetailsRequest, rhs: Appelis_Address_Autocomplete_V1_PlaceDetailsRequest) -> Bool {
    if lhs.placeID != rhs.placeID {return false}
    if lhs.lang != rhs.lang {return false}
    if lhs._token != rhs._token {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Appelis_Address_Autocomplete_V1_PlaceDetailsResponse: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".PlaceDetailsResponse"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "tokenErr"),
    2: .same(proto: "error"),
    3: .same(proto: "data"),
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
          self.payload = .tokenErr(v)
        }
      }()
      case 2: try {
        var v: Appelis_Address_Autocomplete_V1_PlaceDetailsResponse.PlaceDetailsError?
        try decoder.decodeSingularEnumField(value: &v)
        if let v = v {
          if self.payload != nil {try decoder.handleConflictingOneOf()}
          self.payload = .error(v)
        }
      }()
      case 3: try {
        var v: Appelis_Address_Autocomplete_V1_PlaceDetails?
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
    case .tokenErr?: try {
      guard case .tokenErr(let v)? = self.payload else { preconditionFailure() }
      try visitor.visitSingularEnumField(value: v, fieldNumber: 1)
    }()
    case .error?: try {
      guard case .error(let v)? = self.payload else { preconditionFailure() }
      try visitor.visitSingularEnumField(value: v, fieldNumber: 2)
    }()
    case .data?: try {
      guard case .data(let v)? = self.payload else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 3)
    }()
    case nil: break
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Appelis_Address_Autocomplete_V1_PlaceDetailsResponse, rhs: Appelis_Address_Autocomplete_V1_PlaceDetailsResponse) -> Bool {
    if lhs.payload != rhs.payload {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Appelis_Address_Autocomplete_V1_PlaceDetailsResponse.PlaceDetailsError: SwiftProtobuf._ProtoNameProviding {
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    0: .same(proto: "ERROR_UNKNOWN"),
    1: .same(proto: "NOT_FOUND"),
  ]
}
