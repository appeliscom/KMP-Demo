//
// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the protocol buffer compiler.
// Source: newsfeed_service/newsfeedService.public.v1.proto
//
import GRPC
import NIO
import NIOConcurrencyHelpers
import SwiftProtobuf


/// Usage: instantiate `Appelis_Newsfeed_V1_PublicClient`, then call methods of this protocol to make API calls.
public protocol Appelis_Newsfeed_V1_PublicClientProtocol: GRPCClient {
  var serviceName: String { get }
  var interceptors: Appelis_Newsfeed_V1_PublicClientInterceptorFactoryProtocol? { get }

  func getNewsFeed(
    _ request: Appelis_Newsfeed_V1_GetNewsFeedRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Newsfeed_V1_GetNewsFeedRequest, Appelis_Newsfeed_V1_GetNewsFeedResponse>

  func getNewsFeedItem(
    _ request: Appelis_Newsfeed_V1_GetNewsFeedItemRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Newsfeed_V1_GetNewsFeedItemRequest, Appelis_Newsfeed_V1_GetNewsFeedItemResponse>
}

extension Appelis_Newsfeed_V1_PublicClientProtocol {
  public var serviceName: String {
    return "appelis.newsfeed.v1.Public"
  }

  /// Unary call to GetNewsFeed
  ///
  /// - Parameters:
  ///   - request: Request to send to GetNewsFeed.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getNewsFeed(
    _ request: Appelis_Newsfeed_V1_GetNewsFeedRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Newsfeed_V1_GetNewsFeedRequest, Appelis_Newsfeed_V1_GetNewsFeedResponse> {
    return self.makeUnaryCall(
      path: Appelis_Newsfeed_V1_PublicClientMetadata.Methods.getNewsFeed.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetNewsFeedInterceptors() ?? []
    )
  }

  /// Unary call to GetNewsFeedItem
  ///
  /// - Parameters:
  ///   - request: Request to send to GetNewsFeedItem.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getNewsFeedItem(
    _ request: Appelis_Newsfeed_V1_GetNewsFeedItemRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Newsfeed_V1_GetNewsFeedItemRequest, Appelis_Newsfeed_V1_GetNewsFeedItemResponse> {
    return self.makeUnaryCall(
      path: Appelis_Newsfeed_V1_PublicClientMetadata.Methods.getNewsFeedItem.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetNewsFeedItemInterceptors() ?? []
    )
  }
}

@available(*, deprecated)
extension Appelis_Newsfeed_V1_PublicClient: @unchecked Sendable {}

@available(*, deprecated, renamed: "Appelis_Newsfeed_V1_PublicNIOClient")
public final class Appelis_Newsfeed_V1_PublicClient: Appelis_Newsfeed_V1_PublicClientProtocol {
  private let lock = Lock()
  private var _defaultCallOptions: CallOptions
  private var _interceptors: Appelis_Newsfeed_V1_PublicClientInterceptorFactoryProtocol?
  public let channel: GRPCChannel
  public var defaultCallOptions: CallOptions {
    get { self.lock.withLock { return self._defaultCallOptions } }
    set { self.lock.withLockVoid { self._defaultCallOptions = newValue } }
  }
  public var interceptors: Appelis_Newsfeed_V1_PublicClientInterceptorFactoryProtocol? {
    get { self.lock.withLock { return self._interceptors } }
    set { self.lock.withLockVoid { self._interceptors = newValue } }
  }

  /// Creates a client for the appelis.newsfeed.v1.Public service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Newsfeed_V1_PublicClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self._defaultCallOptions = defaultCallOptions
    self._interceptors = interceptors
  }
}

public struct Appelis_Newsfeed_V1_PublicNIOClient: Appelis_Newsfeed_V1_PublicClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Appelis_Newsfeed_V1_PublicClientInterceptorFactoryProtocol?

  /// Creates a client for the appelis.newsfeed.v1.Public service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Newsfeed_V1_PublicClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public protocol Appelis_Newsfeed_V1_PublicAsyncClientProtocol: GRPCClient {
  static var serviceDescriptor: GRPCServiceDescriptor { get }
  var interceptors: Appelis_Newsfeed_V1_PublicClientInterceptorFactoryProtocol? { get }

  func makeGetNewsFeedCall(
    _ request: Appelis_Newsfeed_V1_GetNewsFeedRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Newsfeed_V1_GetNewsFeedRequest, Appelis_Newsfeed_V1_GetNewsFeedResponse>

  func makeGetNewsFeedItemCall(
    _ request: Appelis_Newsfeed_V1_GetNewsFeedItemRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Newsfeed_V1_GetNewsFeedItemRequest, Appelis_Newsfeed_V1_GetNewsFeedItemResponse>
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Appelis_Newsfeed_V1_PublicAsyncClientProtocol {
  public static var serviceDescriptor: GRPCServiceDescriptor {
    return Appelis_Newsfeed_V1_PublicClientMetadata.serviceDescriptor
  }

  public var interceptors: Appelis_Newsfeed_V1_PublicClientInterceptorFactoryProtocol? {
    return nil
  }

  public func makeGetNewsFeedCall(
    _ request: Appelis_Newsfeed_V1_GetNewsFeedRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Newsfeed_V1_GetNewsFeedRequest, Appelis_Newsfeed_V1_GetNewsFeedResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Newsfeed_V1_PublicClientMetadata.Methods.getNewsFeed.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetNewsFeedInterceptors() ?? []
    )
  }

  public func makeGetNewsFeedItemCall(
    _ request: Appelis_Newsfeed_V1_GetNewsFeedItemRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Newsfeed_V1_GetNewsFeedItemRequest, Appelis_Newsfeed_V1_GetNewsFeedItemResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Newsfeed_V1_PublicClientMetadata.Methods.getNewsFeedItem.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetNewsFeedItemInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Appelis_Newsfeed_V1_PublicAsyncClientProtocol {
  public func getNewsFeed(
    _ request: Appelis_Newsfeed_V1_GetNewsFeedRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Newsfeed_V1_GetNewsFeedResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Newsfeed_V1_PublicClientMetadata.Methods.getNewsFeed.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetNewsFeedInterceptors() ?? []
    )
  }

  public func getNewsFeedItem(
    _ request: Appelis_Newsfeed_V1_GetNewsFeedItemRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Newsfeed_V1_GetNewsFeedItemResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Newsfeed_V1_PublicClientMetadata.Methods.getNewsFeedItem.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetNewsFeedItemInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public struct Appelis_Newsfeed_V1_PublicAsyncClient: Appelis_Newsfeed_V1_PublicAsyncClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Appelis_Newsfeed_V1_PublicClientInterceptorFactoryProtocol?

  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Newsfeed_V1_PublicClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

public protocol Appelis_Newsfeed_V1_PublicClientInterceptorFactoryProtocol: Sendable {

  /// - Returns: Interceptors to use when invoking 'getNewsFeed'.
  func makeGetNewsFeedInterceptors() -> [ClientInterceptor<Appelis_Newsfeed_V1_GetNewsFeedRequest, Appelis_Newsfeed_V1_GetNewsFeedResponse>]

  /// - Returns: Interceptors to use when invoking 'getNewsFeedItem'.
  func makeGetNewsFeedItemInterceptors() -> [ClientInterceptor<Appelis_Newsfeed_V1_GetNewsFeedItemRequest, Appelis_Newsfeed_V1_GetNewsFeedItemResponse>]
}

public enum Appelis_Newsfeed_V1_PublicClientMetadata {
  public static let serviceDescriptor = GRPCServiceDescriptor(
    name: "Public",
    fullName: "appelis.newsfeed.v1.Public",
    methods: [
      Appelis_Newsfeed_V1_PublicClientMetadata.Methods.getNewsFeed,
      Appelis_Newsfeed_V1_PublicClientMetadata.Methods.getNewsFeedItem,
    ]
  )

  public enum Methods {
    public static let getNewsFeed = GRPCMethodDescriptor(
      name: "GetNewsFeed",
      path: "/appelis.newsfeed.v1.Public/GetNewsFeed",
      type: GRPCCallType.unary
    )

    public static let getNewsFeedItem = GRPCMethodDescriptor(
      name: "GetNewsFeedItem",
      path: "/appelis.newsfeed.v1.Public/GetNewsFeedItem",
      type: GRPCCallType.unary
    )
  }
}

