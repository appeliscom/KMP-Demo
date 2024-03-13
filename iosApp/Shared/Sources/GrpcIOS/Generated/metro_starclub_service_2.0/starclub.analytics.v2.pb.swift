// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the Swift generator plugin for the protocol buffer compiler.
// Source: metro_starclub_service_2.0/starclub.analytics.v2.proto
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

public struct Metro_Starclub_V2_AccountBalancesAndPolicyApprovesRequest {
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

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _token: Appelis_Identity_Common_V1_Token? = nil
}

public struct Metro_Starclub_V2_AccountBalancesAndPolicyApprovesResponse {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var payload: Metro_Starclub_V2_AccountBalancesAndPolicyApprovesResponse.OneOf_Payload? = nil

  public var tokenErr: Appelis_Identity_Common_V1_TokenError {
    get {
      if case .tokenErr(let v)? = payload {return v}
      return .unknownTokenError
    }
    set {payload = .tokenErr(newValue)}
  }

  public var data: Metro_Starclub_V2_AccountBalancesDataList {
    get {
      if case .data(let v)? = payload {return v}
      return Metro_Starclub_V2_AccountBalancesDataList()
    }
    set {payload = .data(newValue)}
  }

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public enum OneOf_Payload: Equatable {
    case tokenErr(Appelis_Identity_Common_V1_TokenError)
    case data(Metro_Starclub_V2_AccountBalancesDataList)

  #if !swift(>=4.1)
    public static func ==(lhs: Metro_Starclub_V2_AccountBalancesAndPolicyApprovesResponse.OneOf_Payload, rhs: Metro_Starclub_V2_AccountBalancesAndPolicyApprovesResponse.OneOf_Payload) -> Bool {
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

public struct Metro_Starclub_V2_AccountBalancesDataList {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var data: [Metro_Starclub_V2_AccountBalancesData] = []

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}
}

public struct Metro_Starclub_V2_AccountBalancesData {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var campaignID: Appelis_UUID {
    get {return _campaignID ?? Appelis_UUID()}
    set {_campaignID = newValue}
  }
  /// Returns true if `campaignID` has been explicitly set.
  public var hasCampaignID: Bool {return self._campaignID != nil}
  /// Clears the value of `campaignID`. Subsequent reads from it will return its default value.
  public mutating func clearCampaignID() {self._campaignID = nil}

  public var campaignName: String = String()

  public var campaignCollectStart: SwiftProtobuf.Google_Protobuf_Timestamp {
    get {return _campaignCollectStart ?? SwiftProtobuf.Google_Protobuf_Timestamp()}
    set {_campaignCollectStart = newValue}
  }
  /// Returns true if `campaignCollectStart` has been explicitly set.
  public var hasCampaignCollectStart: Bool {return self._campaignCollectStart != nil}
  /// Clears the value of `campaignCollectStart`. Subsequent reads from it will return its default value.
  public mutating func clearCampaignCollectStart() {self._campaignCollectStart = nil}

  public var campaignEnd: SwiftProtobuf.Google_Protobuf_Timestamp {
    get {return _campaignEnd ?? SwiftProtobuf.Google_Protobuf_Timestamp()}
    set {_campaignEnd = newValue}
  }
  /// Returns true if `campaignEnd` has been explicitly set.
  public var hasCampaignEnd: Bool {return self._campaignEnd != nil}
  /// Clears the value of `campaignEnd`. Subsequent reads from it will return its default value.
  public mutating func clearCampaignEnd() {self._campaignEnd = nil}

  public var custNo: String = String()

  public var storeNo: String = String()

  public var amount: Double = 0

  public var amountUpdatedAt: SwiftProtobuf.Google_Protobuf_Timestamp {
    get {return _amountUpdatedAt ?? SwiftProtobuf.Google_Protobuf_Timestamp()}
    set {_amountUpdatedAt = newValue}
  }
  /// Returns true if `amountUpdatedAt` has been explicitly set.
  public var hasAmountUpdatedAt: Bool {return self._amountUpdatedAt != nil}
  /// Clears the value of `amountUpdatedAt`. Subsequent reads from it will return its default value.
  public mutating func clearAmountUpdatedAt() {self._amountUpdatedAt = nil}

  public var policyApproved: Bool = false

  public var policyCardholderNo: String = String()

  public var policyApprovedDate: SwiftProtobuf.Google_Protobuf_Timestamp {
    get {return _policyApprovedDate ?? SwiftProtobuf.Google_Protobuf_Timestamp()}
    set {_policyApprovedDate = newValue}
  }
  /// Returns true if `policyApprovedDate` has been explicitly set.
  public var hasPolicyApprovedDate: Bool {return self._policyApprovedDate != nil}
  /// Clears the value of `policyApprovedDate`. Subsequent reads from it will return its default value.
  public mutating func clearPolicyApprovedDate() {self._policyApprovedDate = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _campaignID: Appelis_UUID? = nil
  fileprivate var _campaignCollectStart: SwiftProtobuf.Google_Protobuf_Timestamp? = nil
  fileprivate var _campaignEnd: SwiftProtobuf.Google_Protobuf_Timestamp? = nil
  fileprivate var _amountUpdatedAt: SwiftProtobuf.Google_Protobuf_Timestamp? = nil
  fileprivate var _policyApprovedDate: SwiftProtobuf.Google_Protobuf_Timestamp? = nil
}

public struct Metro_Starclub_V2_GetPagedSpendingMovementsRequest {
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

  public var first: UInt32 = 0

  public var from: SwiftProtobuf.Google_Protobuf_Timestamp {
    get {return _from ?? SwiftProtobuf.Google_Protobuf_Timestamp()}
    set {_from = newValue}
  }
  /// Returns true if `from` has been explicitly set.
  public var hasFrom: Bool {return self._from != nil}
  /// Clears the value of `from`. Subsequent reads from it will return its default value.
  public mutating func clearFrom() {self._from = nil}

  public var to: SwiftProtobuf.Google_Protobuf_Timestamp {
    get {return _to ?? SwiftProtobuf.Google_Protobuf_Timestamp()}
    set {_to = newValue}
  }
  /// Returns true if `to` has been explicitly set.
  public var hasTo: Bool {return self._to != nil}
  /// Clears the value of `to`. Subsequent reads from it will return its default value.
  public mutating func clearTo() {self._to = nil}

  public var after: SwiftProtobuf.Google_Protobuf_StringValue {
    get {return _after ?? SwiftProtobuf.Google_Protobuf_StringValue()}
    set {_after = newValue}
  }
  /// Returns true if `after` has been explicitly set.
  public var hasAfter: Bool {return self._after != nil}
  /// Clears the value of `after`. Subsequent reads from it will return its default value.
  public mutating func clearAfter() {self._after = nil}

  public var campaignID: Appelis_UUID {
    get {return _campaignID ?? Appelis_UUID()}
    set {_campaignID = newValue}
  }
  /// Returns true if `campaignID` has been explicitly set.
  public var hasCampaignID: Bool {return self._campaignID != nil}
  /// Clears the value of `campaignID`. Subsequent reads from it will return its default value.
  public mutating func clearCampaignID() {self._campaignID = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _token: Appelis_Identity_Common_V1_Token? = nil
  fileprivate var _from: SwiftProtobuf.Google_Protobuf_Timestamp? = nil
  fileprivate var _to: SwiftProtobuf.Google_Protobuf_Timestamp? = nil
  fileprivate var _after: SwiftProtobuf.Google_Protobuf_StringValue? = nil
  fileprivate var _campaignID: Appelis_UUID? = nil
}

public struct Metro_Starclub_V2_GetPagedSpendingMovementsResponse {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var payload: Metro_Starclub_V2_GetPagedSpendingMovementsResponse.OneOf_Payload? = nil

  public var tokenErr: Appelis_Identity_Common_V1_TokenError {
    get {
      if case .tokenErr(let v)? = payload {return v}
      return .unknownTokenError
    }
    set {payload = .tokenErr(newValue)}
  }

  public var dataPage: Metro_Starclub_V2_SpendingMovementsPage {
    get {
      if case .dataPage(let v)? = payload {return v}
      return Metro_Starclub_V2_SpendingMovementsPage()
    }
    set {payload = .dataPage(newValue)}
  }

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public enum OneOf_Payload: Equatable {
    case tokenErr(Appelis_Identity_Common_V1_TokenError)
    case dataPage(Metro_Starclub_V2_SpendingMovementsPage)

  #if !swift(>=4.1)
    public static func ==(lhs: Metro_Starclub_V2_GetPagedSpendingMovementsResponse.OneOf_Payload, rhs: Metro_Starclub_V2_GetPagedSpendingMovementsResponse.OneOf_Payload) -> Bool {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch (lhs, rhs) {
      case (.tokenErr, .tokenErr): return {
        guard case .tokenErr(let l) = lhs, case .tokenErr(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      case (.dataPage, .dataPage): return {
        guard case .dataPage(let l) = lhs, case .dataPage(let r) = rhs else { preconditionFailure() }
        return l == r
      }()
      default: return false
      }
    }
  #endif
  }

  public init() {}
}

public struct Metro_Starclub_V2_SpendingMovementNode {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var cursor: String = String()

  public var node: Metro_Starclub_V2_SpendingMovement {
    get {return _node ?? Metro_Starclub_V2_SpendingMovement()}
    set {_node = newValue}
  }
  /// Returns true if `node` has been explicitly set.
  public var hasNode: Bool {return self._node != nil}
  /// Clears the value of `node`. Subsequent reads from it will return its default value.
  public mutating func clearNode() {self._node = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _node: Metro_Starclub_V2_SpendingMovement? = nil
}

public struct Metro_Starclub_V2_SpendingMovement {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var id: Appelis_UUID {
    get {return _id ?? Appelis_UUID()}
    set {_id = newValue}
  }
  /// Returns true if `id` has been explicitly set.
  public var hasID: Bool {return self._id != nil}
  /// Clears the value of `id`. Subsequent reads from it will return its default value.
  public mutating func clearID() {self._id = nil}

  public var storeNo: String = String()

  public var custNo: String = String()

  public var couponName: String = String()

  public var couponEan: String = String()

  public var createdAt: SwiftProtobuf.Google_Protobuf_Timestamp {
    get {return _createdAt ?? SwiftProtobuf.Google_Protobuf_Timestamp()}
    set {_createdAt = newValue}
  }
  /// Returns true if `createdAt` has been explicitly set.
  public var hasCreatedAt: Bool {return self._createdAt != nil}
  /// Clears the value of `createdAt`. Subsequent reads from it will return its default value.
  public mutating func clearCreatedAt() {self._createdAt = nil}

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}

  fileprivate var _id: Appelis_UUID? = nil
  fileprivate var _createdAt: SwiftProtobuf.Google_Protobuf_Timestamp? = nil
}

public struct Metro_Starclub_V2_SpendingMovementsPage {
  // SwiftProtobuf.Message conformance is added in an extension below. See the
  // `Message` and `Message+*Additions` files in the SwiftProtobuf library for
  // methods supported on all messages.

  public var totalCount: UInt64 = 0

  public var nodes: [Metro_Starclub_V2_SpendingMovementNode] = []

  public var unknownFields = SwiftProtobuf.UnknownStorage()

  public init() {}
}

#if swift(>=5.5) && canImport(_Concurrency)
extension Metro_Starclub_V2_AccountBalancesAndPolicyApprovesRequest: @unchecked Sendable {}
extension Metro_Starclub_V2_AccountBalancesAndPolicyApprovesResponse: @unchecked Sendable {}
extension Metro_Starclub_V2_AccountBalancesAndPolicyApprovesResponse.OneOf_Payload: @unchecked Sendable {}
extension Metro_Starclub_V2_AccountBalancesDataList: @unchecked Sendable {}
extension Metro_Starclub_V2_AccountBalancesData: @unchecked Sendable {}
extension Metro_Starclub_V2_GetPagedSpendingMovementsRequest: @unchecked Sendable {}
extension Metro_Starclub_V2_GetPagedSpendingMovementsResponse: @unchecked Sendable {}
extension Metro_Starclub_V2_GetPagedSpendingMovementsResponse.OneOf_Payload: @unchecked Sendable {}
extension Metro_Starclub_V2_SpendingMovementNode: @unchecked Sendable {}
extension Metro_Starclub_V2_SpendingMovement: @unchecked Sendable {}
extension Metro_Starclub_V2_SpendingMovementsPage: @unchecked Sendable {}
#endif  // swift(>=5.5) && canImport(_Concurrency)

// MARK: - Code below here is support for the SwiftProtobuf runtime.

fileprivate let _protobuf_package = "metro.starclub.v2"

extension Metro_Starclub_V2_AccountBalancesAndPolicyApprovesRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".AccountBalancesAndPolicyApprovesRequest"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "token"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularMessageField(value: &self._token) }()
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
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Starclub_V2_AccountBalancesAndPolicyApprovesRequest, rhs: Metro_Starclub_V2_AccountBalancesAndPolicyApprovesRequest) -> Bool {
    if lhs._token != rhs._token {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Starclub_V2_AccountBalancesAndPolicyApprovesResponse: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".AccountBalancesAndPolicyApprovesResponse"
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
        var v: Metro_Starclub_V2_AccountBalancesDataList?
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

  public static func ==(lhs: Metro_Starclub_V2_AccountBalancesAndPolicyApprovesResponse, rhs: Metro_Starclub_V2_AccountBalancesAndPolicyApprovesResponse) -> Bool {
    if lhs.payload != rhs.payload {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Starclub_V2_AccountBalancesDataList: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".AccountBalancesDataList"
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

  public static func ==(lhs: Metro_Starclub_V2_AccountBalancesDataList, rhs: Metro_Starclub_V2_AccountBalancesDataList) -> Bool {
    if lhs.data != rhs.data {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Starclub_V2_AccountBalancesData: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".AccountBalancesData"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "campaignId"),
    2: .same(proto: "campaignName"),
    3: .same(proto: "campaignCollectStart"),
    4: .same(proto: "campaignEnd"),
    5: .same(proto: "custNo"),
    6: .same(proto: "storeNo"),
    7: .same(proto: "amount"),
    8: .same(proto: "amountUpdatedAt"),
    9: .same(proto: "policyApproved"),
    10: .same(proto: "policyCardholderNo"),
    11: .same(proto: "policyApprovedDate"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularMessageField(value: &self._campaignID) }()
      case 2: try { try decoder.decodeSingularStringField(value: &self.campaignName) }()
      case 3: try { try decoder.decodeSingularMessageField(value: &self._campaignCollectStart) }()
      case 4: try { try decoder.decodeSingularMessageField(value: &self._campaignEnd) }()
      case 5: try { try decoder.decodeSingularStringField(value: &self.custNo) }()
      case 6: try { try decoder.decodeSingularStringField(value: &self.storeNo) }()
      case 7: try { try decoder.decodeSingularDoubleField(value: &self.amount) }()
      case 8: try { try decoder.decodeSingularMessageField(value: &self._amountUpdatedAt) }()
      case 9: try { try decoder.decodeSingularBoolField(value: &self.policyApproved) }()
      case 10: try { try decoder.decodeSingularStringField(value: &self.policyCardholderNo) }()
      case 11: try { try decoder.decodeSingularMessageField(value: &self._policyApprovedDate) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    // The use of inline closures is to circumvent an issue where the compiler
    // allocates stack space for every if/case branch local when no optimizations
    // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
    // https://github.com/apple/swift-protobuf/issues/1182
    try { if let v = self._campaignID {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 1)
    } }()
    if !self.campaignName.isEmpty {
      try visitor.visitSingularStringField(value: self.campaignName, fieldNumber: 2)
    }
    try { if let v = self._campaignCollectStart {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 3)
    } }()
    try { if let v = self._campaignEnd {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 4)
    } }()
    if !self.custNo.isEmpty {
      try visitor.visitSingularStringField(value: self.custNo, fieldNumber: 5)
    }
    if !self.storeNo.isEmpty {
      try visitor.visitSingularStringField(value: self.storeNo, fieldNumber: 6)
    }
    if self.amount != 0 {
      try visitor.visitSingularDoubleField(value: self.amount, fieldNumber: 7)
    }
    try { if let v = self._amountUpdatedAt {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 8)
    } }()
    if self.policyApproved != false {
      try visitor.visitSingularBoolField(value: self.policyApproved, fieldNumber: 9)
    }
    if !self.policyCardholderNo.isEmpty {
      try visitor.visitSingularStringField(value: self.policyCardholderNo, fieldNumber: 10)
    }
    try { if let v = self._policyApprovedDate {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 11)
    } }()
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Starclub_V2_AccountBalancesData, rhs: Metro_Starclub_V2_AccountBalancesData) -> Bool {
    if lhs._campaignID != rhs._campaignID {return false}
    if lhs.campaignName != rhs.campaignName {return false}
    if lhs._campaignCollectStart != rhs._campaignCollectStart {return false}
    if lhs._campaignEnd != rhs._campaignEnd {return false}
    if lhs.custNo != rhs.custNo {return false}
    if lhs.storeNo != rhs.storeNo {return false}
    if lhs.amount != rhs.amount {return false}
    if lhs._amountUpdatedAt != rhs._amountUpdatedAt {return false}
    if lhs.policyApproved != rhs.policyApproved {return false}
    if lhs.policyCardholderNo != rhs.policyCardholderNo {return false}
    if lhs._policyApprovedDate != rhs._policyApprovedDate {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Starclub_V2_GetPagedSpendingMovementsRequest: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".GetPagedSpendingMovementsRequest"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "token"),
    2: .same(proto: "first"),
    3: .same(proto: "from"),
    4: .same(proto: "to"),
    5: .same(proto: "after"),
    6: .same(proto: "campaignId"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularMessageField(value: &self._token) }()
      case 2: try { try decoder.decodeSingularUInt32Field(value: &self.first) }()
      case 3: try { try decoder.decodeSingularMessageField(value: &self._from) }()
      case 4: try { try decoder.decodeSingularMessageField(value: &self._to) }()
      case 5: try { try decoder.decodeSingularMessageField(value: &self._after) }()
      case 6: try { try decoder.decodeSingularMessageField(value: &self._campaignID) }()
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
    if self.first != 0 {
      try visitor.visitSingularUInt32Field(value: self.first, fieldNumber: 2)
    }
    try { if let v = self._from {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 3)
    } }()
    try { if let v = self._to {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 4)
    } }()
    try { if let v = self._after {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 5)
    } }()
    try { if let v = self._campaignID {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 6)
    } }()
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Starclub_V2_GetPagedSpendingMovementsRequest, rhs: Metro_Starclub_V2_GetPagedSpendingMovementsRequest) -> Bool {
    if lhs._token != rhs._token {return false}
    if lhs.first != rhs.first {return false}
    if lhs._from != rhs._from {return false}
    if lhs._to != rhs._to {return false}
    if lhs._after != rhs._after {return false}
    if lhs._campaignID != rhs._campaignID {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Starclub_V2_GetPagedSpendingMovementsResponse: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".GetPagedSpendingMovementsResponse"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "tokenErr"),
    2: .same(proto: "dataPage"),
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
        var v: Metro_Starclub_V2_SpendingMovementsPage?
        var hadOneofValue = false
        if let current = self.payload {
          hadOneofValue = true
          if case .dataPage(let m) = current {v = m}
        }
        try decoder.decodeSingularMessageField(value: &v)
        if let v = v {
          if hadOneofValue {try decoder.handleConflictingOneOf()}
          self.payload = .dataPage(v)
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
    case .dataPage?: try {
      guard case .dataPage(let v)? = self.payload else { preconditionFailure() }
      try visitor.visitSingularMessageField(value: v, fieldNumber: 2)
    }()
    case nil: break
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Starclub_V2_GetPagedSpendingMovementsResponse, rhs: Metro_Starclub_V2_GetPagedSpendingMovementsResponse) -> Bool {
    if lhs.payload != rhs.payload {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Starclub_V2_SpendingMovementNode: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".SpendingMovementNode"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "cursor"),
    2: .same(proto: "node"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularStringField(value: &self.cursor) }()
      case 2: try { try decoder.decodeSingularMessageField(value: &self._node) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    // The use of inline closures is to circumvent an issue where the compiler
    // allocates stack space for every if/case branch local when no optimizations
    // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
    // https://github.com/apple/swift-protobuf/issues/1182
    if !self.cursor.isEmpty {
      try visitor.visitSingularStringField(value: self.cursor, fieldNumber: 1)
    }
    try { if let v = self._node {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 2)
    } }()
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Starclub_V2_SpendingMovementNode, rhs: Metro_Starclub_V2_SpendingMovementNode) -> Bool {
    if lhs.cursor != rhs.cursor {return false}
    if lhs._node != rhs._node {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Starclub_V2_SpendingMovement: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".SpendingMovement"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "id"),
    2: .same(proto: "storeNo"),
    3: .same(proto: "custNo"),
    4: .same(proto: "couponName"),
    5: .same(proto: "couponEan"),
    6: .same(proto: "createdAt"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularMessageField(value: &self._id) }()
      case 2: try { try decoder.decodeSingularStringField(value: &self.storeNo) }()
      case 3: try { try decoder.decodeSingularStringField(value: &self.custNo) }()
      case 4: try { try decoder.decodeSingularStringField(value: &self.couponName) }()
      case 5: try { try decoder.decodeSingularStringField(value: &self.couponEan) }()
      case 6: try { try decoder.decodeSingularMessageField(value: &self._createdAt) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    // The use of inline closures is to circumvent an issue where the compiler
    // allocates stack space for every if/case branch local when no optimizations
    // are enabled. https://github.com/apple/swift-protobuf/issues/1034 and
    // https://github.com/apple/swift-protobuf/issues/1182
    try { if let v = self._id {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 1)
    } }()
    if !self.storeNo.isEmpty {
      try visitor.visitSingularStringField(value: self.storeNo, fieldNumber: 2)
    }
    if !self.custNo.isEmpty {
      try visitor.visitSingularStringField(value: self.custNo, fieldNumber: 3)
    }
    if !self.couponName.isEmpty {
      try visitor.visitSingularStringField(value: self.couponName, fieldNumber: 4)
    }
    if !self.couponEan.isEmpty {
      try visitor.visitSingularStringField(value: self.couponEan, fieldNumber: 5)
    }
    try { if let v = self._createdAt {
      try visitor.visitSingularMessageField(value: v, fieldNumber: 6)
    } }()
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Starclub_V2_SpendingMovement, rhs: Metro_Starclub_V2_SpendingMovement) -> Bool {
    if lhs._id != rhs._id {return false}
    if lhs.storeNo != rhs.storeNo {return false}
    if lhs.custNo != rhs.custNo {return false}
    if lhs.couponName != rhs.couponName {return false}
    if lhs.couponEan != rhs.couponEan {return false}
    if lhs._createdAt != rhs._createdAt {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}

extension Metro_Starclub_V2_SpendingMovementsPage: SwiftProtobuf.Message, SwiftProtobuf._MessageImplementationBase, SwiftProtobuf._ProtoNameProviding {
  public static let protoMessageName: String = _protobuf_package + ".SpendingMovementsPage"
  public static let _protobuf_nameMap: SwiftProtobuf._NameMap = [
    1: .same(proto: "totalCount"),
    2: .same(proto: "nodes"),
  ]

  public mutating func decodeMessage<D: SwiftProtobuf.Decoder>(decoder: inout D) throws {
    while let fieldNumber = try decoder.nextFieldNumber() {
      // The use of inline closures is to circumvent an issue where the compiler
      // allocates stack space for every case branch when no optimizations are
      // enabled. https://github.com/apple/swift-protobuf/issues/1034
      switch fieldNumber {
      case 1: try { try decoder.decodeSingularUInt64Field(value: &self.totalCount) }()
      case 2: try { try decoder.decodeRepeatedMessageField(value: &self.nodes) }()
      default: break
      }
    }
  }

  public func traverse<V: SwiftProtobuf.Visitor>(visitor: inout V) throws {
    if self.totalCount != 0 {
      try visitor.visitSingularUInt64Field(value: self.totalCount, fieldNumber: 1)
    }
    if !self.nodes.isEmpty {
      try visitor.visitRepeatedMessageField(value: self.nodes, fieldNumber: 2)
    }
    try unknownFields.traverse(visitor: &visitor)
  }

  public static func ==(lhs: Metro_Starclub_V2_SpendingMovementsPage, rhs: Metro_Starclub_V2_SpendingMovementsPage) -> Bool {
    if lhs.totalCount != rhs.totalCount {return false}
    if lhs.nodes != rhs.nodes {return false}
    if lhs.unknownFields != rhs.unknownFields {return false}
    return true
  }
}
