//
// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the protocol buffer compiler.
// Source: app_store_statistics/app_store_statistics.private.v1.proto
//
import GRPC
import NIO
import NIOConcurrencyHelpers
import SwiftProtobuf


/// Usage: instantiate `Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClient`, then call methods of this protocol to make API calls.
public protocol Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientProtocol: GRPCClient {
  var serviceName: String { get }
  var interceptors: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientInterceptorFactoryProtocol? { get }

  func getDailyInstalls(
    _ request: Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsRequest, Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsResponse>

  func getTotalInstalls(
    _ request: Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsRequest, Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsResponse>
}

extension Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientProtocol {
  public var serviceName: String {
    return "appelis.app_store_statistics.private.v1.AppStoreStatisticsPrivate"
  }

  /// Unary call to GetDailyInstalls
  ///
  /// - Parameters:
  ///   - request: Request to send to GetDailyInstalls.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getDailyInstalls(
    _ request: Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsRequest, Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsResponse> {
    return self.makeUnaryCall(
      path: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientMetadata.Methods.getDailyInstalls.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetDailyInstallsInterceptors() ?? []
    )
  }

  /// Unary call to GetTotalInstalls
  ///
  /// - Parameters:
  ///   - request: Request to send to GetTotalInstalls.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getTotalInstalls(
    _ request: Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsRequest, Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsResponse> {
    return self.makeUnaryCall(
      path: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientMetadata.Methods.getTotalInstalls.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetTotalInstallsInterceptors() ?? []
    )
  }
}

@available(*, deprecated)
extension Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClient: @unchecked Sendable {}

@available(*, deprecated, renamed: "Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateNIOClient")
public final class Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClient: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientProtocol {
  private let lock = Lock()
  private var _defaultCallOptions: CallOptions
  private var _interceptors: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientInterceptorFactoryProtocol?
  public let channel: GRPCChannel
  public var defaultCallOptions: CallOptions {
    get { self.lock.withLock { return self._defaultCallOptions } }
    set { self.lock.withLockVoid { self._defaultCallOptions = newValue } }
  }
  public var interceptors: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientInterceptorFactoryProtocol? {
    get { self.lock.withLock { return self._interceptors } }
    set { self.lock.withLockVoid { self._interceptors = newValue } }
  }

  /// Creates a client for the appelis.app_store_statistics.private.v1.AppStoreStatisticsPrivate service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self._defaultCallOptions = defaultCallOptions
    self._interceptors = interceptors
  }
}

public struct Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateNIOClient: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientInterceptorFactoryProtocol?

  /// Creates a client for the appelis.app_store_statistics.private.v1.AppStoreStatisticsPrivate service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public protocol Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateAsyncClientProtocol: GRPCClient {
  static var serviceDescriptor: GRPCServiceDescriptor { get }
  var interceptors: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientInterceptorFactoryProtocol? { get }

  func makeGetDailyInstallsCall(
    _ request: Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsRequest, Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsResponse>

  func makeGetTotalInstallsCall(
    _ request: Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsRequest, Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsResponse>
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateAsyncClientProtocol {
  public static var serviceDescriptor: GRPCServiceDescriptor {
    return Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientMetadata.serviceDescriptor
  }

  public var interceptors: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientInterceptorFactoryProtocol? {
    return nil
  }

  public func makeGetDailyInstallsCall(
    _ request: Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsRequest, Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientMetadata.Methods.getDailyInstalls.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetDailyInstallsInterceptors() ?? []
    )
  }

  public func makeGetTotalInstallsCall(
    _ request: Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsRequest, Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientMetadata.Methods.getTotalInstalls.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetTotalInstallsInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateAsyncClientProtocol {
  public func getDailyInstalls(
    _ request: Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientMetadata.Methods.getDailyInstalls.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetDailyInstallsInterceptors() ?? []
    )
  }

  public func getTotalInstalls(
    _ request: Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientMetadata.Methods.getTotalInstalls.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetTotalInstallsInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public struct Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateAsyncClient: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateAsyncClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientInterceptorFactoryProtocol?

  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

public protocol Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientInterceptorFactoryProtocol: Sendable {

  /// - Returns: Interceptors to use when invoking 'getDailyInstalls'.
  func makeGetDailyInstallsInterceptors() -> [ClientInterceptor<Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsRequest, Appelis_AppStoreStatistics_Private_V1_GetDailyInstallsResponse>]

  /// - Returns: Interceptors to use when invoking 'getTotalInstalls'.
  func makeGetTotalInstallsInterceptors() -> [ClientInterceptor<Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsRequest, Appelis_AppStoreStatistics_Private_V1_GetTotalInstallsResponse>]
}

public enum Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientMetadata {
  public static let serviceDescriptor = GRPCServiceDescriptor(
    name: "AppStoreStatisticsPrivate",
    fullName: "appelis.app_store_statistics.private.v1.AppStoreStatisticsPrivate",
    methods: [
      Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientMetadata.Methods.getDailyInstalls,
      Appelis_AppStoreStatistics_Private_V1_AppStoreStatisticsPrivateClientMetadata.Methods.getTotalInstalls,
    ]
  )

  public enum Methods {
    public static let getDailyInstalls = GRPCMethodDescriptor(
      name: "GetDailyInstalls",
      path: "/appelis.app_store_statistics.private.v1.AppStoreStatisticsPrivate/GetDailyInstalls",
      type: GRPCCallType.unary
    )

    public static let getTotalInstalls = GRPCMethodDescriptor(
      name: "GetTotalInstalls",
      path: "/appelis.app_store_statistics.private.v1.AppStoreStatisticsPrivate/GetTotalInstalls",
      type: GRPCCallType.unary
    )
  }
}

