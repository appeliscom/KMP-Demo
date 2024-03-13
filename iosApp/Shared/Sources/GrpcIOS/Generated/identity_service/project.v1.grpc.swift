//
// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the protocol buffer compiler.
// Source: identity_service/project.v1.proto
//
import GRPC
import NIO
import NIOConcurrencyHelpers
import SwiftProtobuf


/// Public api with tokens.
///
/// Usage: instantiate `Appelis_Identity_V1_ProjectSettingsServiceClient`, then call methods of this protocol to make API calls.
public protocol Appelis_Identity_V1_ProjectSettingsServiceClientProtocol: GRPCClient {
  var serviceName: String { get }
  var interceptors: Appelis_Identity_V1_ProjectSettingsServiceClientInterceptorFactoryProtocol? { get }

  func getAllowedProjects(
    _ request: Appelis_Identity_Common_V1_Token,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Identity_Common_V1_Token, Appelis_Identity_V1_ProjectsResponse>

  func projectSettings(
    _ request: Appelis_Identity_V1_ProjectSettingsRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Identity_V1_ProjectSettingsRequest, Appelis_Identity_V1_ProjectsResponse>
}

extension Appelis_Identity_V1_ProjectSettingsServiceClientProtocol {
  public var serviceName: String {
    return "appelis.identity.v1.ProjectSettingsService"
  }

  /// Unary call to GetAllowedProjects
  ///
  /// - Parameters:
  ///   - request: Request to send to GetAllowedProjects.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getAllowedProjects(
    _ request: Appelis_Identity_Common_V1_Token,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Identity_Common_V1_Token, Appelis_Identity_V1_ProjectsResponse> {
    return self.makeUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsServiceClientMetadata.Methods.getAllowedProjects.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAllowedProjectsInterceptors() ?? []
    )
  }

  /// Unary call to ProjectSettings
  ///
  /// - Parameters:
  ///   - request: Request to send to ProjectSettings.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func projectSettings(
    _ request: Appelis_Identity_V1_ProjectSettingsRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Identity_V1_ProjectSettingsRequest, Appelis_Identity_V1_ProjectsResponse> {
    return self.makeUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsServiceClientMetadata.Methods.projectSettings.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeProjectSettingsInterceptors() ?? []
    )
  }
}

@available(*, deprecated)
extension Appelis_Identity_V1_ProjectSettingsServiceClient: @unchecked Sendable {}

@available(*, deprecated, renamed: "Appelis_Identity_V1_ProjectSettingsServiceNIOClient")
public final class Appelis_Identity_V1_ProjectSettingsServiceClient: Appelis_Identity_V1_ProjectSettingsServiceClientProtocol {
  private let lock = Lock()
  private var _defaultCallOptions: CallOptions
  private var _interceptors: Appelis_Identity_V1_ProjectSettingsServiceClientInterceptorFactoryProtocol?
  public let channel: GRPCChannel
  public var defaultCallOptions: CallOptions {
    get { self.lock.withLock { return self._defaultCallOptions } }
    set { self.lock.withLockVoid { self._defaultCallOptions = newValue } }
  }
  public var interceptors: Appelis_Identity_V1_ProjectSettingsServiceClientInterceptorFactoryProtocol? {
    get { self.lock.withLock { return self._interceptors } }
    set { self.lock.withLockVoid { self._interceptors = newValue } }
  }

  /// Creates a client for the appelis.identity.v1.ProjectSettingsService service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Identity_V1_ProjectSettingsServiceClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self._defaultCallOptions = defaultCallOptions
    self._interceptors = interceptors
  }
}

public struct Appelis_Identity_V1_ProjectSettingsServiceNIOClient: Appelis_Identity_V1_ProjectSettingsServiceClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Appelis_Identity_V1_ProjectSettingsServiceClientInterceptorFactoryProtocol?

  /// Creates a client for the appelis.identity.v1.ProjectSettingsService service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Identity_V1_ProjectSettingsServiceClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

/// Public api with tokens.
@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public protocol Appelis_Identity_V1_ProjectSettingsServiceAsyncClientProtocol: GRPCClient {
  static var serviceDescriptor: GRPCServiceDescriptor { get }
  var interceptors: Appelis_Identity_V1_ProjectSettingsServiceClientInterceptorFactoryProtocol? { get }

  func makeGetAllowedProjectsCall(
    _ request: Appelis_Identity_Common_V1_Token,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Identity_Common_V1_Token, Appelis_Identity_V1_ProjectsResponse>

  func makeProjectSettingsCall(
    _ request: Appelis_Identity_V1_ProjectSettingsRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Identity_V1_ProjectSettingsRequest, Appelis_Identity_V1_ProjectsResponse>
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Appelis_Identity_V1_ProjectSettingsServiceAsyncClientProtocol {
  public static var serviceDescriptor: GRPCServiceDescriptor {
    return Appelis_Identity_V1_ProjectSettingsServiceClientMetadata.serviceDescriptor
  }

  public var interceptors: Appelis_Identity_V1_ProjectSettingsServiceClientInterceptorFactoryProtocol? {
    return nil
  }

  public func makeGetAllowedProjectsCall(
    _ request: Appelis_Identity_Common_V1_Token,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Identity_Common_V1_Token, Appelis_Identity_V1_ProjectsResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsServiceClientMetadata.Methods.getAllowedProjects.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAllowedProjectsInterceptors() ?? []
    )
  }

  public func makeProjectSettingsCall(
    _ request: Appelis_Identity_V1_ProjectSettingsRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Identity_V1_ProjectSettingsRequest, Appelis_Identity_V1_ProjectsResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsServiceClientMetadata.Methods.projectSettings.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeProjectSettingsInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Appelis_Identity_V1_ProjectSettingsServiceAsyncClientProtocol {
  public func getAllowedProjects(
    _ request: Appelis_Identity_Common_V1_Token,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Identity_V1_ProjectsResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsServiceClientMetadata.Methods.getAllowedProjects.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAllowedProjectsInterceptors() ?? []
    )
  }

  public func projectSettings(
    _ request: Appelis_Identity_V1_ProjectSettingsRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Identity_V1_ProjectsResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsServiceClientMetadata.Methods.projectSettings.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeProjectSettingsInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public struct Appelis_Identity_V1_ProjectSettingsServiceAsyncClient: Appelis_Identity_V1_ProjectSettingsServiceAsyncClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Appelis_Identity_V1_ProjectSettingsServiceClientInterceptorFactoryProtocol?

  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Identity_V1_ProjectSettingsServiceClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

public protocol Appelis_Identity_V1_ProjectSettingsServiceClientInterceptorFactoryProtocol: Sendable {

  /// - Returns: Interceptors to use when invoking 'getAllowedProjects'.
  func makeGetAllowedProjectsInterceptors() -> [ClientInterceptor<Appelis_Identity_Common_V1_Token, Appelis_Identity_V1_ProjectsResponse>]

  /// - Returns: Interceptors to use when invoking 'projectSettings'.
  func makeProjectSettingsInterceptors() -> [ClientInterceptor<Appelis_Identity_V1_ProjectSettingsRequest, Appelis_Identity_V1_ProjectsResponse>]
}

public enum Appelis_Identity_V1_ProjectSettingsServiceClientMetadata {
  public static let serviceDescriptor = GRPCServiceDescriptor(
    name: "ProjectSettingsService",
    fullName: "appelis.identity.v1.ProjectSettingsService",
    methods: [
      Appelis_Identity_V1_ProjectSettingsServiceClientMetadata.Methods.getAllowedProjects,
      Appelis_Identity_V1_ProjectSettingsServiceClientMetadata.Methods.projectSettings,
    ]
  )

  public enum Methods {
    public static let getAllowedProjects = GRPCMethodDescriptor(
      name: "GetAllowedProjects",
      path: "/appelis.identity.v1.ProjectSettingsService/GetAllowedProjects",
      type: GRPCCallType.unary
    )

    public static let projectSettings = GRPCMethodDescriptor(
      name: "ProjectSettings",
      path: "/appelis.identity.v1.ProjectSettingsService/ProjectSettings",
      type: GRPCCallType.unary
    )
  }
}

/// Private api without tokens and auth logic. Work with basic data of account settings.
///
/// Usage: instantiate `Appelis_Identity_V1_ProjectSettingsAdminClient`, then call methods of this protocol to make API calls.
public protocol Appelis_Identity_V1_ProjectSettingsAdminClientProtocol: GRPCClient {
  var serviceName: String { get }
  var interceptors: Appelis_Identity_V1_ProjectSettingsAdminClientInterceptorFactoryProtocol? { get }

  func settingsByAppKey(
    _ request: Appelis_Identity_V1_SettingsByAppKeyRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Identity_V1_SettingsByAppKeyRequest, Appelis_Identity_V1_SettingsResponse>

  func settings(
    _ request: Appelis_Identity_V1_ProjectRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Identity_V1_ProjectRequest, Appelis_Identity_V1_SettingsResponse>

  func firebaseConfig(
    _ request: Appelis_Identity_V1_ProjectRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Identity_V1_ProjectRequest, Appelis_Identity_V1_FirebaseConfigResponse>

  func addOrUpdateSettings(
    _ request: Appelis_Identity_V1_AddOrUpdateSettingsRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Identity_V1_AddOrUpdateSettingsRequest, Appelis_Identity_V1_SettingsResponse>
}

extension Appelis_Identity_V1_ProjectSettingsAdminClientProtocol {
  public var serviceName: String {
    return "appelis.identity.v1.ProjectSettingsAdmin"
  }

  /// Returns settings by appKey field.
  ///
  /// - Parameters:
  ///   - request: Request to send to SettingsByAppKey.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func settingsByAppKey(
    _ request: Appelis_Identity_V1_SettingsByAppKeyRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Identity_V1_SettingsByAppKeyRequest, Appelis_Identity_V1_SettingsResponse> {
    return self.makeUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.settingsByAppKey.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSettingsByAppKeyInterceptors() ?? []
    )
  }

  /// Gets settings by id.
  ///
  /// - Parameters:
  ///   - request: Request to send to Settings.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func settings(
    _ request: Appelis_Identity_V1_ProjectRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Identity_V1_ProjectRequest, Appelis_Identity_V1_SettingsResponse> {
    return self.makeUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.settings.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSettingsInterceptors() ?? []
    )
  }

  /// Gets firebase config json by project id.
  ///
  /// - Parameters:
  ///   - request: Request to send to FirebaseConfig.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func firebaseConfig(
    _ request: Appelis_Identity_V1_ProjectRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Identity_V1_ProjectRequest, Appelis_Identity_V1_FirebaseConfigResponse> {
    return self.makeUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.firebaseConfig.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeFirebaseConfigInterceptors() ?? []
    )
  }

  /// Rpc will add or update project settings. Update will be on projectId.
  /// Content of projectId must be number.
  ///
  /// - Parameters:
  ///   - request: Request to send to AddOrUpdateSettings.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func addOrUpdateSettings(
    _ request: Appelis_Identity_V1_AddOrUpdateSettingsRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Identity_V1_AddOrUpdateSettingsRequest, Appelis_Identity_V1_SettingsResponse> {
    return self.makeUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.addOrUpdateSettings.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeAddOrUpdateSettingsInterceptors() ?? []
    )
  }
}

@available(*, deprecated)
extension Appelis_Identity_V1_ProjectSettingsAdminClient: @unchecked Sendable {}

@available(*, deprecated, renamed: "Appelis_Identity_V1_ProjectSettingsAdminNIOClient")
public final class Appelis_Identity_V1_ProjectSettingsAdminClient: Appelis_Identity_V1_ProjectSettingsAdminClientProtocol {
  private let lock = Lock()
  private var _defaultCallOptions: CallOptions
  private var _interceptors: Appelis_Identity_V1_ProjectSettingsAdminClientInterceptorFactoryProtocol?
  public let channel: GRPCChannel
  public var defaultCallOptions: CallOptions {
    get { self.lock.withLock { return self._defaultCallOptions } }
    set { self.lock.withLockVoid { self._defaultCallOptions = newValue } }
  }
  public var interceptors: Appelis_Identity_V1_ProjectSettingsAdminClientInterceptorFactoryProtocol? {
    get { self.lock.withLock { return self._interceptors } }
    set { self.lock.withLockVoid { self._interceptors = newValue } }
  }

  /// Creates a client for the appelis.identity.v1.ProjectSettingsAdmin service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Identity_V1_ProjectSettingsAdminClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self._defaultCallOptions = defaultCallOptions
    self._interceptors = interceptors
  }
}

public struct Appelis_Identity_V1_ProjectSettingsAdminNIOClient: Appelis_Identity_V1_ProjectSettingsAdminClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Appelis_Identity_V1_ProjectSettingsAdminClientInterceptorFactoryProtocol?

  /// Creates a client for the appelis.identity.v1.ProjectSettingsAdmin service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Identity_V1_ProjectSettingsAdminClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

/// Private api without tokens and auth logic. Work with basic data of account settings.
@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public protocol Appelis_Identity_V1_ProjectSettingsAdminAsyncClientProtocol: GRPCClient {
  static var serviceDescriptor: GRPCServiceDescriptor { get }
  var interceptors: Appelis_Identity_V1_ProjectSettingsAdminClientInterceptorFactoryProtocol? { get }

  func makeSettingsByAppKeyCall(
    _ request: Appelis_Identity_V1_SettingsByAppKeyRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Identity_V1_SettingsByAppKeyRequest, Appelis_Identity_V1_SettingsResponse>

  func makeSettingsCall(
    _ request: Appelis_Identity_V1_ProjectRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Identity_V1_ProjectRequest, Appelis_Identity_V1_SettingsResponse>

  func makeFirebaseConfigCall(
    _ request: Appelis_Identity_V1_ProjectRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Identity_V1_ProjectRequest, Appelis_Identity_V1_FirebaseConfigResponse>

  func makeAddOrUpdateSettingsCall(
    _ request: Appelis_Identity_V1_AddOrUpdateSettingsRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Identity_V1_AddOrUpdateSettingsRequest, Appelis_Identity_V1_SettingsResponse>
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Appelis_Identity_V1_ProjectSettingsAdminAsyncClientProtocol {
  public static var serviceDescriptor: GRPCServiceDescriptor {
    return Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.serviceDescriptor
  }

  public var interceptors: Appelis_Identity_V1_ProjectSettingsAdminClientInterceptorFactoryProtocol? {
    return nil
  }

  public func makeSettingsByAppKeyCall(
    _ request: Appelis_Identity_V1_SettingsByAppKeyRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Identity_V1_SettingsByAppKeyRequest, Appelis_Identity_V1_SettingsResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.settingsByAppKey.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSettingsByAppKeyInterceptors() ?? []
    )
  }

  public func makeSettingsCall(
    _ request: Appelis_Identity_V1_ProjectRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Identity_V1_ProjectRequest, Appelis_Identity_V1_SettingsResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.settings.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSettingsInterceptors() ?? []
    )
  }

  public func makeFirebaseConfigCall(
    _ request: Appelis_Identity_V1_ProjectRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Identity_V1_ProjectRequest, Appelis_Identity_V1_FirebaseConfigResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.firebaseConfig.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeFirebaseConfigInterceptors() ?? []
    )
  }

  public func makeAddOrUpdateSettingsCall(
    _ request: Appelis_Identity_V1_AddOrUpdateSettingsRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Identity_V1_AddOrUpdateSettingsRequest, Appelis_Identity_V1_SettingsResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.addOrUpdateSettings.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeAddOrUpdateSettingsInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Appelis_Identity_V1_ProjectSettingsAdminAsyncClientProtocol {
  public func settingsByAppKey(
    _ request: Appelis_Identity_V1_SettingsByAppKeyRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Identity_V1_SettingsResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.settingsByAppKey.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSettingsByAppKeyInterceptors() ?? []
    )
  }

  public func settings(
    _ request: Appelis_Identity_V1_ProjectRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Identity_V1_SettingsResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.settings.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSettingsInterceptors() ?? []
    )
  }

  public func firebaseConfig(
    _ request: Appelis_Identity_V1_ProjectRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Identity_V1_FirebaseConfigResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.firebaseConfig.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeFirebaseConfigInterceptors() ?? []
    )
  }

  public func addOrUpdateSettings(
    _ request: Appelis_Identity_V1_AddOrUpdateSettingsRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Identity_V1_SettingsResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.addOrUpdateSettings.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeAddOrUpdateSettingsInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public struct Appelis_Identity_V1_ProjectSettingsAdminAsyncClient: Appelis_Identity_V1_ProjectSettingsAdminAsyncClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Appelis_Identity_V1_ProjectSettingsAdminClientInterceptorFactoryProtocol?

  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Identity_V1_ProjectSettingsAdminClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

public protocol Appelis_Identity_V1_ProjectSettingsAdminClientInterceptorFactoryProtocol: Sendable {

  /// - Returns: Interceptors to use when invoking 'settingsByAppKey'.
  func makeSettingsByAppKeyInterceptors() -> [ClientInterceptor<Appelis_Identity_V1_SettingsByAppKeyRequest, Appelis_Identity_V1_SettingsResponse>]

  /// - Returns: Interceptors to use when invoking 'settings'.
  func makeSettingsInterceptors() -> [ClientInterceptor<Appelis_Identity_V1_ProjectRequest, Appelis_Identity_V1_SettingsResponse>]

  /// - Returns: Interceptors to use when invoking 'firebaseConfig'.
  func makeFirebaseConfigInterceptors() -> [ClientInterceptor<Appelis_Identity_V1_ProjectRequest, Appelis_Identity_V1_FirebaseConfigResponse>]

  /// - Returns: Interceptors to use when invoking 'addOrUpdateSettings'.
  func makeAddOrUpdateSettingsInterceptors() -> [ClientInterceptor<Appelis_Identity_V1_AddOrUpdateSettingsRequest, Appelis_Identity_V1_SettingsResponse>]
}

public enum Appelis_Identity_V1_ProjectSettingsAdminClientMetadata {
  public static let serviceDescriptor = GRPCServiceDescriptor(
    name: "ProjectSettingsAdmin",
    fullName: "appelis.identity.v1.ProjectSettingsAdmin",
    methods: [
      Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.settingsByAppKey,
      Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.settings,
      Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.firebaseConfig,
      Appelis_Identity_V1_ProjectSettingsAdminClientMetadata.Methods.addOrUpdateSettings,
    ]
  )

  public enum Methods {
    public static let settingsByAppKey = GRPCMethodDescriptor(
      name: "SettingsByAppKey",
      path: "/appelis.identity.v1.ProjectSettingsAdmin/SettingsByAppKey",
      type: GRPCCallType.unary
    )

    public static let settings = GRPCMethodDescriptor(
      name: "Settings",
      path: "/appelis.identity.v1.ProjectSettingsAdmin/Settings",
      type: GRPCCallType.unary
    )

    public static let firebaseConfig = GRPCMethodDescriptor(
      name: "FirebaseConfig",
      path: "/appelis.identity.v1.ProjectSettingsAdmin/FirebaseConfig",
      type: GRPCCallType.unary
    )

    public static let addOrUpdateSettings = GRPCMethodDescriptor(
      name: "AddOrUpdateSettings",
      path: "/appelis.identity.v1.ProjectSettingsAdmin/AddOrUpdateSettings",
      type: GRPCCallType.unary
    )
  }
}

