//
// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the protocol buffer compiler.
// Source: identity_service/webUsersService.v2.proto
//
import GRPC
import NIO
import NIOConcurrencyHelpers
import SwiftProtobuf


/// Usage: instantiate `Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2Client`, then call methods of this protocol to make API calls.
public protocol Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientProtocol: GRPCClient {
  var serviceName: String { get }
  var interceptors: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientInterceptorFactoryProtocol? { get }

  func addOrUpdateUser(
    _ request: Appelis_Identity_WebUser_V2_AddOrUpdateUserRequestV2,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Identity_WebUser_V2_AddOrUpdateUserRequestV2, Appelis_Identity_WebUser_V2_AddOrUpdateUserResponseV2>
}

extension Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientProtocol {
  public var serviceName: String {
    return "appelis.identity.webUser.v2.WebUsersPrivateServiceV2"
  }

  /// Add or update user in database. If is will be 0 new user will be added.
  /// Rpc will respect unique login field across all users.
  ///
  /// - Parameters:
  ///   - request: Request to send to AddOrUpdateUser.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func addOrUpdateUser(
    _ request: Appelis_Identity_WebUser_V2_AddOrUpdateUserRequestV2,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Identity_WebUser_V2_AddOrUpdateUserRequestV2, Appelis_Identity_WebUser_V2_AddOrUpdateUserResponseV2> {
    return self.makeUnaryCall(
      path: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientMetadata.Methods.addOrUpdateUser.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeAddOrUpdateUserInterceptors() ?? []
    )
  }
}

@available(*, deprecated)
extension Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2Client: @unchecked Sendable {}

@available(*, deprecated, renamed: "Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2NIOClient")
public final class Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2Client: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientProtocol {
  private let lock = Lock()
  private var _defaultCallOptions: CallOptions
  private var _interceptors: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientInterceptorFactoryProtocol?
  public let channel: GRPCChannel
  public var defaultCallOptions: CallOptions {
    get { self.lock.withLock { return self._defaultCallOptions } }
    set { self.lock.withLockVoid { self._defaultCallOptions = newValue } }
  }
  public var interceptors: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientInterceptorFactoryProtocol? {
    get { self.lock.withLock { return self._interceptors } }
    set { self.lock.withLockVoid { self._interceptors = newValue } }
  }

  /// Creates a client for the appelis.identity.webUser.v2.WebUsersPrivateServiceV2 service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self._defaultCallOptions = defaultCallOptions
    self._interceptors = interceptors
  }
}

public struct Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2NIOClient: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientInterceptorFactoryProtocol?

  /// Creates a client for the appelis.identity.webUser.v2.WebUsersPrivateServiceV2 service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public protocol Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2AsyncClientProtocol: GRPCClient {
  static var serviceDescriptor: GRPCServiceDescriptor { get }
  var interceptors: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientInterceptorFactoryProtocol? { get }

  func makeAddOrUpdateUserCall(
    _ request: Appelis_Identity_WebUser_V2_AddOrUpdateUserRequestV2,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Identity_WebUser_V2_AddOrUpdateUserRequestV2, Appelis_Identity_WebUser_V2_AddOrUpdateUserResponseV2>
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2AsyncClientProtocol {
  public static var serviceDescriptor: GRPCServiceDescriptor {
    return Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientMetadata.serviceDescriptor
  }

  public var interceptors: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientInterceptorFactoryProtocol? {
    return nil
  }

  public func makeAddOrUpdateUserCall(
    _ request: Appelis_Identity_WebUser_V2_AddOrUpdateUserRequestV2,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Identity_WebUser_V2_AddOrUpdateUserRequestV2, Appelis_Identity_WebUser_V2_AddOrUpdateUserResponseV2> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientMetadata.Methods.addOrUpdateUser.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeAddOrUpdateUserInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2AsyncClientProtocol {
  public func addOrUpdateUser(
    _ request: Appelis_Identity_WebUser_V2_AddOrUpdateUserRequestV2,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Identity_WebUser_V2_AddOrUpdateUserResponseV2 {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientMetadata.Methods.addOrUpdateUser.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeAddOrUpdateUserInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public struct Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2AsyncClient: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2AsyncClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientInterceptorFactoryProtocol?

  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

public protocol Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientInterceptorFactoryProtocol: Sendable {

  /// - Returns: Interceptors to use when invoking 'addOrUpdateUser'.
  func makeAddOrUpdateUserInterceptors() -> [ClientInterceptor<Appelis_Identity_WebUser_V2_AddOrUpdateUserRequestV2, Appelis_Identity_WebUser_V2_AddOrUpdateUserResponseV2>]
}

public enum Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientMetadata {
  public static let serviceDescriptor = GRPCServiceDescriptor(
    name: "WebUsersPrivateServiceV2",
    fullName: "appelis.identity.webUser.v2.WebUsersPrivateServiceV2",
    methods: [
      Appelis_Identity_WebUser_V2_WebUsersPrivateServiceV2ClientMetadata.Methods.addOrUpdateUser,
    ]
  )

  public enum Methods {
    public static let addOrUpdateUser = GRPCMethodDescriptor(
      name: "AddOrUpdateUser",
      path: "/appelis.identity.webUser.v2.WebUsersPrivateServiceV2/AddOrUpdateUser",
      type: GRPCCallType.unary
    )
  }
}
