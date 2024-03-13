//
// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the protocol buffer compiler.
// Source: meeting_service/meeting.admin.v1.proto
//
import GRPC
import NIO
import NIOConcurrencyHelpers
import SwiftProtobuf


/// Usage: instantiate `Metro_Meeting_Admin_V1_MeetingsAdminServiceClient`, then call methods of this protocol to make API calls.
public protocol Metro_Meeting_Admin_V1_MeetingsAdminServiceClientProtocol: GRPCClient {
  var serviceName: String { get }
  var interceptors: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientInterceptorFactoryProtocol? { get }

  func rescheduleMeeting(
    _ request: Metro_Meeting_Admin_V1_RescheduleMeetingRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Meeting_Admin_V1_RescheduleMeetingRequest, Metro_Meeting_Admin_V1_MeetingResponse>

  func confirmMeeting(
    _ request: Metro_Meeting_Admin_V1_MeetingIdRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Meeting_Admin_V1_MeetingIdRequest, Metro_Meeting_Admin_V1_MeetingResponse>

  func getMeetingById(
    _ request: Metro_Meeting_Admin_V1_MeetingIdRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Meeting_Admin_V1_MeetingIdRequest, Metro_Meeting_Admin_V1_MeetingResponse>

  func getMeetings(
    _ request: Metro_Meeting_Admin_V1_GetMeetingsRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Meeting_Admin_V1_GetMeetingsRequest, Metro_Meeting_Admin_V1_MeetingsListResponse>

  func getMeetingsByRange(
    _ request: Metro_Meeting_Admin_V1_GetMeetingsByRangeRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Meeting_Admin_V1_GetMeetingsByRangeRequest, Metro_Meeting_Admin_V1_MeetingsListResponse>
}

extension Metro_Meeting_Admin_V1_MeetingsAdminServiceClientProtocol {
  public var serviceName: String {
    return "metro.meeting.admin.v1.MeetingsAdminService"
  }

  /// Unary call to RescheduleMeeting
  ///
  /// - Parameters:
  ///   - request: Request to send to RescheduleMeeting.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func rescheduleMeeting(
    _ request: Metro_Meeting_Admin_V1_RescheduleMeetingRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Meeting_Admin_V1_RescheduleMeetingRequest, Metro_Meeting_Admin_V1_MeetingResponse> {
    return self.makeUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.rescheduleMeeting.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeRescheduleMeetingInterceptors() ?? []
    )
  }

  /// Unary call to ConfirmMeeting
  ///
  /// - Parameters:
  ///   - request: Request to send to ConfirmMeeting.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func confirmMeeting(
    _ request: Metro_Meeting_Admin_V1_MeetingIdRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Meeting_Admin_V1_MeetingIdRequest, Metro_Meeting_Admin_V1_MeetingResponse> {
    return self.makeUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.confirmMeeting.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeConfirmMeetingInterceptors() ?? []
    )
  }

  /// Unary call to GetMeetingById
  ///
  /// - Parameters:
  ///   - request: Request to send to GetMeetingById.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getMeetingById(
    _ request: Metro_Meeting_Admin_V1_MeetingIdRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Meeting_Admin_V1_MeetingIdRequest, Metro_Meeting_Admin_V1_MeetingResponse> {
    return self.makeUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.getMeetingById.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMeetingByIdInterceptors() ?? []
    )
  }

  /// Unary call to GetMeetings
  ///
  /// - Parameters:
  ///   - request: Request to send to GetMeetings.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getMeetings(
    _ request: Metro_Meeting_Admin_V1_GetMeetingsRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Meeting_Admin_V1_GetMeetingsRequest, Metro_Meeting_Admin_V1_MeetingsListResponse> {
    return self.makeUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.getMeetings.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMeetingsInterceptors() ?? []
    )
  }

  /// Unary call to GetMeetingsByRange
  ///
  /// - Parameters:
  ///   - request: Request to send to GetMeetingsByRange.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getMeetingsByRange(
    _ request: Metro_Meeting_Admin_V1_GetMeetingsByRangeRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Meeting_Admin_V1_GetMeetingsByRangeRequest, Metro_Meeting_Admin_V1_MeetingsListResponse> {
    return self.makeUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.getMeetingsByRange.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMeetingsByRangeInterceptors() ?? []
    )
  }
}

@available(*, deprecated)
extension Metro_Meeting_Admin_V1_MeetingsAdminServiceClient: @unchecked Sendable {}

@available(*, deprecated, renamed: "Metro_Meeting_Admin_V1_MeetingsAdminServiceNIOClient")
public final class Metro_Meeting_Admin_V1_MeetingsAdminServiceClient: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientProtocol {
  private let lock = Lock()
  private var _defaultCallOptions: CallOptions
  private var _interceptors: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientInterceptorFactoryProtocol?
  public let channel: GRPCChannel
  public var defaultCallOptions: CallOptions {
    get { self.lock.withLock { return self._defaultCallOptions } }
    set { self.lock.withLockVoid { self._defaultCallOptions = newValue } }
  }
  public var interceptors: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientInterceptorFactoryProtocol? {
    get { self.lock.withLock { return self._interceptors } }
    set { self.lock.withLockVoid { self._interceptors = newValue } }
  }

  /// Creates a client for the metro.meeting.admin.v1.MeetingsAdminService service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self._defaultCallOptions = defaultCallOptions
    self._interceptors = interceptors
  }
}

public struct Metro_Meeting_Admin_V1_MeetingsAdminServiceNIOClient: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientInterceptorFactoryProtocol?

  /// Creates a client for the metro.meeting.admin.v1.MeetingsAdminService service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public protocol Metro_Meeting_Admin_V1_MeetingsAdminServiceAsyncClientProtocol: GRPCClient {
  static var serviceDescriptor: GRPCServiceDescriptor { get }
  var interceptors: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientInterceptorFactoryProtocol? { get }

  func makeRescheduleMeetingCall(
    _ request: Metro_Meeting_Admin_V1_RescheduleMeetingRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Meeting_Admin_V1_RescheduleMeetingRequest, Metro_Meeting_Admin_V1_MeetingResponse>

  func makeConfirmMeetingCall(
    _ request: Metro_Meeting_Admin_V1_MeetingIdRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Meeting_Admin_V1_MeetingIdRequest, Metro_Meeting_Admin_V1_MeetingResponse>

  func makeGetMeetingByIDCall(
    _ request: Metro_Meeting_Admin_V1_MeetingIdRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Meeting_Admin_V1_MeetingIdRequest, Metro_Meeting_Admin_V1_MeetingResponse>

  func makeGetMeetingsCall(
    _ request: Metro_Meeting_Admin_V1_GetMeetingsRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Meeting_Admin_V1_GetMeetingsRequest, Metro_Meeting_Admin_V1_MeetingsListResponse>

  func makeGetMeetingsByRangeCall(
    _ request: Metro_Meeting_Admin_V1_GetMeetingsByRangeRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Meeting_Admin_V1_GetMeetingsByRangeRequest, Metro_Meeting_Admin_V1_MeetingsListResponse>
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Metro_Meeting_Admin_V1_MeetingsAdminServiceAsyncClientProtocol {
  public static var serviceDescriptor: GRPCServiceDescriptor {
    return Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.serviceDescriptor
  }

  public var interceptors: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientInterceptorFactoryProtocol? {
    return nil
  }

  public func makeRescheduleMeetingCall(
    _ request: Metro_Meeting_Admin_V1_RescheduleMeetingRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Meeting_Admin_V1_RescheduleMeetingRequest, Metro_Meeting_Admin_V1_MeetingResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.rescheduleMeeting.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeRescheduleMeetingInterceptors() ?? []
    )
  }

  public func makeConfirmMeetingCall(
    _ request: Metro_Meeting_Admin_V1_MeetingIdRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Meeting_Admin_V1_MeetingIdRequest, Metro_Meeting_Admin_V1_MeetingResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.confirmMeeting.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeConfirmMeetingInterceptors() ?? []
    )
  }

  public func makeGetMeetingByIDCall(
    _ request: Metro_Meeting_Admin_V1_MeetingIdRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Meeting_Admin_V1_MeetingIdRequest, Metro_Meeting_Admin_V1_MeetingResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.getMeetingById.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMeetingByIdInterceptors() ?? []
    )
  }

  public func makeGetMeetingsCall(
    _ request: Metro_Meeting_Admin_V1_GetMeetingsRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Meeting_Admin_V1_GetMeetingsRequest, Metro_Meeting_Admin_V1_MeetingsListResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.getMeetings.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMeetingsInterceptors() ?? []
    )
  }

  public func makeGetMeetingsByRangeCall(
    _ request: Metro_Meeting_Admin_V1_GetMeetingsByRangeRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Meeting_Admin_V1_GetMeetingsByRangeRequest, Metro_Meeting_Admin_V1_MeetingsListResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.getMeetingsByRange.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMeetingsByRangeInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Metro_Meeting_Admin_V1_MeetingsAdminServiceAsyncClientProtocol {
  public func rescheduleMeeting(
    _ request: Metro_Meeting_Admin_V1_RescheduleMeetingRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Meeting_Admin_V1_MeetingResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.rescheduleMeeting.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeRescheduleMeetingInterceptors() ?? []
    )
  }

  public func confirmMeeting(
    _ request: Metro_Meeting_Admin_V1_MeetingIdRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Meeting_Admin_V1_MeetingResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.confirmMeeting.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeConfirmMeetingInterceptors() ?? []
    )
  }

  public func getMeetingById(
    _ request: Metro_Meeting_Admin_V1_MeetingIdRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Meeting_Admin_V1_MeetingResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.getMeetingById.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMeetingByIdInterceptors() ?? []
    )
  }

  public func getMeetings(
    _ request: Metro_Meeting_Admin_V1_GetMeetingsRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Meeting_Admin_V1_MeetingsListResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.getMeetings.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMeetingsInterceptors() ?? []
    )
  }

  public func getMeetingsByRange(
    _ request: Metro_Meeting_Admin_V1_GetMeetingsByRangeRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Meeting_Admin_V1_MeetingsListResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.getMeetingsByRange.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetMeetingsByRangeInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public struct Metro_Meeting_Admin_V1_MeetingsAdminServiceAsyncClient: Metro_Meeting_Admin_V1_MeetingsAdminServiceAsyncClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientInterceptorFactoryProtocol?

  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Meeting_Admin_V1_MeetingsAdminServiceClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

public protocol Metro_Meeting_Admin_V1_MeetingsAdminServiceClientInterceptorFactoryProtocol: Sendable {

  /// - Returns: Interceptors to use when invoking 'rescheduleMeeting'.
  func makeRescheduleMeetingInterceptors() -> [ClientInterceptor<Metro_Meeting_Admin_V1_RescheduleMeetingRequest, Metro_Meeting_Admin_V1_MeetingResponse>]

  /// - Returns: Interceptors to use when invoking 'confirmMeeting'.
  func makeConfirmMeetingInterceptors() -> [ClientInterceptor<Metro_Meeting_Admin_V1_MeetingIdRequest, Metro_Meeting_Admin_V1_MeetingResponse>]

  /// - Returns: Interceptors to use when invoking 'getMeetingById'.
  func makeGetMeetingByIdInterceptors() -> [ClientInterceptor<Metro_Meeting_Admin_V1_MeetingIdRequest, Metro_Meeting_Admin_V1_MeetingResponse>]

  /// - Returns: Interceptors to use when invoking 'getMeetings'.
  func makeGetMeetingsInterceptors() -> [ClientInterceptor<Metro_Meeting_Admin_V1_GetMeetingsRequest, Metro_Meeting_Admin_V1_MeetingsListResponse>]

  /// - Returns: Interceptors to use when invoking 'getMeetingsByRange'.
  func makeGetMeetingsByRangeInterceptors() -> [ClientInterceptor<Metro_Meeting_Admin_V1_GetMeetingsByRangeRequest, Metro_Meeting_Admin_V1_MeetingsListResponse>]
}

public enum Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata {
  public static let serviceDescriptor = GRPCServiceDescriptor(
    name: "MeetingsAdminService",
    fullName: "metro.meeting.admin.v1.MeetingsAdminService",
    methods: [
      Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.rescheduleMeeting,
      Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.confirmMeeting,
      Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.getMeetingById,
      Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.getMeetings,
      Metro_Meeting_Admin_V1_MeetingsAdminServiceClientMetadata.Methods.getMeetingsByRange,
    ]
  )

  public enum Methods {
    public static let rescheduleMeeting = GRPCMethodDescriptor(
      name: "RescheduleMeeting",
      path: "/metro.meeting.admin.v1.MeetingsAdminService/RescheduleMeeting",
      type: GRPCCallType.unary
    )

    public static let confirmMeeting = GRPCMethodDescriptor(
      name: "ConfirmMeeting",
      path: "/metro.meeting.admin.v1.MeetingsAdminService/ConfirmMeeting",
      type: GRPCCallType.unary
    )

    public static let getMeetingById = GRPCMethodDescriptor(
      name: "GetMeetingById",
      path: "/metro.meeting.admin.v1.MeetingsAdminService/GetMeetingById",
      type: GRPCCallType.unary
    )

    public static let getMeetings = GRPCMethodDescriptor(
      name: "GetMeetings",
      path: "/metro.meeting.admin.v1.MeetingsAdminService/GetMeetings",
      type: GRPCCallType.unary
    )

    public static let getMeetingsByRange = GRPCMethodDescriptor(
      name: "GetMeetingsByRange",
      path: "/metro.meeting.admin.v1.MeetingsAdminService/GetMeetingsByRange",
      type: GRPCCallType.unary
    )
  }
}
