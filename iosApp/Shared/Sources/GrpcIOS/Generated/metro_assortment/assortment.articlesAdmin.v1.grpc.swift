//
// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the protocol buffer compiler.
// Source: metro_assortment/assortment.articlesAdmin.v1.proto
//
import GRPC
import NIO
import NIOConcurrencyHelpers
import SwiftProtobuf


/// Usage: instantiate `Metro_Assortment_V1_ArticlesAdminClient`, then call methods of this protocol to make API calls.
public protocol Metro_Assortment_V1_ArticlesAdminClientProtocol: GRPCClient {
  var serviceName: String { get }
  var interceptors: Metro_Assortment_V1_ArticlesAdminClientInterceptorFactoryProtocol? { get }

  func setArticles(
    _ request: Metro_Assortment_V1_SetArticlesRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Assortment_V1_SetArticlesRequest, Metro_Assortment_V1_ChangeArticlesResponse>

  func deleteArticles(
    _ request: Metro_Assortment_V1_DeleteArticlesRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Assortment_V1_DeleteArticlesRequest, Metro_Assortment_V1_ChangeArticlesResponse>

  func streamArticles(
    _ request: Metro_Assortment_V1_StreamArticlesRequest,
    callOptions: CallOptions?,
    handler: @escaping (Metro_Assortment_V1_StreamArticlesResponse) -> Void
  ) -> ServerStreamingCall<Metro_Assortment_V1_StreamArticlesRequest, Metro_Assortment_V1_StreamArticlesResponse>
}

extension Metro_Assortment_V1_ArticlesAdminClientProtocol {
  public var serviceName: String {
    return "metro.assortment.v1.ArticlesAdmin"
  }

  /// Unary call to SetArticles
  ///
  /// - Parameters:
  ///   - request: Request to send to SetArticles.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func setArticles(
    _ request: Metro_Assortment_V1_SetArticlesRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Assortment_V1_SetArticlesRequest, Metro_Assortment_V1_ChangeArticlesResponse> {
    return self.makeUnaryCall(
      path: Metro_Assortment_V1_ArticlesAdminClientMetadata.Methods.setArticles.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetArticlesInterceptors() ?? []
    )
  }

  /// Unary call to DeleteArticles
  ///
  /// - Parameters:
  ///   - request: Request to send to DeleteArticles.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func deleteArticles(
    _ request: Metro_Assortment_V1_DeleteArticlesRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Assortment_V1_DeleteArticlesRequest, Metro_Assortment_V1_ChangeArticlesResponse> {
    return self.makeUnaryCall(
      path: Metro_Assortment_V1_ArticlesAdminClientMetadata.Methods.deleteArticles.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteArticlesInterceptors() ?? []
    )
  }

  /// Server streaming call to StreamArticles
  ///
  /// - Parameters:
  ///   - request: Request to send to StreamArticles.
  ///   - callOptions: Call options.
  ///   - handler: A closure called when each response is received from the server.
  /// - Returns: A `ServerStreamingCall` with futures for the metadata and status.
  public func streamArticles(
    _ request: Metro_Assortment_V1_StreamArticlesRequest,
    callOptions: CallOptions? = nil,
    handler: @escaping (Metro_Assortment_V1_StreamArticlesResponse) -> Void
  ) -> ServerStreamingCall<Metro_Assortment_V1_StreamArticlesRequest, Metro_Assortment_V1_StreamArticlesResponse> {
    return self.makeServerStreamingCall(
      path: Metro_Assortment_V1_ArticlesAdminClientMetadata.Methods.streamArticles.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeStreamArticlesInterceptors() ?? [],
      handler: handler
    )
  }
}

@available(*, deprecated)
extension Metro_Assortment_V1_ArticlesAdminClient: @unchecked Sendable {}

@available(*, deprecated, renamed: "Metro_Assortment_V1_ArticlesAdminNIOClient")
public final class Metro_Assortment_V1_ArticlesAdminClient: Metro_Assortment_V1_ArticlesAdminClientProtocol {
  private let lock = Lock()
  private var _defaultCallOptions: CallOptions
  private var _interceptors: Metro_Assortment_V1_ArticlesAdminClientInterceptorFactoryProtocol?
  public let channel: GRPCChannel
  public var defaultCallOptions: CallOptions {
    get { self.lock.withLock { return self._defaultCallOptions } }
    set { self.lock.withLockVoid { self._defaultCallOptions = newValue } }
  }
  public var interceptors: Metro_Assortment_V1_ArticlesAdminClientInterceptorFactoryProtocol? {
    get { self.lock.withLock { return self._interceptors } }
    set { self.lock.withLockVoid { self._interceptors = newValue } }
  }

  /// Creates a client for the metro.assortment.v1.ArticlesAdmin service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Assortment_V1_ArticlesAdminClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self._defaultCallOptions = defaultCallOptions
    self._interceptors = interceptors
  }
}

public struct Metro_Assortment_V1_ArticlesAdminNIOClient: Metro_Assortment_V1_ArticlesAdminClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Metro_Assortment_V1_ArticlesAdminClientInterceptorFactoryProtocol?

  /// Creates a client for the metro.assortment.v1.ArticlesAdmin service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Assortment_V1_ArticlesAdminClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public protocol Metro_Assortment_V1_ArticlesAdminAsyncClientProtocol: GRPCClient {
  static var serviceDescriptor: GRPCServiceDescriptor { get }
  var interceptors: Metro_Assortment_V1_ArticlesAdminClientInterceptorFactoryProtocol? { get }

  func makeSetArticlesCall(
    _ request: Metro_Assortment_V1_SetArticlesRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Assortment_V1_SetArticlesRequest, Metro_Assortment_V1_ChangeArticlesResponse>

  func makeDeleteArticlesCall(
    _ request: Metro_Assortment_V1_DeleteArticlesRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Assortment_V1_DeleteArticlesRequest, Metro_Assortment_V1_ChangeArticlesResponse>

  func makeStreamArticlesCall(
    _ request: Metro_Assortment_V1_StreamArticlesRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncServerStreamingCall<Metro_Assortment_V1_StreamArticlesRequest, Metro_Assortment_V1_StreamArticlesResponse>
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Metro_Assortment_V1_ArticlesAdminAsyncClientProtocol {
  public static var serviceDescriptor: GRPCServiceDescriptor {
    return Metro_Assortment_V1_ArticlesAdminClientMetadata.serviceDescriptor
  }

  public var interceptors: Metro_Assortment_V1_ArticlesAdminClientInterceptorFactoryProtocol? {
    return nil
  }

  public func makeSetArticlesCall(
    _ request: Metro_Assortment_V1_SetArticlesRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Assortment_V1_SetArticlesRequest, Metro_Assortment_V1_ChangeArticlesResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Assortment_V1_ArticlesAdminClientMetadata.Methods.setArticles.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetArticlesInterceptors() ?? []
    )
  }

  public func makeDeleteArticlesCall(
    _ request: Metro_Assortment_V1_DeleteArticlesRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Assortment_V1_DeleteArticlesRequest, Metro_Assortment_V1_ChangeArticlesResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Assortment_V1_ArticlesAdminClientMetadata.Methods.deleteArticles.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteArticlesInterceptors() ?? []
    )
  }

  public func makeStreamArticlesCall(
    _ request: Metro_Assortment_V1_StreamArticlesRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncServerStreamingCall<Metro_Assortment_V1_StreamArticlesRequest, Metro_Assortment_V1_StreamArticlesResponse> {
    return self.makeAsyncServerStreamingCall(
      path: Metro_Assortment_V1_ArticlesAdminClientMetadata.Methods.streamArticles.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeStreamArticlesInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Metro_Assortment_V1_ArticlesAdminAsyncClientProtocol {
  public func setArticles(
    _ request: Metro_Assortment_V1_SetArticlesRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Assortment_V1_ChangeArticlesResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Assortment_V1_ArticlesAdminClientMetadata.Methods.setArticles.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetArticlesInterceptors() ?? []
    )
  }

  public func deleteArticles(
    _ request: Metro_Assortment_V1_DeleteArticlesRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Assortment_V1_ChangeArticlesResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Assortment_V1_ArticlesAdminClientMetadata.Methods.deleteArticles.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteArticlesInterceptors() ?? []
    )
  }

  public func streamArticles(
    _ request: Metro_Assortment_V1_StreamArticlesRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncResponseStream<Metro_Assortment_V1_StreamArticlesResponse> {
    return self.performAsyncServerStreamingCall(
      path: Metro_Assortment_V1_ArticlesAdminClientMetadata.Methods.streamArticles.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeStreamArticlesInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public struct Metro_Assortment_V1_ArticlesAdminAsyncClient: Metro_Assortment_V1_ArticlesAdminAsyncClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Metro_Assortment_V1_ArticlesAdminClientInterceptorFactoryProtocol?

  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Assortment_V1_ArticlesAdminClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

public protocol Metro_Assortment_V1_ArticlesAdminClientInterceptorFactoryProtocol: Sendable {

  /// - Returns: Interceptors to use when invoking 'setArticles'.
  func makeSetArticlesInterceptors() -> [ClientInterceptor<Metro_Assortment_V1_SetArticlesRequest, Metro_Assortment_V1_ChangeArticlesResponse>]

  /// - Returns: Interceptors to use when invoking 'deleteArticles'.
  func makeDeleteArticlesInterceptors() -> [ClientInterceptor<Metro_Assortment_V1_DeleteArticlesRequest, Metro_Assortment_V1_ChangeArticlesResponse>]

  /// - Returns: Interceptors to use when invoking 'streamArticles'.
  func makeStreamArticlesInterceptors() -> [ClientInterceptor<Metro_Assortment_V1_StreamArticlesRequest, Metro_Assortment_V1_StreamArticlesResponse>]
}

public enum Metro_Assortment_V1_ArticlesAdminClientMetadata {
  public static let serviceDescriptor = GRPCServiceDescriptor(
    name: "ArticlesAdmin",
    fullName: "metro.assortment.v1.ArticlesAdmin",
    methods: [
      Metro_Assortment_V1_ArticlesAdminClientMetadata.Methods.setArticles,
      Metro_Assortment_V1_ArticlesAdminClientMetadata.Methods.deleteArticles,
      Metro_Assortment_V1_ArticlesAdminClientMetadata.Methods.streamArticles,
    ]
  )

  public enum Methods {
    public static let setArticles = GRPCMethodDescriptor(
      name: "SetArticles",
      path: "/metro.assortment.v1.ArticlesAdmin/SetArticles",
      type: GRPCCallType.unary
    )

    public static let deleteArticles = GRPCMethodDescriptor(
      name: "DeleteArticles",
      path: "/metro.assortment.v1.ArticlesAdmin/DeleteArticles",
      type: GRPCCallType.unary
    )

    public static let streamArticles = GRPCMethodDescriptor(
      name: "StreamArticles",
      path: "/metro.assortment.v1.ArticlesAdmin/StreamArticles",
      type: GRPCCallType.serverStreaming
    )
  }
}
