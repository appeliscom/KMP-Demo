//
// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the protocol buffer compiler.
// Source: user_favourites/userFavourites.analytics.v1.proto
//
import GRPC
import NIO
import NIOConcurrencyHelpers
import SwiftProtobuf


/// Usage: instantiate `Appelis_Favourites_V1_AnalyticsClient`, then call methods of this protocol to make API calls.
public protocol Appelis_Favourites_V1_AnalyticsClientProtocol: GRPCClient {
  var serviceName: String { get }
  var interceptors: Appelis_Favourites_V1_AnalyticsClientInterceptorFactoryProtocol? { get }

  func getMostFavourited(
    _ request: Appelis_Favourites_V1_GetMostFavouritedRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Favourites_V1_GetMostFavouritedRequest, Appelis_Favourites_V1_GetMostFavouritedResponse>
}

extension Appelis_Favourites_V1_AnalyticsClientProtocol {
  public var serviceName: String {
    return "appelis.favourites.v1.Analytics"
  }

  /// Unary call to GetMostFavourited
  ///
  /// - Parameters:
  ///   - request: Request to send to GetMostFavourited.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getMostFavourited(
    _ request: Appelis_Favourites_V1_GetMostFavouritedRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Favourites_V1_GetMostFavouritedRequest, Appelis_Favourites_V1_GetMostFavouritedResponse> {
    return self.makeUnaryCall(
      path: Appelis_Favourites_V1_AnalyticsClientMetadata.Methods.getMostFavourited.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMostFavouritedInterceptors() ?? []
    )
  }
}

@available(*, deprecated)
extension Appelis_Favourites_V1_AnalyticsClient: @unchecked Sendable {}

@available(*, deprecated, renamed: "Appelis_Favourites_V1_AnalyticsNIOClient")
public final class Appelis_Favourites_V1_AnalyticsClient: Appelis_Favourites_V1_AnalyticsClientProtocol {
  private let lock = Lock()
  private var _defaultCallOptions: CallOptions
  private var _interceptors: Appelis_Favourites_V1_AnalyticsClientInterceptorFactoryProtocol?
  public let channel: GRPCChannel
  public var defaultCallOptions: CallOptions {
    get { self.lock.withLock { return self._defaultCallOptions } }
    set { self.lock.withLockVoid { self._defaultCallOptions = newValue } }
  }
  public var interceptors: Appelis_Favourites_V1_AnalyticsClientInterceptorFactoryProtocol? {
    get { self.lock.withLock { return self._interceptors } }
    set { self.lock.withLockVoid { self._interceptors = newValue } }
  }

  /// Creates a client for the appelis.favourites.v1.Analytics service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Favourites_V1_AnalyticsClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self._defaultCallOptions = defaultCallOptions
    self._interceptors = interceptors
  }
}

public struct Appelis_Favourites_V1_AnalyticsNIOClient: Appelis_Favourites_V1_AnalyticsClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Appelis_Favourites_V1_AnalyticsClientInterceptorFactoryProtocol?

  /// Creates a client for the appelis.favourites.v1.Analytics service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Favourites_V1_AnalyticsClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public protocol Appelis_Favourites_V1_AnalyticsAsyncClientProtocol: GRPCClient {
  static var serviceDescriptor: GRPCServiceDescriptor { get }
  var interceptors: Appelis_Favourites_V1_AnalyticsClientInterceptorFactoryProtocol? { get }

  func makeGetMostFavouritedCall(
    _ request: Appelis_Favourites_V1_GetMostFavouritedRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Favourites_V1_GetMostFavouritedRequest, Appelis_Favourites_V1_GetMostFavouritedResponse>
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Appelis_Favourites_V1_AnalyticsAsyncClientProtocol {
  public static var serviceDescriptor: GRPCServiceDescriptor {
    return Appelis_Favourites_V1_AnalyticsClientMetadata.serviceDescriptor
  }

  public var interceptors: Appelis_Favourites_V1_AnalyticsClientInterceptorFactoryProtocol? {
    return nil
  }

  public func makeGetMostFavouritedCall(
    _ request: Appelis_Favourites_V1_GetMostFavouritedRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Favourites_V1_GetMostFavouritedRequest, Appelis_Favourites_V1_GetMostFavouritedResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Favourites_V1_AnalyticsClientMetadata.Methods.getMostFavourited.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMostFavouritedInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Appelis_Favourites_V1_AnalyticsAsyncClientProtocol {
  public func getMostFavourited(
    _ request: Appelis_Favourites_V1_GetMostFavouritedRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Favourites_V1_GetMostFavouritedResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Favourites_V1_AnalyticsClientMetadata.Methods.getMostFavourited.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMostFavouritedInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public struct Appelis_Favourites_V1_AnalyticsAsyncClient: Appelis_Favourites_V1_AnalyticsAsyncClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Appelis_Favourites_V1_AnalyticsClientInterceptorFactoryProtocol?

  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Favourites_V1_AnalyticsClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

public protocol Appelis_Favourites_V1_AnalyticsClientInterceptorFactoryProtocol: Sendable {

  /// - Returns: Interceptors to use when invoking 'getMostFavourited'.
  func makeGetMostFavouritedInterceptors() -> [ClientInterceptor<Appelis_Favourites_V1_GetMostFavouritedRequest, Appelis_Favourites_V1_GetMostFavouritedResponse>]
}

public enum Appelis_Favourites_V1_AnalyticsClientMetadata {
  public static let serviceDescriptor = GRPCServiceDescriptor(
    name: "Analytics",
    fullName: "appelis.favourites.v1.Analytics",
    methods: [
      Appelis_Favourites_V1_AnalyticsClientMetadata.Methods.getMostFavourited,
    ]
  )

  public enum Methods {
    public static let getMostFavourited = GRPCMethodDescriptor(
      name: "GetMostFavourited",
      path: "/appelis.favourites.v1.Analytics/GetMostFavourited",
      type: GRPCCallType.unary
    )
  }
}

