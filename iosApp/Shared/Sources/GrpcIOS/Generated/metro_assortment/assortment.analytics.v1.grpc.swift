//
// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the protocol buffer compiler.
// Source: metro_assortment/assortment.analytics.v1.proto
//
import GRPC
import NIO
import NIOConcurrencyHelpers
import SwiftProtobuf


/// Usage: instantiate `Metro_Assortment_V1_OpenedItemsClient`, then call methods of this protocol to make API calls.
public protocol Metro_Assortment_V1_OpenedItemsClientProtocol: GRPCClient {
  var serviceName: String { get }
  var interceptors: Metro_Assortment_V1_OpenedItemsClientInterceptorFactoryProtocol? { get }

  func getMostOpenedItems(
    _ request: Metro_Assortment_V1_GetMostOpenedItemsRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Assortment_V1_GetMostOpenedItemsRequest, Metro_Assortment_V1_GetMostOpenedItemsResponse>
}

extension Metro_Assortment_V1_OpenedItemsClientProtocol {
  public var serviceName: String {
    return "metro.assortment.v1.OpenedItems"
  }

  /// Unary call to GetMostOpenedItems
  ///
  /// - Parameters:
  ///   - request: Request to send to GetMostOpenedItems.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getMostOpenedItems(
    _ request: Metro_Assortment_V1_GetMostOpenedItemsRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Assortment_V1_GetMostOpenedItemsRequest, Metro_Assortment_V1_GetMostOpenedItemsResponse> {
    return self.makeUnaryCall(
      path: Metro_Assortment_V1_OpenedItemsClientMetadata.Methods.getMostOpenedItems.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMostOpenedItemsInterceptors() ?? []
    )
  }
}

@available(*, deprecated)
extension Metro_Assortment_V1_OpenedItemsClient: @unchecked Sendable {}

@available(*, deprecated, renamed: "Metro_Assortment_V1_OpenedItemsNIOClient")
public final class Metro_Assortment_V1_OpenedItemsClient: Metro_Assortment_V1_OpenedItemsClientProtocol {
  private let lock = Lock()
  private var _defaultCallOptions: CallOptions
  private var _interceptors: Metro_Assortment_V1_OpenedItemsClientInterceptorFactoryProtocol?
  public let channel: GRPCChannel
  public var defaultCallOptions: CallOptions {
    get { self.lock.withLock { return self._defaultCallOptions } }
    set { self.lock.withLockVoid { self._defaultCallOptions = newValue } }
  }
  public var interceptors: Metro_Assortment_V1_OpenedItemsClientInterceptorFactoryProtocol? {
    get { self.lock.withLock { return self._interceptors } }
    set { self.lock.withLockVoid { self._interceptors = newValue } }
  }

  /// Creates a client for the metro.assortment.v1.OpenedItems service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Assortment_V1_OpenedItemsClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self._defaultCallOptions = defaultCallOptions
    self._interceptors = interceptors
  }
}

public struct Metro_Assortment_V1_OpenedItemsNIOClient: Metro_Assortment_V1_OpenedItemsClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Metro_Assortment_V1_OpenedItemsClientInterceptorFactoryProtocol?

  /// Creates a client for the metro.assortment.v1.OpenedItems service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Assortment_V1_OpenedItemsClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public protocol Metro_Assortment_V1_OpenedItemsAsyncClientProtocol: GRPCClient {
  static var serviceDescriptor: GRPCServiceDescriptor { get }
  var interceptors: Metro_Assortment_V1_OpenedItemsClientInterceptorFactoryProtocol? { get }

  func makeGetMostOpenedItemsCall(
    _ request: Metro_Assortment_V1_GetMostOpenedItemsRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Assortment_V1_GetMostOpenedItemsRequest, Metro_Assortment_V1_GetMostOpenedItemsResponse>
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Metro_Assortment_V1_OpenedItemsAsyncClientProtocol {
  public static var serviceDescriptor: GRPCServiceDescriptor {
    return Metro_Assortment_V1_OpenedItemsClientMetadata.serviceDescriptor
  }

  public var interceptors: Metro_Assortment_V1_OpenedItemsClientInterceptorFactoryProtocol? {
    return nil
  }

  public func makeGetMostOpenedItemsCall(
    _ request: Metro_Assortment_V1_GetMostOpenedItemsRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Assortment_V1_GetMostOpenedItemsRequest, Metro_Assortment_V1_GetMostOpenedItemsResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Assortment_V1_OpenedItemsClientMetadata.Methods.getMostOpenedItems.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMostOpenedItemsInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Metro_Assortment_V1_OpenedItemsAsyncClientProtocol {
  public func getMostOpenedItems(
    _ request: Metro_Assortment_V1_GetMostOpenedItemsRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Assortment_V1_GetMostOpenedItemsResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Assortment_V1_OpenedItemsClientMetadata.Methods.getMostOpenedItems.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMostOpenedItemsInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public struct Metro_Assortment_V1_OpenedItemsAsyncClient: Metro_Assortment_V1_OpenedItemsAsyncClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Metro_Assortment_V1_OpenedItemsClientInterceptorFactoryProtocol?

  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Assortment_V1_OpenedItemsClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

public protocol Metro_Assortment_V1_OpenedItemsClientInterceptorFactoryProtocol: Sendable {

  /// - Returns: Interceptors to use when invoking 'getMostOpenedItems'.
  func makeGetMostOpenedItemsInterceptors() -> [ClientInterceptor<Metro_Assortment_V1_GetMostOpenedItemsRequest, Metro_Assortment_V1_GetMostOpenedItemsResponse>]
}

public enum Metro_Assortment_V1_OpenedItemsClientMetadata {
  public static let serviceDescriptor = GRPCServiceDescriptor(
    name: "OpenedItems",
    fullName: "metro.assortment.v1.OpenedItems",
    methods: [
      Metro_Assortment_V1_OpenedItemsClientMetadata.Methods.getMostOpenedItems,
    ]
  )

  public enum Methods {
    public static let getMostOpenedItems = GRPCMethodDescriptor(
      name: "GetMostOpenedItems",
      path: "/metro.assortment.v1.OpenedItems/GetMostOpenedItems",
      type: GRPCCallType.unary
    )
  }
}

/// Usage: instantiate `Metro_Assortment_V1_SearchKeywordsClient`, then call methods of this protocol to make API calls.
public protocol Metro_Assortment_V1_SearchKeywordsClientProtocol: GRPCClient {
  var serviceName: String { get }
  var interceptors: Metro_Assortment_V1_SearchKeywordsClientInterceptorFactoryProtocol? { get }

  func getMostSearchedKeywords(
    _ request: Metro_Assortment_V1_GetMostSearchedKeywordsRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Assortment_V1_GetMostSearchedKeywordsRequest, Metro_Assortment_V1_GetMostSearchedKeywordsResponse>
}

extension Metro_Assortment_V1_SearchKeywordsClientProtocol {
  public var serviceName: String {
    return "metro.assortment.v1.SearchKeywords"
  }

  /// Unary call to GetMostSearchedKeywords
  ///
  /// - Parameters:
  ///   - request: Request to send to GetMostSearchedKeywords.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getMostSearchedKeywords(
    _ request: Metro_Assortment_V1_GetMostSearchedKeywordsRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Assortment_V1_GetMostSearchedKeywordsRequest, Metro_Assortment_V1_GetMostSearchedKeywordsResponse> {
    return self.makeUnaryCall(
      path: Metro_Assortment_V1_SearchKeywordsClientMetadata.Methods.getMostSearchedKeywords.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMostSearchedKeywordsInterceptors() ?? []
    )
  }
}

@available(*, deprecated)
extension Metro_Assortment_V1_SearchKeywordsClient: @unchecked Sendable {}

@available(*, deprecated, renamed: "Metro_Assortment_V1_SearchKeywordsNIOClient")
public final class Metro_Assortment_V1_SearchKeywordsClient: Metro_Assortment_V1_SearchKeywordsClientProtocol {
  private let lock = Lock()
  private var _defaultCallOptions: CallOptions
  private var _interceptors: Metro_Assortment_V1_SearchKeywordsClientInterceptorFactoryProtocol?
  public let channel: GRPCChannel
  public var defaultCallOptions: CallOptions {
    get { self.lock.withLock { return self._defaultCallOptions } }
    set { self.lock.withLockVoid { self._defaultCallOptions = newValue } }
  }
  public var interceptors: Metro_Assortment_V1_SearchKeywordsClientInterceptorFactoryProtocol? {
    get { self.lock.withLock { return self._interceptors } }
    set { self.lock.withLockVoid { self._interceptors = newValue } }
  }

  /// Creates a client for the metro.assortment.v1.SearchKeywords service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Assortment_V1_SearchKeywordsClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self._defaultCallOptions = defaultCallOptions
    self._interceptors = interceptors
  }
}

public struct Metro_Assortment_V1_SearchKeywordsNIOClient: Metro_Assortment_V1_SearchKeywordsClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Metro_Assortment_V1_SearchKeywordsClientInterceptorFactoryProtocol?

  /// Creates a client for the metro.assortment.v1.SearchKeywords service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Assortment_V1_SearchKeywordsClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public protocol Metro_Assortment_V1_SearchKeywordsAsyncClientProtocol: GRPCClient {
  static var serviceDescriptor: GRPCServiceDescriptor { get }
  var interceptors: Metro_Assortment_V1_SearchKeywordsClientInterceptorFactoryProtocol? { get }

  func makeGetMostSearchedKeywordsCall(
    _ request: Metro_Assortment_V1_GetMostSearchedKeywordsRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Assortment_V1_GetMostSearchedKeywordsRequest, Metro_Assortment_V1_GetMostSearchedKeywordsResponse>
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Metro_Assortment_V1_SearchKeywordsAsyncClientProtocol {
  public static var serviceDescriptor: GRPCServiceDescriptor {
    return Metro_Assortment_V1_SearchKeywordsClientMetadata.serviceDescriptor
  }

  public var interceptors: Metro_Assortment_V1_SearchKeywordsClientInterceptorFactoryProtocol? {
    return nil
  }

  public func makeGetMostSearchedKeywordsCall(
    _ request: Metro_Assortment_V1_GetMostSearchedKeywordsRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Assortment_V1_GetMostSearchedKeywordsRequest, Metro_Assortment_V1_GetMostSearchedKeywordsResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Assortment_V1_SearchKeywordsClientMetadata.Methods.getMostSearchedKeywords.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMostSearchedKeywordsInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Metro_Assortment_V1_SearchKeywordsAsyncClientProtocol {
  public func getMostSearchedKeywords(
    _ request: Metro_Assortment_V1_GetMostSearchedKeywordsRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Assortment_V1_GetMostSearchedKeywordsResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Assortment_V1_SearchKeywordsClientMetadata.Methods.getMostSearchedKeywords.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMostSearchedKeywordsInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public struct Metro_Assortment_V1_SearchKeywordsAsyncClient: Metro_Assortment_V1_SearchKeywordsAsyncClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Metro_Assortment_V1_SearchKeywordsClientInterceptorFactoryProtocol?

  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Assortment_V1_SearchKeywordsClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

public protocol Metro_Assortment_V1_SearchKeywordsClientInterceptorFactoryProtocol: Sendable {

  /// - Returns: Interceptors to use when invoking 'getMostSearchedKeywords'.
  func makeGetMostSearchedKeywordsInterceptors() -> [ClientInterceptor<Metro_Assortment_V1_GetMostSearchedKeywordsRequest, Metro_Assortment_V1_GetMostSearchedKeywordsResponse>]
}

public enum Metro_Assortment_V1_SearchKeywordsClientMetadata {
  public static let serviceDescriptor = GRPCServiceDescriptor(
    name: "SearchKeywords",
    fullName: "metro.assortment.v1.SearchKeywords",
    methods: [
      Metro_Assortment_V1_SearchKeywordsClientMetadata.Methods.getMostSearchedKeywords,
    ]
  )

  public enum Methods {
    public static let getMostSearchedKeywords = GRPCMethodDescriptor(
      name: "GetMostSearchedKeywords",
      path: "/metro.assortment.v1.SearchKeywords/GetMostSearchedKeywords",
      type: GRPCCallType.unary
    )
  }
}

