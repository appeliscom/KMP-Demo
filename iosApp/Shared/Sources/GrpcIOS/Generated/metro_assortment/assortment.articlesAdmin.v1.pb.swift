// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: metro_assortment/assortment.articlesAdmin.v1.proto
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

public struct Metro_Assortment_V1_StreamArticlesResponse {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var payload: Metro_Assortment_V1_StreamArticlesResponse.OneOf_Payload? = nil

  public var tokenErr: Appelis_Identity_Common_V1_TokenError {
    get {
      if case .tokenErr(let v)? = payload {return v}
      return .unknownTokenError
    }
    set {payload = .tokenErr(newValue)}
  }

  public var data: Metro_Assortment_V1_ArticlesArray {
    get {
      if case .data(let v)? = payload {return v}
      return Metro_Assortment_V1_ArticlesArray()
    }
    set {payload = .data(newValue)}
  }

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public enum OneOf_Payload: Equatable {
    case tokenErr(Appelis_Identity_Common_V1_TokenError)
    case data(Metro_Assortment_V1_ArticlesArray)

  #if !swift(>=4.1)
    public static func ==(lhs: Metro_Assortment_V1_StreamArticlesResponse.OneOf_Payload, rhs: Metro_Assortment_V1_StreamArticlesResponse.OneOf_Payload) -> Bool {
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

public struct Metro_Assortment_V1_ArticlesArray {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var data: [Metro_Assortment_V1_Article] = []

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}
}

public struct Metro_Assortment_V1_StreamArticlesRequest {
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

  public var fieldMask: SwiftProtobuf.Google_Protobuf_FieldMask {
    get {return _fieldMask ?? SwiftProtobuf.Google_Protobuf_FieldMask()}
    set {_fieldMask = newValue}
  }
  /// Returns true if `fieldMask` has been explicitly set.
  public var hasFieldMask: Bool {return self._fieldMask != nil}
  /// Clears the value of `fieldMask`. Subsequent reads from it will return its default value.
  public mutating func clearFieldMask() {self._fieldMask = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _token: Appelis_Identity_Common_V1_Token? = nil
  fileprivate var _fieldMask: SwiftProtobuf.Google_Protobuf_FieldMask? = nil
}

public struct Metro_Assortment_V1_DeleteArticlesRequest {
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

  public var articleIds: [String] = []

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _token: Appelis_Identity_Common_V1_Token? = nil
}

public struct Metro_Assortment_V1_SetArticlesRequest {
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

  public var articles: [Metro_Assortment_V1_Article] = []

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _token: Appelis_Identity_Common_V1_Token? = nil
}

public struct Metro_Assortment_V1_ChangeArticlesResponse {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var payload: Metro_Assortment_V1_ChangeArticlesResponse.OneOf_Payload? = nil

  public var tokenErr: Appelis_Identity_Common_V1_TokenError {
    get {
      if case .tokenErr(let v)? = payload {return v}
      return .unknownTokenError
    }
    set {payload = .tokenErr(newValue)}
  }

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public enum OneOf_Payload: Equatable {
    case tokenErr(Appelis_Identity_Common_V1_TokenError)

  #if !swift(>=4.1)
    public static func ==(lhs: Metro_Assortment_V1_ChangeArticlesResponse.OneOf_Payload, rhs: Metro_Assortment_V1_ChangeArticlesResponse.OneOf_Payload) -> Bool {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch (lhs, rhs) {
      case (.tokenErr, .tokenErr): return {
        guard case .tokenErr(let l) = lhs, case .tokenErr(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      }
    }
  #endif
  }

  public init() {}
}

#if swift(>=5.5) && canImport(_Concurrency)
extension Metro_Assortment_V1_StreamArticlesResponse: @unchecked Sendable {}
extension Metro_Assortment_V1_StreamArticlesResponse.OneOf_Payload: @unchecked Sendable {}
extension Metro_Assortment_V1_ArticlesArray: @unchecked Sendable {}
extension Metro_Assortment_V1_StreamArticlesRequest: @unchecked Sendable {}
extension Metro_Assortment_V1_DeleteArticlesRequest: @unchecked Sendable {}
extension Metro_Assortment_V1_SetArticlesRequest: @unchecked Sendable {}
extension Metro_Assortment_V1_ChangeArticlesResponse: @unchecked Sendable {}
extension Metro_Assortment_V1_ChangeArticlesResponse.OneOf_Payload: @unchecked Sendable {}
#endif  // swift(>=5.5) && canImport(_Concurrency)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "metro.assortment.v1"

extension Metro_Assortment_V1_StreamArticlesResponse: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".StreamArticlesResponse"
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
        var v: Metro_Assortment_V1_ArticlesArray?
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

  public static func ==(lhs: Metro_Assortment_V1_StreamArticlesResponse, rhs: Metro_Assortment_V1_StreamArticlesResponse) -> Bool {
    if lhs.payload != rhs.payload {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Assortment_V1_ArticlesArray: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".ArticlesArray"
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

  public static func ==(lhs: Metro_Assortment_V1_ArticlesArray, rhs: Metro_Assortment_V1_ArticlesArray) -> Bool {
    if lhs.data != rhs.data {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Assortment_V1_StreamArticlesRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".StreamArticlesRequest"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "token"),
    2: .same(proto: "fieldMask"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularMessageField(value: &self._token) }()
      case 2: try { try decoder.decodeSingularMessageField(value: &self._fieldMask) }()
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
    try { if let v = self._fieldMask {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 2)
    } }()
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Assortment_V1_StreamArticlesRequest, rhs: Metro_Assortment_V1_StreamArticlesRequest) -> Bool {
    if lhs._token != rhs._token {return false}
    if lhs._fieldMask != rhs._fieldMask {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Assortment_V1_DeleteArticlesRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".DeleteArticlesRequest"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "token"),
    2: .same(proto: "articleIds"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularMessageField(value: &self._token) }()
      case 2: try { try decoder.decodeRepeatedStringField(value: &self.articleIds) }()
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
    if !self.articleIds.isEmpty {
      try visitor.visitRepeatedStringField(value: self.articleIds, fieldNumber: 2)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Assortment_V1_DeleteArticlesRequest, rhs: Metro_Assortment_V1_DeleteArticlesRequest) -> Bool {
    if lhs._token != rhs._token {return false}
    if lhs.articleIds != rhs.articleIds {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Assortment_V1_SetArticlesRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".SetArticlesRequest"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "token"),
    2: .same(proto: "articles"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularMessageField(value: &self._token) }()
      case 2: try { try decoder.decodeRepeatedMessageField(value: &self.articles) }()
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
    if !self.articles.isEmpty {
      try visitor.visitRepeatedMessageField(value: self.articles, fieldNumber: 2)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Assortment_V1_SetArticlesRequest, rhs: Metro_Assortment_V1_SetArticlesRequest) -> Bool {
    if lhs._token != rhs._token {return false}
    if lhs.articles != rhs.articles {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Assortment_V1_ChangeArticlesResponse: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".ChangeArticlesResponse"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "tokenErr"),
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
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    // The use of inline closures is to circumvent an issue where the compiler
    // allocates stack space for every if/case branch local when no optimizations
    // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
    // https://github.com/apple/swift-protobuf/issues/1182
    try { if case .tokenErr(let v)? = self.payload {
      try visitor.visitSingularEnumField(value: v, fieldNumber: 1)
    } }()
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Assortment_V1_ChangeArticlesResponse, rhs: Metro_Assortment_V1_ChangeArticlesResponse) -> Bool {
    if lhs.payload != rhs.payload {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}