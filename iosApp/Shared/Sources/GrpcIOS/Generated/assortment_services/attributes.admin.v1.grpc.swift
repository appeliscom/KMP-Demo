//
// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the protocol buffer compiler.
// Source: assortment_services/attributes.admin.v1.proto
//
import GRPC
import NIO
import NIOConcurrencyHelpers
import SwiftProtobuf


/// Usage: instantiate `Appelis_Assortment_V1_AttributesAdminClient`, then call methods of this protocol to make API calls.
public protocol Appelis_Assortment_V1_AttributesAdminClientProtocol: GRPCClient {
  var serviceName: String { get }
  var interceptors: Appelis_Assortment_V1_AttributesAdminClientInterceptorFactoryProtocol? { get }

  func getAttributes(
    _ request: Appelis_Assortment_V1_GetAttributesRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Assortment_V1_GetAttributesRequest, Appelis_Assortment_V1_GetAttributesResponse>

  func getAttributesValues(
    _ request: Appelis_Assortment_V1_GetAttributesValuesRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Assortment_V1_GetAttributesValuesRequest, Appelis_Assortment_V1_GetAttributesValuesResponse>

  func setAttributes(
    _ request: Appelis_Assortment_V1_SetAttributesRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Assortment_V1_SetAttributesRequest, Appelis_Assortment_V1_SetAttributesResponse>

  func deleteAttributes(
    _ request: Appelis_Assortment_V1_DeleteRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Assortment_V1_DeleteRequest, Appelis_Assortment_V1_DeleteResponse>

  func setAttributeValues(
    _ request: Appelis_Assortment_V1_SetAttributeValuesRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Assortment_V1_SetAttributeValuesRequest, Appelis_Assortment_V1_SetAttributeValuesResponse>

  func deleteAttributeValues(
    _ request: Appelis_Assortment_V1_DeleteRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Appelis_Assortment_V1_DeleteRequest, Appelis_Assortment_V1_DeleteResponse>
}

extension Appelis_Assortment_V1_AttributesAdminClientProtocol {
  public var serviceName: String {
    return "appelis.assortment.v1.AttributesAdmin"
  }

  /// Gets all attributes for project. Sorted by order field.
  ///
  /// - Parameters:
  ///   - request: Request to send to GetAttributes.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getAttributes(
    _ request: Appelis_Assortment_V1_GetAttributesRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Assortment_V1_GetAttributesRequest, Appelis_Assortment_V1_GetAttributesResponse> {
    return self.makeUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.getAttributes.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAttributesInterceptors() ?? []
    )
  }

  /// Unary call to GetAttributesValues
  ///
  /// - Parameters:
  ///   - request: Request to send to GetAttributesValues.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getAttributesValues(
    _ request: Appelis_Assortment_V1_GetAttributesValuesRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Assortment_V1_GetAttributesValuesRequest, Appelis_Assortment_V1_GetAttributesValuesResponse> {
    return self.makeUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.getAttributesValues.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAttributesValuesInterceptors() ?? []
    )
  }

  /// Unary call to SetAttributes
  ///
  /// - Parameters:
  ///   - request: Request to send to SetAttributes.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func setAttributes(
    _ request: Appelis_Assortment_V1_SetAttributesRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Assortment_V1_SetAttributesRequest, Appelis_Assortment_V1_SetAttributesResponse> {
    return self.makeUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.setAttributes.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetAttributesInterceptors() ?? []
    )
  }

  /// Unary call to DeleteAttributes
  ///
  /// - Parameters:
  ///   - request: Request to send to DeleteAttributes.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func deleteAttributes(
    _ request: Appelis_Assortment_V1_DeleteRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Assortment_V1_DeleteRequest, Appelis_Assortment_V1_DeleteResponse> {
    return self.makeUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.deleteAttributes.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteAttributesInterceptors() ?? []
    )
  }

  /// Unary call to SetAttributeValues
  ///
  /// - Parameters:
  ///   - request: Request to send to SetAttributeValues.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func setAttributeValues(
    _ request: Appelis_Assortment_V1_SetAttributeValuesRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Assortment_V1_SetAttributeValuesRequest, Appelis_Assortment_V1_SetAttributeValuesResponse> {
    return self.makeUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.setAttributeValues.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetAttributeValuesInterceptors() ?? []
    )
  }

  /// Unary call to DeleteAttributeValues
  ///
  /// - Parameters:
  ///   - request: Request to send to DeleteAttributeValues.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func deleteAttributeValues(
    _ request: Appelis_Assortment_V1_DeleteRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Appelis_Assortment_V1_DeleteRequest, Appelis_Assortment_V1_DeleteResponse> {
    return self.makeUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.deleteAttributeValues.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteAttributeValuesInterceptors() ?? []
    )
  }
}

@available(*, deprecated)
extension Appelis_Assortment_V1_AttributesAdminClient: @unchecked Sendable {}

@available(*, deprecated, renamed: "Appelis_Assortment_V1_AttributesAdminNIOClient")
public final class Appelis_Assortment_V1_AttributesAdminClient: Appelis_Assortment_V1_AttributesAdminClientProtocol {
  private let lock = Lock()
  private var _defaultCallOptions: CallOptions
  private var _interceptors: Appelis_Assortment_V1_AttributesAdminClientInterceptorFactoryProtocol?
  public let channel: GRPCChannel
  public var defaultCallOptions: CallOptions {
    get { self.lock.withLock { return self._defaultCallOptions } }
    set { self.lock.withLockVoid { self._defaultCallOptions = newValue } }
  }
  public var interceptors: Appelis_Assortment_V1_AttributesAdminClientInterceptorFactoryProtocol? {
    get { self.lock.withLock { return self._interceptors } }
    set { self.lock.withLockVoid { self._interceptors = newValue } }
  }

  /// Creates a client for the appelis.assortment.v1.AttributesAdmin service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Assortment_V1_AttributesAdminClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self._defaultCallOptions = defaultCallOptions
    self._interceptors = interceptors
  }
}

public struct Appelis_Assortment_V1_AttributesAdminNIOClient: Appelis_Assortment_V1_AttributesAdminClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Appelis_Assortment_V1_AttributesAdminClientInterceptorFactoryProtocol?

  /// Creates a client for the appelis.assortment.v1.AttributesAdmin service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Assortment_V1_AttributesAdminClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public protocol Appelis_Assortment_V1_AttributesAdminAsyncClientProtocol: GRPCClient {
  static var serviceDescriptor: GRPCServiceDescriptor { get }
  var interceptors: Appelis_Assortment_V1_AttributesAdminClientInterceptorFactoryProtocol? { get }

  func makeGetAttributesCall(
    _ request: Appelis_Assortment_V1_GetAttributesRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Assortment_V1_GetAttributesRequest, Appelis_Assortment_V1_GetAttributesResponse>

  func makeGetAttributesValuesCall(
    _ request: Appelis_Assortment_V1_GetAttributesValuesRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Assortment_V1_GetAttributesValuesRequest, Appelis_Assortment_V1_GetAttributesValuesResponse>

  func makeSetAttributesCall(
    _ request: Appelis_Assortment_V1_SetAttributesRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Assortment_V1_SetAttributesRequest, Appelis_Assortment_V1_SetAttributesResponse>

  func makeDeleteAttributesCall(
    _ request: Appelis_Assortment_V1_DeleteRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Assortment_V1_DeleteRequest, Appelis_Assortment_V1_DeleteResponse>

  func makeSetAttributeValuesCall(
    _ request: Appelis_Assortment_V1_SetAttributeValuesRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Assortment_V1_SetAttributeValuesRequest, Appelis_Assortment_V1_SetAttributeValuesResponse>

  func makeDeleteAttributeValuesCall(
    _ request: Appelis_Assortment_V1_DeleteRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Appelis_Assortment_V1_DeleteRequest, Appelis_Assortment_V1_DeleteResponse>
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Appelis_Assortment_V1_AttributesAdminAsyncClientProtocol {
  public static var serviceDescriptor: GRPCServiceDescriptor {
    return Appelis_Assortment_V1_AttributesAdminClientMetadata.serviceDescriptor
  }

  public var interceptors: Appelis_Assortment_V1_AttributesAdminClientInterceptorFactoryProtocol? {
    return nil
  }

  public func makeGetAttributesCall(
    _ request: Appelis_Assortment_V1_GetAttributesRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Assortment_V1_GetAttributesRequest, Appelis_Assortment_V1_GetAttributesResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.getAttributes.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAttributesInterceptors() ?? []
    )
  }

  public func makeGetAttributesValuesCall(
    _ request: Appelis_Assortment_V1_GetAttributesValuesRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Assortment_V1_GetAttributesValuesRequest, Appelis_Assortment_V1_GetAttributesValuesResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.getAttributesValues.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAttributesValuesInterceptors() ?? []
    )
  }

  public func makeSetAttributesCall(
    _ request: Appelis_Assortment_V1_SetAttributesRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Assortment_V1_SetAttributesRequest, Appelis_Assortment_V1_SetAttributesResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.setAttributes.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetAttributesInterceptors() ?? []
    )
  }

  public func makeDeleteAttributesCall(
    _ request: Appelis_Assortment_V1_DeleteRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Assortment_V1_DeleteRequest, Appelis_Assortment_V1_DeleteResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.deleteAttributes.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteAttributesInterceptors() ?? []
    )
  }

  public func makeSetAttributeValuesCall(
    _ request: Appelis_Assortment_V1_SetAttributeValuesRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Assortment_V1_SetAttributeValuesRequest, Appelis_Assortment_V1_SetAttributeValuesResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.setAttributeValues.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetAttributeValuesInterceptors() ?? []
    )
  }

  public func makeDeleteAttributeValuesCall(
    _ request: Appelis_Assortment_V1_DeleteRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Appelis_Assortment_V1_DeleteRequest, Appelis_Assortment_V1_DeleteResponse> {
    return self.makeAsyncUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.deleteAttributeValues.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteAttributeValuesInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Appelis_Assortment_V1_AttributesAdminAsyncClientProtocol {
  public func getAttributes(
    _ request: Appelis_Assortment_V1_GetAttributesRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Assortment_V1_GetAttributesResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.getAttributes.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAttributesInterceptors() ?? []
    )
  }

  public func getAttributesValues(
    _ request: Appelis_Assortment_V1_GetAttributesValuesRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Assortment_V1_GetAttributesValuesResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.getAttributesValues.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAttributesValuesInterceptors() ?? []
    )
  }

  public func setAttributes(
    _ request: Appelis_Assortment_V1_SetAttributesRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Assortment_V1_SetAttributesResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.setAttributes.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetAttributesInterceptors() ?? []
    )
  }

  public func deleteAttributes(
    _ request: Appelis_Assortment_V1_DeleteRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Assortment_V1_DeleteResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.deleteAttributes.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteAttributesInterceptors() ?? []
    )
  }

  public func setAttributeValues(
    _ request: Appelis_Assortment_V1_SetAttributeValuesRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Assortment_V1_SetAttributeValuesResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.setAttributeValues.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetAttributeValuesInterceptors() ?? []
    )
  }

  public func deleteAttributeValues(
    _ request: Appelis_Assortment_V1_DeleteRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Appelis_Assortment_V1_DeleteResponse {
    return try await self.performAsyncUnaryCall(
      path: Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.deleteAttributeValues.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteAttributeValuesInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public struct Appelis_Assortment_V1_AttributesAdminAsyncClient: Appelis_Assortment_V1_AttributesAdminAsyncClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Appelis_Assortment_V1_AttributesAdminClientInterceptorFactoryProtocol?

  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Appelis_Assortment_V1_AttributesAdminClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

public protocol Appelis_Assortment_V1_AttributesAdminClientInterceptorFactoryProtocol: Sendable {

  /// - Returns: Interceptors to use when invoking 'getAttributes'.
  func makeGetAttributesInterceptors() -> [ClientInterceptor<Appelis_Assortment_V1_GetAttributesRequest, Appelis_Assortment_V1_GetAttributesResponse>]

  /// - Returns: Interceptors to use when invoking 'getAttributesValues'.
  func makeGetAttributesValuesInterceptors() -> [ClientInterceptor<Appelis_Assortment_V1_GetAttributesValuesRequest, Appelis_Assortment_V1_GetAttributesValuesResponse>]

  /// - Returns: Interceptors to use when invoking 'setAttributes'.
  func makeSetAttributesInterceptors() -> [ClientInterceptor<Appelis_Assortment_V1_SetAttributesRequest, Appelis_Assortment_V1_SetAttributesResponse>]

  /// - Returns: Interceptors to use when invoking 'deleteAttributes'.
  func makeDeleteAttributesInterceptors() -> [ClientInterceptor<Appelis_Assortment_V1_DeleteRequest, Appelis_Assortment_V1_DeleteResponse>]

  /// - Returns: Interceptors to use when invoking 'setAttributeValues'.
  func makeSetAttributeValuesInterceptors() -> [ClientInterceptor<Appelis_Assortment_V1_SetAttributeValuesRequest, Appelis_Assortment_V1_SetAttributeValuesResponse>]

  /// - Returns: Interceptors to use when invoking 'deleteAttributeValues'.
  func makeDeleteAttributeValuesInterceptors() -> [ClientInterceptor<Appelis_Assortment_V1_DeleteRequest, Appelis_Assortment_V1_DeleteResponse>]
}

public enum Appelis_Assortment_V1_AttributesAdminClientMetadata {
  public static let serviceDescriptor = GRPCServiceDescriptor(
    name: "AttributesAdmin",
    fullName: "appelis.assortment.v1.AttributesAdmin",
    methods: [
      Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.getAttributes,
      Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.getAttributesValues,
      Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.setAttributes,
      Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.deleteAttributes,
      Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.setAttributeValues,
      Appelis_Assortment_V1_AttributesAdminClientMetadata.Methods.deleteAttributeValues,
    ]
  )

  public enum Methods {
    public static let getAttributes = GRPCMethodDescriptor(
      name: "GetAttributes",
      path: "/appelis.assortment.v1.AttributesAdmin/GetAttributes",
      type: GRPCCallType.unary
    )

    public static let getAttributesValues = GRPCMethodDescriptor(
      name: "GetAttributesValues",
      path: "/appelis.assortment.v1.AttributesAdmin/GetAttributesValues",
      type: GRPCCallType.unary
    )

    public static let setAttributes = GRPCMethodDescriptor(
      name: "SetAttributes",
      path: "/appelis.assortment.v1.AttributesAdmin/SetAttributes",
      type: GRPCCallType.unary
    )

    public static let deleteAttributes = GRPCMethodDescriptor(
      name: "DeleteAttributes",
      path: "/appelis.assortment.v1.AttributesAdmin/DeleteAttributes",
      type: GRPCCallType.unary
    )

    public static let setAttributeValues = GRPCMethodDescriptor(
      name: "SetAttributeValues",
      path: "/appelis.assortment.v1.AttributesAdmin/SetAttributeValues",
      type: GRPCCallType.unary
    )

    public static let deleteAttributeValues = GRPCMethodDescriptor(
      name: "DeleteAttributeValues",
      path: "/appelis.assortment.v1.AttributesAdmin/DeleteAttributeValues",
      type: GRPCCallType.unary
    )
  }
}

