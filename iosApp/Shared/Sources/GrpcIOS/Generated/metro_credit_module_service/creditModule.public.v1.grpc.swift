//
// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the protocol buffer compiler.
// Source: metro_credit_module_service/creditModule.public.v1.proto
//
import GRPC
import NIO
import NIOConcurrencyHelpers
import SwiftProtobuf


/// Usage: instantiate `Cz_Makro_Credit_V1_CreditModulePublicAdminClient`, then call methods of this protocol to make API calls.
public protocol Cz_Makro_Credit_V1_CreditModulePublicAdminClientProtocol: GRPCClient {
  var serviceName: String { get }
  var interceptors: Cz_Makro_Credit_V1_CreditModulePublicAdminClientInterceptorFactoryProtocol? { get }

  func getCompaniesActualStatus(
    _ request: Cz_Makro_Credit_V1_GetCompaniesActualStatusRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Cz_Makro_Credit_V1_GetCompaniesActualStatusRequest, Cz_Makro_Credit_V1_GetCompaniesActualStatusResponse>

  func setCompaniesActualStatus(
    _ request: Cz_Makro_Credit_V1_SetCompaniesActualStatusRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Cz_Makro_Credit_V1_SetCompaniesActualStatusRequest, Cz_Makro_Credit_V1_SetCompaniesActualStatusResponse>

  func updateCreditModulesChangeTime(
    _ request: Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeRequest, Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeResponse>

  func streamCreditClaimsCompaniesMapped(
    _ request: Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedRequest,
    callOptions: CallOptions?,
    handler: @escaping (Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedResponse) -> Void
  ) -> ServerStreamingCall<Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedRequest, Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedResponse>

  func deleteClaims(
    _ request: Cz_Makro_Credit_V1_DeleteClaimsRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Cz_Makro_Credit_V1_DeleteClaimsRequest, Cz_Makro_Credit_V1_DeleteClaimsResponse>

  func setClaims(
    _ request: Cz_Makro_Credit_V1_SetClaimsRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Cz_Makro_Credit_V1_SetClaimsRequest, Cz_Makro_Credit_V1_SetClaimsResponse>
}

extension Cz_Makro_Credit_V1_CreditModulePublicAdminClientProtocol {
  public var serviceName: String {
    return "cz.makro.credit.v1.CreditModulePublicAdmin"
  }

  /// Unary call to GetCompaniesActualStatus
  ///
  /// - Parameters:
  ///   - request: Request to send to GetCompaniesActualStatus.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getCompaniesActualStatus(
    _ request: Cz_Makro_Credit_V1_GetCompaniesActualStatusRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Cz_Makro_Credit_V1_GetCompaniesActualStatusRequest, Cz_Makro_Credit_V1_GetCompaniesActualStatusResponse> {
    return self.makeUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.getCompaniesActualStatus.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCompaniesActualStatusInterceptors() ?? []
    )
  }

  /// Unary call to SetCompaniesActualStatus
  ///
  /// - Parameters:
  ///   - request: Request to send to SetCompaniesActualStatus.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func setCompaniesActualStatus(
    _ request: Cz_Makro_Credit_V1_SetCompaniesActualStatusRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Cz_Makro_Credit_V1_SetCompaniesActualStatusRequest, Cz_Makro_Credit_V1_SetCompaniesActualStatusResponse> {
    return self.makeUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.setCompaniesActualStatus.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetCompaniesActualStatusInterceptors() ?? []
    )
  }

  /// Unary call to UpdateCreditModulesChangeTime
  ///
  /// - Parameters:
  ///   - request: Request to send to UpdateCreditModulesChangeTime.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func updateCreditModulesChangeTime(
    _ request: Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeRequest, Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeResponse> {
    return self.makeUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.updateCreditModulesChangeTime.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeUpdateCreditModulesChangeTimeInterceptors() ?? []
    )
  }

  /// Server streaming call to StreamCreditClaimsCompaniesMapped
  ///
  /// - Parameters:
  ///   - request: Request to send to StreamCreditClaimsCompaniesMapped.
  ///   - callOptions: Call options.
  ///   - handler: A closure called when each response is received from the server.
  /// - Returns: A `ServerStreamingCall` with futures for the metadata and status.
  public func streamCreditClaimsCompaniesMapped(
    _ request: Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedRequest,
    callOptions: CallOptions? = nil,
    handler: @escaping (Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedResponse) -> Void
  ) -> ServerStreamingCall<Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedRequest, Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedResponse> {
    return self.makeServerStreamingCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.streamCreditClaimsCompaniesMapped.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeStreamCreditClaimsCompaniesMappedInterceptors() ?? [],
      handler: handler
    )
  }

  /// Unary call to DeleteClaims
  ///
  /// - Parameters:
  ///   - request: Request to send to DeleteClaims.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func deleteClaims(
    _ request: Cz_Makro_Credit_V1_DeleteClaimsRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Cz_Makro_Credit_V1_DeleteClaimsRequest, Cz_Makro_Credit_V1_DeleteClaimsResponse> {
    return self.makeUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.deleteClaims.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteClaimsInterceptors() ?? []
    )
  }

  /// Unary call to SetClaims
  ///
  /// - Parameters:
  ///   - request: Request to send to SetClaims.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func setClaims(
    _ request: Cz_Makro_Credit_V1_SetClaimsRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Cz_Makro_Credit_V1_SetClaimsRequest, Cz_Makro_Credit_V1_SetClaimsResponse> {
    return self.makeUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.setClaims.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetClaimsInterceptors() ?? []
    )
  }
}

@available(*, deprecated)
extension Cz_Makro_Credit_V1_CreditModulePublicAdminClient: @unchecked Sendable {}

@available(*, deprecated, renamed: "Cz_Makro_Credit_V1_CreditModulePublicAdminNIOClient")
public final class Cz_Makro_Credit_V1_CreditModulePublicAdminClient: Cz_Makro_Credit_V1_CreditModulePublicAdminClientProtocol {
  private let lock = Lock()
  private var _defaultCallOptions: CallOptions
  private var _interceptors: Cz_Makro_Credit_V1_CreditModulePublicAdminClientInterceptorFactoryProtocol?
  public let channel: GRPCChannel
  public var defaultCallOptions: CallOptions {
    get { self.lock.withLock { return self._defaultCallOptions } }
    set { self.lock.withLockVoid { self._defaultCallOptions = newValue } }
  }
  public var interceptors: Cz_Makro_Credit_V1_CreditModulePublicAdminClientInterceptorFactoryProtocol? {
    get { self.lock.withLock { return self._interceptors } }
    set { self.lock.withLockVoid { self._interceptors = newValue } }
  }

  /// Creates a client for the cz.makro.credit.v1.CreditModulePublicAdmin service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Cz_Makro_Credit_V1_CreditModulePublicAdminClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self._defaultCallOptions = defaultCallOptions
    self._interceptors = interceptors
  }
}

public struct Cz_Makro_Credit_V1_CreditModulePublicAdminNIOClient: Cz_Makro_Credit_V1_CreditModulePublicAdminClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Cz_Makro_Credit_V1_CreditModulePublicAdminClientInterceptorFactoryProtocol?

  /// Creates a client for the cz.makro.credit.v1.CreditModulePublicAdmin service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Cz_Makro_Credit_V1_CreditModulePublicAdminClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public protocol Cz_Makro_Credit_V1_CreditModulePublicAdminAsyncClientProtocol: GRPCClient {
  static var serviceDescriptor: GRPCServiceDescriptor { get }
  var interceptors: Cz_Makro_Credit_V1_CreditModulePublicAdminClientInterceptorFactoryProtocol? { get }

  func makeGetCompaniesActualStatusCall(
    _ request: Cz_Makro_Credit_V1_GetCompaniesActualStatusRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Cz_Makro_Credit_V1_GetCompaniesActualStatusRequest, Cz_Makro_Credit_V1_GetCompaniesActualStatusResponse>

  func makeSetCompaniesActualStatusCall(
    _ request: Cz_Makro_Credit_V1_SetCompaniesActualStatusRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Cz_Makro_Credit_V1_SetCompaniesActualStatusRequest, Cz_Makro_Credit_V1_SetCompaniesActualStatusResponse>

  func makeUpdateCreditModulesChangeTimeCall(
    _ request: Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeRequest, Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeResponse>

  func makeStreamCreditClaimsCompaniesMappedCall(
    _ request: Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncServerStreamingCall<Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedRequest, Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedResponse>

  func makeDeleteClaimsCall(
    _ request: Cz_Makro_Credit_V1_DeleteClaimsRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Cz_Makro_Credit_V1_DeleteClaimsRequest, Cz_Makro_Credit_V1_DeleteClaimsResponse>

  func makeSetClaimsCall(
    _ request: Cz_Makro_Credit_V1_SetClaimsRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Cz_Makro_Credit_V1_SetClaimsRequest, Cz_Makro_Credit_V1_SetClaimsResponse>
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Cz_Makro_Credit_V1_CreditModulePublicAdminAsyncClientProtocol {
  public static var serviceDescriptor: GRPCServiceDescriptor {
    return Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.serviceDescriptor
  }

  public var interceptors: Cz_Makro_Credit_V1_CreditModulePublicAdminClientInterceptorFactoryProtocol? {
    return nil
  }

  public func makeGetCompaniesActualStatusCall(
    _ request: Cz_Makro_Credit_V1_GetCompaniesActualStatusRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Cz_Makro_Credit_V1_GetCompaniesActualStatusRequest, Cz_Makro_Credit_V1_GetCompaniesActualStatusResponse> {
    return self.makeAsyncUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.getCompaniesActualStatus.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCompaniesActualStatusInterceptors() ?? []
    )
  }

  public func makeSetCompaniesActualStatusCall(
    _ request: Cz_Makro_Credit_V1_SetCompaniesActualStatusRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Cz_Makro_Credit_V1_SetCompaniesActualStatusRequest, Cz_Makro_Credit_V1_SetCompaniesActualStatusResponse> {
    return self.makeAsyncUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.setCompaniesActualStatus.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetCompaniesActualStatusInterceptors() ?? []
    )
  }

  public func makeUpdateCreditModulesChangeTimeCall(
    _ request: Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeRequest, Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeResponse> {
    return self.makeAsyncUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.updateCreditModulesChangeTime.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeUpdateCreditModulesChangeTimeInterceptors() ?? []
    )
  }

  public func makeStreamCreditClaimsCompaniesMappedCall(
    _ request: Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncServerStreamingCall<Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedRequest, Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedResponse> {
    return self.makeAsyncServerStreamingCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.streamCreditClaimsCompaniesMapped.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeStreamCreditClaimsCompaniesMappedInterceptors() ?? []
    )
  }

  public func makeDeleteClaimsCall(
    _ request: Cz_Makro_Credit_V1_DeleteClaimsRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Cz_Makro_Credit_V1_DeleteClaimsRequest, Cz_Makro_Credit_V1_DeleteClaimsResponse> {
    return self.makeAsyncUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.deleteClaims.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteClaimsInterceptors() ?? []
    )
  }

  public func makeSetClaimsCall(
    _ request: Cz_Makro_Credit_V1_SetClaimsRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Cz_Makro_Credit_V1_SetClaimsRequest, Cz_Makro_Credit_V1_SetClaimsResponse> {
    return self.makeAsyncUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.setClaims.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetClaimsInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Cz_Makro_Credit_V1_CreditModulePublicAdminAsyncClientProtocol {
  public func getCompaniesActualStatus(
    _ request: Cz_Makro_Credit_V1_GetCompaniesActualStatusRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Cz_Makro_Credit_V1_GetCompaniesActualStatusResponse {
    return try await self.performAsyncUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.getCompaniesActualStatus.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCompaniesActualStatusInterceptors() ?? []
    )
  }

  public func setCompaniesActualStatus(
    _ request: Cz_Makro_Credit_V1_SetCompaniesActualStatusRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Cz_Makro_Credit_V1_SetCompaniesActualStatusResponse {
    return try await self.performAsyncUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.setCompaniesActualStatus.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetCompaniesActualStatusInterceptors() ?? []
    )
  }

  public func updateCreditModulesChangeTime(
    _ request: Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeResponse {
    return try await self.performAsyncUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.updateCreditModulesChangeTime.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeUpdateCreditModulesChangeTimeInterceptors() ?? []
    )
  }

  public func streamCreditClaimsCompaniesMapped(
    _ request: Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncResponseStream<Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedResponse> {
    return self.performAsyncServerStreamingCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.streamCreditClaimsCompaniesMapped.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeStreamCreditClaimsCompaniesMappedInterceptors() ?? []
    )
  }

  public func deleteClaims(
    _ request: Cz_Makro_Credit_V1_DeleteClaimsRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Cz_Makro_Credit_V1_DeleteClaimsResponse {
    return try await self.performAsyncUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.deleteClaims.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteClaimsInterceptors() ?? []
    )
  }

  public func setClaims(
    _ request: Cz_Makro_Credit_V1_SetClaimsRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Cz_Makro_Credit_V1_SetClaimsResponse {
    return try await self.performAsyncUnaryCall(
      path: Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.setClaims.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetClaimsInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public struct Cz_Makro_Credit_V1_CreditModulePublicAdminAsyncClient: Cz_Makro_Credit_V1_CreditModulePublicAdminAsyncClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Cz_Makro_Credit_V1_CreditModulePublicAdminClientInterceptorFactoryProtocol?

  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Cz_Makro_Credit_V1_CreditModulePublicAdminClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

public protocol Cz_Makro_Credit_V1_CreditModulePublicAdminClientInterceptorFactoryProtocol: Sendable {

  /// - Returns: Interceptors to use when invoking 'getCompaniesActualStatus'.
  func makeGetCompaniesActualStatusInterceptors() -> [ClientInterceptor<Cz_Makro_Credit_V1_GetCompaniesActualStatusRequest, Cz_Makro_Credit_V1_GetCompaniesActualStatusResponse>]

  /// - Returns: Interceptors to use when invoking 'setCompaniesActualStatus'.
  func makeSetCompaniesActualStatusInterceptors() -> [ClientInterceptor<Cz_Makro_Credit_V1_SetCompaniesActualStatusRequest, Cz_Makro_Credit_V1_SetCompaniesActualStatusResponse>]

  /// - Returns: Interceptors to use when invoking 'updateCreditModulesChangeTime'.
  func makeUpdateCreditModulesChangeTimeInterceptors() -> [ClientInterceptor<Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeRequest, Cz_Makro_Credit_V1_UpdateCreditModulesChangeTimeResponse>]

  /// - Returns: Interceptors to use when invoking 'streamCreditClaimsCompaniesMapped'.
  func makeStreamCreditClaimsCompaniesMappedInterceptors() -> [ClientInterceptor<Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedRequest, Cz_Makro_Credit_V1_StreamCreditClaimsCompaniesMappedResponse>]

  /// - Returns: Interceptors to use when invoking 'deleteClaims'.
  func makeDeleteClaimsInterceptors() -> [ClientInterceptor<Cz_Makro_Credit_V1_DeleteClaimsRequest, Cz_Makro_Credit_V1_DeleteClaimsResponse>]

  /// - Returns: Interceptors to use when invoking 'setClaims'.
  func makeSetClaimsInterceptors() -> [ClientInterceptor<Cz_Makro_Credit_V1_SetClaimsRequest, Cz_Makro_Credit_V1_SetClaimsResponse>]
}

public enum Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata {
  public static let serviceDescriptor = GRPCServiceDescriptor(
    name: "CreditModulePublicAdmin",
    fullName: "cz.makro.credit.v1.CreditModulePublicAdmin",
    methods: [
      Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.getCompaniesActualStatus,
      Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.setCompaniesActualStatus,
      Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.updateCreditModulesChangeTime,
      Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.streamCreditClaimsCompaniesMapped,
      Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.deleteClaims,
      Cz_Makro_Credit_V1_CreditModulePublicAdminClientMetadata.Methods.setClaims,
    ]
  )

  public enum Methods {
    public static let getCompaniesActualStatus = GRPCMethodDescriptor(
      name: "GetCompaniesActualStatus",
      path: "/cz.makro.credit.v1.CreditModulePublicAdmin/GetCompaniesActualStatus",
      type: GRPCCallType.unary
    )

    public static let setCompaniesActualStatus = GRPCMethodDescriptor(
      name: "SetCompaniesActualStatus",
      path: "/cz.makro.credit.v1.CreditModulePublicAdmin/SetCompaniesActualStatus",
      type: GRPCCallType.unary
    )

    public static let updateCreditModulesChangeTime = GRPCMethodDescriptor(
      name: "UpdateCreditModulesChangeTime",
      path: "/cz.makro.credit.v1.CreditModulePublicAdmin/UpdateCreditModulesChangeTime",
      type: GRPCCallType.unary
    )

    public static let streamCreditClaimsCompaniesMapped = GRPCMethodDescriptor(
      name: "StreamCreditClaimsCompaniesMapped",
      path: "/cz.makro.credit.v1.CreditModulePublicAdmin/StreamCreditClaimsCompaniesMapped",
      type: GRPCCallType.serverStreaming
    )

    public static let deleteClaims = GRPCMethodDescriptor(
      name: "DeleteClaims",
      path: "/cz.makro.credit.v1.CreditModulePublicAdmin/DeleteClaims",
      type: GRPCCallType.unary
    )

    public static let setClaims = GRPCMethodDescriptor(
      name: "SetClaims",
      path: "/cz.makro.credit.v1.CreditModulePublicAdmin/SetClaims",
      type: GRPCCallType.unary
    )
  }
}

