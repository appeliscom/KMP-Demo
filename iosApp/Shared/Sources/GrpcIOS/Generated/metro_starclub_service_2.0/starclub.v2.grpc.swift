//
// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the protocol buffer compiler.
// Source: metro_starclub_service_2.0/starclub.v2.proto
//
import GRPC
import NIO
import NIOConcurrencyHelpers
import SwiftProtobuf


/// Service for handling mobile api for starclub calls.
/// all cals are working only when there is active campaign
/// Api is working only with tokens with logged user. Otherwise api will return TOKEN_INVALID.
///
/// Usage: instantiate `Metro_Starclub_V2_StarClubClient`, then call methods of this protocol to make API calls.
public protocol Metro_Starclub_V2_StarClubClientProtocol: GRPCClient {
  var serviceName: String { get }
  var interceptors: Metro_Starclub_V2_StarClubClientInterceptorFactoryProtocol? { get }

  func getStatus(
    _ request: Metro_Starclub_V2_GetStatusRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Starclub_V2_GetStatusRequest, Metro_Starclub_V2_GetStatusResponse>

  func getCampaignDescription(
    _ request: Metro_Starclub_V2_GetCampaignDescriptionRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Starclub_V2_GetCampaignDescriptionRequest, Metro_Starclub_V2_GetCampaignDescriptionResponse>

  func getPointsSummary(
    _ request: Metro_Starclub_V2_GetPointsSummaryRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Starclub_V2_GetPointsSummaryRequest, Metro_Starclub_V2_GetPointsSummaryResponse>

  func getPointMovements(
    _ request: Metro_Starclub_V2_GetPointMovementsRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Starclub_V2_GetPointMovementsRequest, Metro_Starclub_V2_GetPointMovementsResponse>

  func getCoupons(
    _ request: Metro_Starclub_V2_GetCouponsRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Starclub_V2_GetCouponsRequest, Metro_Starclub_V2_GetCouponsResponse>

  func getCouponById(
    _ request: Metro_Starclub_V2_GetCouponByIdRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Starclub_V2_GetCouponByIdRequest, Metro_Starclub_V2_GetCouponByIdResponse>

  func applyCoupon(
    _ request: Metro_Starclub_V2_ApplyCouponRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Starclub_V2_ApplyCouponRequest, Metro_Starclub_V2_ApplyCouponResponse>
}

extension Metro_Starclub_V2_StarClubClientProtocol {
  public var serviceName: String {
    return "metro.starclub.v2.StarClub"
  }

  /// Active campaign per company status detail... point balance...
  ///
  /// - Parameters:
  ///   - request: Request to send to GetStatus.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getStatus(
    _ request: Metro_Starclub_V2_GetStatusRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Starclub_V2_GetStatusRequest, Metro_Starclub_V2_GetStatusResponse> {
    return self.makeUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getStatus.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetStatusInterceptors() ?? []
    )
  }

  /// Unary call to GetCampaignDescription
  ///
  /// - Parameters:
  ///   - request: Request to send to GetCampaignDescription.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getCampaignDescription(
    _ request: Metro_Starclub_V2_GetCampaignDescriptionRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Starclub_V2_GetCampaignDescriptionRequest, Metro_Starclub_V2_GetCampaignDescriptionResponse> {
    return self.makeUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getCampaignDescription.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCampaignDescriptionInterceptors() ?? []
    )
  }

  /// Unary call to GetPointsSummary
  ///
  /// - Parameters:
  ///   - request: Request to send to GetPointsSummary.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getPointsSummary(
    _ request: Metro_Starclub_V2_GetPointsSummaryRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Starclub_V2_GetPointsSummaryRequest, Metro_Starclub_V2_GetPointsSummaryResponse> {
    return self.makeUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getPointsSummary.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetPointsSummaryInterceptors() ?? []
    )
  }

  /// Point Movements for invoices for active campaign.
  ///
  /// - Parameters:
  ///   - request: Request to send to GetPointMovements.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getPointMovements(
    _ request: Metro_Starclub_V2_GetPointMovementsRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Starclub_V2_GetPointMovementsRequest, Metro_Starclub_V2_GetPointMovementsResponse> {
    return self.makeUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getPointMovements.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetPointMovementsInterceptors() ?? []
    )
  }

  /// Coupon of active campaign + per company calculation of apply flag + per user usage of coupon
  ///
  /// - Parameters:
  ///   - request: Request to send to GetCoupons.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getCoupons(
    _ request: Metro_Starclub_V2_GetCouponsRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Starclub_V2_GetCouponsRequest, Metro_Starclub_V2_GetCouponsResponse> {
    return self.makeUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getCoupons.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCouponsInterceptors() ?? []
    )
  }

  /// Get coupon by id. If coupon doesn't exists returns payload null.
  ///
  /// - Parameters:
  ///   - request: Request to send to GetCouponById.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getCouponById(
    _ request: Metro_Starclub_V2_GetCouponByIdRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Starclub_V2_GetCouponByIdRequest, Metro_Starclub_V2_GetCouponByIdResponse> {
    return self.makeUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getCouponById.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCouponByIdInterceptors() ?? []
    )
  }

  /// Rpc will be called after swiping in app.
  ///
  /// - Parameters:
  ///   - request: Request to send to ApplyCoupon.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func applyCoupon(
    _ request: Metro_Starclub_V2_ApplyCouponRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Starclub_V2_ApplyCouponRequest, Metro_Starclub_V2_ApplyCouponResponse> {
    return self.makeUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.applyCoupon.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeApplyCouponInterceptors() ?? []
    )
  }
}

@available(*, deprecated)
extension Metro_Starclub_V2_StarClubClient: @unchecked Sendable {}

@available(*, deprecated, renamed: "Metro_Starclub_V2_StarClubNIOClient")
public final class Metro_Starclub_V2_StarClubClient: Metro_Starclub_V2_StarClubClientProtocol {
  private let lock = Lock()
  private var _defaultCallOptions: CallOptions
  private var _interceptors: Metro_Starclub_V2_StarClubClientInterceptorFactoryProtocol?
  public let channel: GRPCChannel
  public var defaultCallOptions: CallOptions {
    get { self.lock.withLock { return self._defaultCallOptions } }
    set { self.lock.withLockVoid { self._defaultCallOptions = newValue } }
  }
  public var interceptors: Metro_Starclub_V2_StarClubClientInterceptorFactoryProtocol? {
    get { self.lock.withLock { return self._interceptors } }
    set { self.lock.withLockVoid { self._interceptors = newValue } }
  }

  /// Creates a client for the metro.starclub.v2.StarClub service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Starclub_V2_StarClubClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self._defaultCallOptions = defaultCallOptions
    self._interceptors = interceptors
  }
}

public struct Metro_Starclub_V2_StarClubNIOClient: Metro_Starclub_V2_StarClubClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Metro_Starclub_V2_StarClubClientInterceptorFactoryProtocol?

  /// Creates a client for the metro.starclub.v2.StarClub service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Starclub_V2_StarClubClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

/// Service for handling mobile api for starclub calls.
/// all cals are working only when there is active campaign
/// Api is working only with tokens with logged user. Otherwise api will return TOKEN_INVALID.
@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public protocol Metro_Starclub_V2_StarClubAsyncClientProtocol: GRPCClient {
  static var serviceDescriptor: GRPCServiceDescriptor { get }
  var interceptors: Metro_Starclub_V2_StarClubClientInterceptorFactoryProtocol? { get }

  func makeGetStatusCall(
    _ request: Metro_Starclub_V2_GetStatusRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Starclub_V2_GetStatusRequest, Metro_Starclub_V2_GetStatusResponse>

  func makeGetCampaignDescriptionCall(
    _ request: Metro_Starclub_V2_GetCampaignDescriptionRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Starclub_V2_GetCampaignDescriptionRequest, Metro_Starclub_V2_GetCampaignDescriptionResponse>

  func makeGetPointsSummaryCall(
    _ request: Metro_Starclub_V2_GetPointsSummaryRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Starclub_V2_GetPointsSummaryRequest, Metro_Starclub_V2_GetPointsSummaryResponse>

  func makeGetPointMovementsCall(
    _ request: Metro_Starclub_V2_GetPointMovementsRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Starclub_V2_GetPointMovementsRequest, Metro_Starclub_V2_GetPointMovementsResponse>

  func makeGetCouponsCall(
    _ request: Metro_Starclub_V2_GetCouponsRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Starclub_V2_GetCouponsRequest, Metro_Starclub_V2_GetCouponsResponse>

  func makeGetCouponByIDCall(
    _ request: Metro_Starclub_V2_GetCouponByIdRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Starclub_V2_GetCouponByIdRequest, Metro_Starclub_V2_GetCouponByIdResponse>

  func makeApplyCouponCall(
    _ request: Metro_Starclub_V2_ApplyCouponRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Starclub_V2_ApplyCouponRequest, Metro_Starclub_V2_ApplyCouponResponse>
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Metro_Starclub_V2_StarClubAsyncClientProtocol {
  public static var serviceDescriptor: GRPCServiceDescriptor {
    return Metro_Starclub_V2_StarClubClientMetadata.serviceDescriptor
  }

  public var interceptors: Metro_Starclub_V2_StarClubClientInterceptorFactoryProtocol? {
    return nil
  }

  public func makeGetStatusCall(
    _ request: Metro_Starclub_V2_GetStatusRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Starclub_V2_GetStatusRequest, Metro_Starclub_V2_GetStatusResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getStatus.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetStatusInterceptors() ?? []
    )
  }

  public func makeGetCampaignDescriptionCall(
    _ request: Metro_Starclub_V2_GetCampaignDescriptionRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Starclub_V2_GetCampaignDescriptionRequest, Metro_Starclub_V2_GetCampaignDescriptionResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getCampaignDescription.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCampaignDescriptionInterceptors() ?? []
    )
  }

  public func makeGetPointsSummaryCall(
    _ request: Metro_Starclub_V2_GetPointsSummaryRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Starclub_V2_GetPointsSummaryRequest, Metro_Starclub_V2_GetPointsSummaryResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getPointsSummary.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetPointsSummaryInterceptors() ?? []
    )
  }

  public func makeGetPointMovementsCall(
    _ request: Metro_Starclub_V2_GetPointMovementsRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Starclub_V2_GetPointMovementsRequest, Metro_Starclub_V2_GetPointMovementsResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getPointMovements.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetPointMovementsInterceptors() ?? []
    )
  }

  public func makeGetCouponsCall(
    _ request: Metro_Starclub_V2_GetCouponsRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Starclub_V2_GetCouponsRequest, Metro_Starclub_V2_GetCouponsResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getCoupons.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCouponsInterceptors() ?? []
    )
  }

  public func makeGetCouponByIDCall(
    _ request: Metro_Starclub_V2_GetCouponByIdRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Starclub_V2_GetCouponByIdRequest, Metro_Starclub_V2_GetCouponByIdResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getCouponById.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCouponByIdInterceptors() ?? []
    )
  }

  public func makeApplyCouponCall(
    _ request: Metro_Starclub_V2_ApplyCouponRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Starclub_V2_ApplyCouponRequest, Metro_Starclub_V2_ApplyCouponResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.applyCoupon.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeApplyCouponInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Metro_Starclub_V2_StarClubAsyncClientProtocol {
  public func getStatus(
    _ request: Metro_Starclub_V2_GetStatusRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Starclub_V2_GetStatusResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getStatus.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetStatusInterceptors() ?? []
    )
  }

  public func getCampaignDescription(
    _ request: Metro_Starclub_V2_GetCampaignDescriptionRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Starclub_V2_GetCampaignDescriptionResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getCampaignDescription.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCampaignDescriptionInterceptors() ?? []
    )
  }

  public func getPointsSummary(
    _ request: Metro_Starclub_V2_GetPointsSummaryRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Starclub_V2_GetPointsSummaryResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getPointsSummary.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetPointsSummaryInterceptors() ?? []
    )
  }

  public func getPointMovements(
    _ request: Metro_Starclub_V2_GetPointMovementsRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Starclub_V2_GetPointMovementsResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getPointMovements.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetPointMovementsInterceptors() ?? []
    )
  }

  public func getCoupons(
    _ request: Metro_Starclub_V2_GetCouponsRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Starclub_V2_GetCouponsResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getCoupons.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCouponsInterceptors() ?? []
    )
  }

  public func getCouponById(
    _ request: Metro_Starclub_V2_GetCouponByIdRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Starclub_V2_GetCouponByIdResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.getCouponById.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCouponByIdInterceptors() ?? []
    )
  }

  public func applyCoupon(
    _ request: Metro_Starclub_V2_ApplyCouponRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Starclub_V2_ApplyCouponResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Starclub_V2_StarClubClientMetadata.Methods.applyCoupon.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeApplyCouponInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public struct Metro_Starclub_V2_StarClubAsyncClient: Metro_Starclub_V2_StarClubAsyncClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Metro_Starclub_V2_StarClubClientInterceptorFactoryProtocol?

  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Starclub_V2_StarClubClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

public protocol Metro_Starclub_V2_StarClubClientInterceptorFactoryProtocol: Sendable {

  /// - Returns: Interceptors to use when invoking 'getStatus'.
  func makeGetStatusInterceptors() -> [ClientInterceptor<Metro_Starclub_V2_GetStatusRequest, Metro_Starclub_V2_GetStatusResponse>]

  /// - Returns: Interceptors to use when invoking 'getCampaignDescription'.
  func makeGetCampaignDescriptionInterceptors() -> [ClientInterceptor<Metro_Starclub_V2_GetCampaignDescriptionRequest, Metro_Starclub_V2_GetCampaignDescriptionResponse>]

  /// - Returns: Interceptors to use when invoking 'getPointsSummary'.
  func makeGetPointsSummaryInterceptors() -> [ClientInterceptor<Metro_Starclub_V2_GetPointsSummaryRequest, Metro_Starclub_V2_GetPointsSummaryResponse>]

  /// - Returns: Interceptors to use when invoking 'getPointMovements'.
  func makeGetPointMovementsInterceptors() -> [ClientInterceptor<Metro_Starclub_V2_GetPointMovementsRequest, Metro_Starclub_V2_GetPointMovementsResponse>]

  /// - Returns: Interceptors to use when invoking 'getCoupons'.
  func makeGetCouponsInterceptors() -> [ClientInterceptor<Metro_Starclub_V2_GetCouponsRequest, Metro_Starclub_V2_GetCouponsResponse>]

  /// - Returns: Interceptors to use when invoking 'getCouponById'.
  func makeGetCouponByIdInterceptors() -> [ClientInterceptor<Metro_Starclub_V2_GetCouponByIdRequest, Metro_Starclub_V2_GetCouponByIdResponse>]

  /// - Returns: Interceptors to use when invoking 'applyCoupon'.
  func makeApplyCouponInterceptors() -> [ClientInterceptor<Metro_Starclub_V2_ApplyCouponRequest, Metro_Starclub_V2_ApplyCouponResponse>]
}

public enum Metro_Starclub_V2_StarClubClientMetadata {
  public static let serviceDescriptor = GRPCServiceDescriptor(
    name: "StarClub",
    fullName: "metro.starclub.v2.StarClub",
    methods: [
      Metro_Starclub_V2_StarClubClientMetadata.Methods.getStatus,
      Metro_Starclub_V2_StarClubClientMetadata.Methods.getCampaignDescription,
      Metro_Starclub_V2_StarClubClientMetadata.Methods.getPointsSummary,
      Metro_Starclub_V2_StarClubClientMetadata.Methods.getPointMovements,
      Metro_Starclub_V2_StarClubClientMetadata.Methods.getCoupons,
      Metro_Starclub_V2_StarClubClientMetadata.Methods.getCouponById,
      Metro_Starclub_V2_StarClubClientMetadata.Methods.applyCoupon,
    ]
  )

  public enum Methods {
    public static let getStatus = GRPCMethodDescriptor(
      name: "GetStatus",
      path: "/metro.starclub.v2.StarClub/GetStatus",
      type: GRPCCallType.unary
    )

    public static let getCampaignDescription = GRPCMethodDescriptor(
      name: "GetCampaignDescription",
      path: "/metro.starclub.v2.StarClub/GetCampaignDescription",
      type: GRPCCallType.unary
    )

    public static let getPointsSummary = GRPCMethodDescriptor(
      name: "GetPointsSummary",
      path: "/metro.starclub.v2.StarClub/GetPointsSummary",
      type: GRPCCallType.unary
    )

    public static let getPointMovements = GRPCMethodDescriptor(
      name: "GetPointMovements",
      path: "/metro.starclub.v2.StarClub/GetPointMovements",
      type: GRPCCallType.unary
    )

    public static let getCoupons = GRPCMethodDescriptor(
      name: "GetCoupons",
      path: "/metro.starclub.v2.StarClub/GetCoupons",
      type: GRPCCallType.unary
    )

    public static let getCouponById = GRPCMethodDescriptor(
      name: "GetCouponById",
      path: "/metro.starclub.v2.StarClub/GetCouponById",
      type: GRPCCallType.unary
    )

    public static let applyCoupon = GRPCMethodDescriptor(
      name: "ApplyCoupon",
      path: "/metro.starclub.v2.StarClub/ApplyCoupon",
      type: GRPCCallType.unary
    )
  }
}
