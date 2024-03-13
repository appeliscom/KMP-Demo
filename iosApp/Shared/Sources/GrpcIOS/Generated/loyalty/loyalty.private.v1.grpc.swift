//
// DO NOT EDIT.
// swift-format-ignore-file
//
// Generated by the protocol buffer compiler.
// Source: loyalty/loyalty.private.v1.proto
//
import GRPC
import NIO
import NIOConcurrencyHelpers
import SwiftProtobuf


/// Usage: instantiate `Metro_Loyalty_V1_LoyaltyPrivateClient`, then call methods of this protocol to make API calls.
public protocol Metro_Loyalty_V1_LoyaltyPrivateClientProtocol: GRPCClient {
  var serviceName: String { get }
  var interceptors: Metro_Loyalty_V1_LoyaltyPrivateClientInterceptorFactoryProtocol? { get }

  func setAccountStatus(
    _ request: Metro_Loyalty_V1_SetAccountStatusRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Loyalty_V1_SetAccountStatusRequest, Metro_Loyalty_V1_SetAccountStatusResponse>

  func addAdminCorrection(
    _ request: Metro_Loyalty_V1_AddAdminCorrectionRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Loyalty_V1_AddAdminCorrectionRequest, Metro_Loyalty_V1_AddAdminCorrectionResponse>

  func getAccountsPaged(
    _ request: Metro_Loyalty_V1_GetAccountsPagedRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Loyalty_V1_GetAccountsPagedRequest, Metro_Loyalty_V1_GetAccountsPagedResponse>

  func getAccountDetail(
    _ request: Metro_Loyalty_V1_GetAccountDetailRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Loyalty_V1_GetAccountDetailRequest, Metro_Loyalty_V1_GetAccountDetailResponse>

  func getPointMovementsPagedPrivate(
    _ request: Metro_Loyalty_V1_GetPointMovementsPagedPrivateRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Loyalty_V1_GetPointMovementsPagedPrivateRequest, Metro_Loyalty_V1_GetPointMovementsPagedPrivateResponse>

  func getRewards(
    _ request: Metro_Loyalty_V1_GetRewardsRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Loyalty_V1_GetRewardsRequest, Metro_Loyalty_V1_GetRewardsResponse>

  func getRewardDetail(
    _ request: Metro_Loyalty_V1_GetRewardDetailRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Loyalty_V1_GetRewardDetailRequest, Metro_Loyalty_V1_GetRewardDetailResponse>

  func setRewardDetail(
    _ request: Metro_Loyalty_V1_SetRewardDetailRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Loyalty_V1_SetRewardDetailRequest, Metro_Loyalty_V1_SetRewardDetailResponse>

  func deleteReward(
    _ request: Metro_Loyalty_V1_DeleteRewardRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Loyalty_V1_DeleteRewardRequest, SwiftProtobuf.Google_Protobuf_Empty>

  func getCampaign(
    _ request: Metro_Loyalty_V1_GetCampaignRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Loyalty_V1_GetCampaignRequest, Metro_Loyalty_V1_GetCampaignResponse>

  func updateCampaign(
    _ request: Metro_Loyalty_V1_UpdateCampaignRequest,
    callOptions: CallOptions?
  ) -> UnaryCall<Metro_Loyalty_V1_UpdateCampaignRequest, Metro_Loyalty_V1_UpdateCampaignResponse>
}

extension Metro_Loyalty_V1_LoyaltyPrivateClientProtocol {
  public var serviceName: String {
    return "metro.loyalty.v1.LoyaltyPrivate"
  }

  /// Unary call to SetAccountStatus
  ///
  /// - Parameters:
  ///   - request: Request to send to SetAccountStatus.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func setAccountStatus(
    _ request: Metro_Loyalty_V1_SetAccountStatusRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Loyalty_V1_SetAccountStatusRequest, Metro_Loyalty_V1_SetAccountStatusResponse> {
    return self.makeUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.setAccountStatus.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetAccountStatusInterceptors() ?? []
    )
  }

  /// Unary call to AddAdminCorrection
  ///
  /// - Parameters:
  ///   - request: Request to send to AddAdminCorrection.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func addAdminCorrection(
    _ request: Metro_Loyalty_V1_AddAdminCorrectionRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Loyalty_V1_AddAdminCorrectionRequest, Metro_Loyalty_V1_AddAdminCorrectionResponse> {
    return self.makeUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.addAdminCorrection.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeAddAdminCorrectionInterceptors() ?? []
    )
  }

  /// Unary call to GetAccountsPaged
  ///
  /// - Parameters:
  ///   - request: Request to send to GetAccountsPaged.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getAccountsPaged(
    _ request: Metro_Loyalty_V1_GetAccountsPagedRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Loyalty_V1_GetAccountsPagedRequest, Metro_Loyalty_V1_GetAccountsPagedResponse> {
    return self.makeUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getAccountsPaged.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAccountsPagedInterceptors() ?? []
    )
  }

  /// Unary call to GetAccountDetail
  ///
  /// - Parameters:
  ///   - request: Request to send to GetAccountDetail.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getAccountDetail(
    _ request: Metro_Loyalty_V1_GetAccountDetailRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Loyalty_V1_GetAccountDetailRequest, Metro_Loyalty_V1_GetAccountDetailResponse> {
    return self.makeUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getAccountDetail.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAccountDetailInterceptors() ?? []
    )
  }

  /// Unary call to GetPointMovementsPagedPrivate
  ///
  /// - Parameters:
  ///   - request: Request to send to GetPointMovementsPagedPrivate.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getPointMovementsPagedPrivate(
    _ request: Metro_Loyalty_V1_GetPointMovementsPagedPrivateRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Loyalty_V1_GetPointMovementsPagedPrivateRequest, Metro_Loyalty_V1_GetPointMovementsPagedPrivateResponse> {
    return self.makeUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getPointMovementsPagedPrivate.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetPointMovementsPagedPrivateInterceptors() ?? []
    )
  }

  /// Unary call to GetRewards
  ///
  /// - Parameters:
  ///   - request: Request to send to GetRewards.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getRewards(
    _ request: Metro_Loyalty_V1_GetRewardsRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Loyalty_V1_GetRewardsRequest, Metro_Loyalty_V1_GetRewardsResponse> {
    return self.makeUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getRewards.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetRewardsInterceptors() ?? []
    )
  }

  /// Unary call to GetRewardDetail
  ///
  /// - Parameters:
  ///   - request: Request to send to GetRewardDetail.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getRewardDetail(
    _ request: Metro_Loyalty_V1_GetRewardDetailRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Loyalty_V1_GetRewardDetailRequest, Metro_Loyalty_V1_GetRewardDetailResponse> {
    return self.makeUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getRewardDetail.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetRewardDetailInterceptors() ?? []
    )
  }

  /// Unary call to SetRewardDetail
  ///
  /// - Parameters:
  ///   - request: Request to send to SetRewardDetail.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func setRewardDetail(
    _ request: Metro_Loyalty_V1_SetRewardDetailRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Loyalty_V1_SetRewardDetailRequest, Metro_Loyalty_V1_SetRewardDetailResponse> {
    return self.makeUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.setRewardDetail.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetRewardDetailInterceptors() ?? []
    )
  }

  /// Unary call to DeleteReward
  ///
  /// - Parameters:
  ///   - request: Request to send to DeleteReward.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func deleteReward(
    _ request: Metro_Loyalty_V1_DeleteRewardRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Loyalty_V1_DeleteRewardRequest, SwiftProtobuf.Google_Protobuf_Empty> {
    return self.makeUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.deleteReward.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteRewardInterceptors() ?? []
    )
  }

  /// Unary call to GetCampaign
  ///
  /// - Parameters:
  ///   - request: Request to send to GetCampaign.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func getCampaign(
    _ request: Metro_Loyalty_V1_GetCampaignRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Loyalty_V1_GetCampaignRequest, Metro_Loyalty_V1_GetCampaignResponse> {
    return self.makeUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getCampaign.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCampaignInterceptors() ?? []
    )
  }

  /// Unary call to UpdateCampaign
  ///
  /// - Parameters:
  ///   - request: Request to send to UpdateCampaign.
  ///   - callOptions: Call options.
  /// - Returns: A `UnaryCall` with futures for the metadata, status and response.
  public func updateCampaign(
    _ request: Metro_Loyalty_V1_UpdateCampaignRequest,
    callOptions: CallOptions? = nil
  ) -> UnaryCall<Metro_Loyalty_V1_UpdateCampaignRequest, Metro_Loyalty_V1_UpdateCampaignResponse> {
    return self.makeUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.updateCampaign.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeUpdateCampaignInterceptors() ?? []
    )
  }
}

@available(*, deprecated)
extension Metro_Loyalty_V1_LoyaltyPrivateClient: @unchecked Sendable {}

@available(*, deprecated, renamed: "Metro_Loyalty_V1_LoyaltyPrivateNIOClient")
public final class Metro_Loyalty_V1_LoyaltyPrivateClient: Metro_Loyalty_V1_LoyaltyPrivateClientProtocol {
  private let lock = Lock()
  private var _defaultCallOptions: CallOptions
  private var _interceptors: Metro_Loyalty_V1_LoyaltyPrivateClientInterceptorFactoryProtocol?
  public let channel: GRPCChannel
  public var defaultCallOptions: CallOptions {
    get { self.lock.withLock { return self._defaultCallOptions } }
    set { self.lock.withLockVoid { self._defaultCallOptions = newValue } }
  }
  public var interceptors: Metro_Loyalty_V1_LoyaltyPrivateClientInterceptorFactoryProtocol? {
    get { self.lock.withLock { return self._interceptors } }
    set { self.lock.withLockVoid { self._interceptors = newValue } }
  }

  /// Creates a client for the metro.loyalty.v1.LoyaltyPrivate service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Loyalty_V1_LoyaltyPrivateClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self._defaultCallOptions = defaultCallOptions
    self._interceptors = interceptors
  }
}

public struct Metro_Loyalty_V1_LoyaltyPrivateNIOClient: Metro_Loyalty_V1_LoyaltyPrivateClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Metro_Loyalty_V1_LoyaltyPrivateClientInterceptorFactoryProtocol?

  /// Creates a client for the metro.loyalty.v1.LoyaltyPrivate service.
  ///
  /// - Parameters:
  ///   - channel: `GRPCChannel` to the service host.
  ///   - defaultCallOptions: Options to use for each service call if the user doesn't provide them.
  ///   - interceptors: A factory providing interceptors for each RPC.
  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Loyalty_V1_LoyaltyPrivateClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public protocol Metro_Loyalty_V1_LoyaltyPrivateAsyncClientProtocol: GRPCClient {
  static var serviceDescriptor: GRPCServiceDescriptor { get }
  var interceptors: Metro_Loyalty_V1_LoyaltyPrivateClientInterceptorFactoryProtocol? { get }

  func makeSetAccountStatusCall(
    _ request: Metro_Loyalty_V1_SetAccountStatusRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_SetAccountStatusRequest, Metro_Loyalty_V1_SetAccountStatusResponse>

  func makeAddAdminCorrectionCall(
    _ request: Metro_Loyalty_V1_AddAdminCorrectionRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_AddAdminCorrectionRequest, Metro_Loyalty_V1_AddAdminCorrectionResponse>

  func makeGetAccountsPagedCall(
    _ request: Metro_Loyalty_V1_GetAccountsPagedRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_GetAccountsPagedRequest, Metro_Loyalty_V1_GetAccountsPagedResponse>

  func makeGetAccountDetailCall(
    _ request: Metro_Loyalty_V1_GetAccountDetailRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_GetAccountDetailRequest, Metro_Loyalty_V1_GetAccountDetailResponse>

  func makeGetPointMovementsPagedPrivateCall(
    _ request: Metro_Loyalty_V1_GetPointMovementsPagedPrivateRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_GetPointMovementsPagedPrivateRequest, Metro_Loyalty_V1_GetPointMovementsPagedPrivateResponse>

  func makeGetRewardsCall(
    _ request: Metro_Loyalty_V1_GetRewardsRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_GetRewardsRequest, Metro_Loyalty_V1_GetRewardsResponse>

  func makeGetRewardDetailCall(
    _ request: Metro_Loyalty_V1_GetRewardDetailRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_GetRewardDetailRequest, Metro_Loyalty_V1_GetRewardDetailResponse>

  func makeSetRewardDetailCall(
    _ request: Metro_Loyalty_V1_SetRewardDetailRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_SetRewardDetailRequest, Metro_Loyalty_V1_SetRewardDetailResponse>

  func makeDeleteRewardCall(
    _ request: Metro_Loyalty_V1_DeleteRewardRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_DeleteRewardRequest, SwiftProtobuf.Google_Protobuf_Empty>

  func makeGetCampaignCall(
    _ request: Metro_Loyalty_V1_GetCampaignRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_GetCampaignRequest, Metro_Loyalty_V1_GetCampaignResponse>

  func makeUpdateCampaignCall(
    _ request: Metro_Loyalty_V1_UpdateCampaignRequest,
    callOptions: CallOptions?
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_UpdateCampaignRequest, Metro_Loyalty_V1_UpdateCampaignResponse>
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Metro_Loyalty_V1_LoyaltyPrivateAsyncClientProtocol {
  public static var serviceDescriptor: GRPCServiceDescriptor {
    return Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.serviceDescriptor
  }

  public var interceptors: Metro_Loyalty_V1_LoyaltyPrivateClientInterceptorFactoryProtocol? {
    return nil
  }

  public func makeSetAccountStatusCall(
    _ request: Metro_Loyalty_V1_SetAccountStatusRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_SetAccountStatusRequest, Metro_Loyalty_V1_SetAccountStatusResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.setAccountStatus.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetAccountStatusInterceptors() ?? []
    )
  }

  public func makeAddAdminCorrectionCall(
    _ request: Metro_Loyalty_V1_AddAdminCorrectionRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_AddAdminCorrectionRequest, Metro_Loyalty_V1_AddAdminCorrectionResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.addAdminCorrection.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeAddAdminCorrectionInterceptors() ?? []
    )
  }

  public func makeGetAccountsPagedCall(
    _ request: Metro_Loyalty_V1_GetAccountsPagedRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_GetAccountsPagedRequest, Metro_Loyalty_V1_GetAccountsPagedResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getAccountsPaged.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAccountsPagedInterceptors() ?? []
    )
  }

  public func makeGetAccountDetailCall(
    _ request: Metro_Loyalty_V1_GetAccountDetailRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_GetAccountDetailRequest, Metro_Loyalty_V1_GetAccountDetailResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getAccountDetail.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAccountDetailInterceptors() ?? []
    )
  }

  public func makeGetPointMovementsPagedPrivateCall(
    _ request: Metro_Loyalty_V1_GetPointMovementsPagedPrivateRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_GetPointMovementsPagedPrivateRequest, Metro_Loyalty_V1_GetPointMovementsPagedPrivateResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getPointMovementsPagedPrivate.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetPointMovementsPagedPrivateInterceptors() ?? []
    )
  }

  public func makeGetRewardsCall(
    _ request: Metro_Loyalty_V1_GetRewardsRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_GetRewardsRequest, Metro_Loyalty_V1_GetRewardsResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getRewards.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetRewardsInterceptors() ?? []
    )
  }

  public func makeGetRewardDetailCall(
    _ request: Metro_Loyalty_V1_GetRewardDetailRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_GetRewardDetailRequest, Metro_Loyalty_V1_GetRewardDetailResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getRewardDetail.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetRewardDetailInterceptors() ?? []
    )
  }

  public func makeSetRewardDetailCall(
    _ request: Metro_Loyalty_V1_SetRewardDetailRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_SetRewardDetailRequest, Metro_Loyalty_V1_SetRewardDetailResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.setRewardDetail.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetRewardDetailInterceptors() ?? []
    )
  }

  public func makeDeleteRewardCall(
    _ request: Metro_Loyalty_V1_DeleteRewardRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_DeleteRewardRequest, SwiftProtobuf.Google_Protobuf_Empty> {
    return self.makeAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.deleteReward.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteRewardInterceptors() ?? []
    )
  }

  public func makeGetCampaignCall(
    _ request: Metro_Loyalty_V1_GetCampaignRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_GetCampaignRequest, Metro_Loyalty_V1_GetCampaignResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getCampaign.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCampaignInterceptors() ?? []
    )
  }

  public func makeUpdateCampaignCall(
    _ request: Metro_Loyalty_V1_UpdateCampaignRequest,
    callOptions: CallOptions? = nil
  ) -> GRPCAsyncUnaryCall<Metro_Loyalty_V1_UpdateCampaignRequest, Metro_Loyalty_V1_UpdateCampaignResponse> {
    return self.makeAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.updateCampaign.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeUpdateCampaignInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
extension Metro_Loyalty_V1_LoyaltyPrivateAsyncClientProtocol {
  public func setAccountStatus(
    _ request: Metro_Loyalty_V1_SetAccountStatusRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Loyalty_V1_SetAccountStatusResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.setAccountStatus.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetAccountStatusInterceptors() ?? []
    )
  }

  public func addAdminCorrection(
    _ request: Metro_Loyalty_V1_AddAdminCorrectionRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Loyalty_V1_AddAdminCorrectionResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.addAdminCorrection.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeAddAdminCorrectionInterceptors() ?? []
    )
  }

  public func getAccountsPaged(
    _ request: Metro_Loyalty_V1_GetAccountsPagedRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Loyalty_V1_GetAccountsPagedResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getAccountsPaged.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAccountsPagedInterceptors() ?? []
    )
  }

  public func getAccountDetail(
    _ request: Metro_Loyalty_V1_GetAccountDetailRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Loyalty_V1_GetAccountDetailResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getAccountDetail.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetAccountDetailInterceptors() ?? []
    )
  }

  public func getPointMovementsPagedPrivate(
    _ request: Metro_Loyalty_V1_GetPointMovementsPagedPrivateRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Loyalty_V1_GetPointMovementsPagedPrivateResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getPointMovementsPagedPrivate.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetPointMovementsPagedPrivateInterceptors() ?? []
    )
  }

  public func getRewards(
    _ request: Metro_Loyalty_V1_GetRewardsRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Loyalty_V1_GetRewardsResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getRewards.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetRewardsInterceptors() ?? []
    )
  }

  public func getRewardDetail(
    _ request: Metro_Loyalty_V1_GetRewardDetailRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Loyalty_V1_GetRewardDetailResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getRewardDetail.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetRewardDetailInterceptors() ?? []
    )
  }

  public func setRewardDetail(
    _ request: Metro_Loyalty_V1_SetRewardDetailRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Loyalty_V1_SetRewardDetailResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.setRewardDetail.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeSetRewardDetailInterceptors() ?? []
    )
  }

  public func deleteReward(
    _ request: Metro_Loyalty_V1_DeleteRewardRequest,
    callOptions: CallOptions? = nil
  ) async throws -> SwiftProtobuf.Google_Protobuf_Empty {
    return try await self.performAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.deleteReward.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeDeleteRewardInterceptors() ?? []
    )
  }

  public func getCampaign(
    _ request: Metro_Loyalty_V1_GetCampaignRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Loyalty_V1_GetCampaignResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getCampaign.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeGetCampaignInterceptors() ?? []
    )
  }

  public func updateCampaign(
    _ request: Metro_Loyalty_V1_UpdateCampaignRequest,
    callOptions: CallOptions? = nil
  ) async throws -> Metro_Loyalty_V1_UpdateCampaignResponse {
    return try await self.performAsyncUnaryCall(
      path: Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.updateCampaign.path,
      request: request,
      callOptions: callOptions ?? self.defaultCallOptions,
      interceptors: self.interceptors?.makeUpdateCampaignInterceptors() ?? []
    )
  }
}

@available(macOS 10.15, iOS 13, tvOS 13, watchOS 6, *)
public struct Metro_Loyalty_V1_LoyaltyPrivateAsyncClient: Metro_Loyalty_V1_LoyaltyPrivateAsyncClientProtocol {
  public var channel: GRPCChannel
  public var defaultCallOptions: CallOptions
  public var interceptors: Metro_Loyalty_V1_LoyaltyPrivateClientInterceptorFactoryProtocol?

  public init(
    channel: GRPCChannel,
    defaultCallOptions: CallOptions = CallOptions(),
    interceptors: Metro_Loyalty_V1_LoyaltyPrivateClientInterceptorFactoryProtocol? = nil
  ) {
    self.channel = channel
    self.defaultCallOptions = defaultCallOptions
    self.interceptors = interceptors
  }
}

public protocol Metro_Loyalty_V1_LoyaltyPrivateClientInterceptorFactoryProtocol: Sendable {

  /// - Returns: Interceptors to use when invoking 'setAccountStatus'.
  func makeSetAccountStatusInterceptors() -> [ClientInterceptor<Metro_Loyalty_V1_SetAccountStatusRequest, Metro_Loyalty_V1_SetAccountStatusResponse>]

  /// - Returns: Interceptors to use when invoking 'addAdminCorrection'.
  func makeAddAdminCorrectionInterceptors() -> [ClientInterceptor<Metro_Loyalty_V1_AddAdminCorrectionRequest, Metro_Loyalty_V1_AddAdminCorrectionResponse>]

  /// - Returns: Interceptors to use when invoking 'getAccountsPaged'.
  func makeGetAccountsPagedInterceptors() -> [ClientInterceptor<Metro_Loyalty_V1_GetAccountsPagedRequest, Metro_Loyalty_V1_GetAccountsPagedResponse>]

  /// - Returns: Interceptors to use when invoking 'getAccountDetail'.
  func makeGetAccountDetailInterceptors() -> [ClientInterceptor<Metro_Loyalty_V1_GetAccountDetailRequest, Metro_Loyalty_V1_GetAccountDetailResponse>]

  /// - Returns: Interceptors to use when invoking 'getPointMovementsPagedPrivate'.
  func makeGetPointMovementsPagedPrivateInterceptors() -> [ClientInterceptor<Metro_Loyalty_V1_GetPointMovementsPagedPrivateRequest, Metro_Loyalty_V1_GetPointMovementsPagedPrivateResponse>]

  /// - Returns: Interceptors to use when invoking 'getRewards'.
  func makeGetRewardsInterceptors() -> [ClientInterceptor<Metro_Loyalty_V1_GetRewardsRequest, Metro_Loyalty_V1_GetRewardsResponse>]

  /// - Returns: Interceptors to use when invoking 'getRewardDetail'.
  func makeGetRewardDetailInterceptors() -> [ClientInterceptor<Metro_Loyalty_V1_GetRewardDetailRequest, Metro_Loyalty_V1_GetRewardDetailResponse>]

  /// - Returns: Interceptors to use when invoking 'setRewardDetail'.
  func makeSetRewardDetailInterceptors() -> [ClientInterceptor<Metro_Loyalty_V1_SetRewardDetailRequest, Metro_Loyalty_V1_SetRewardDetailResponse>]

  /// - Returns: Interceptors to use when invoking 'deleteReward'.
  func makeDeleteRewardInterceptors() -> [ClientInterceptor<Metro_Loyalty_V1_DeleteRewardRequest, SwiftProtobuf.Google_Protobuf_Empty>]

  /// - Returns: Interceptors to use when invoking 'getCampaign'.
  func makeGetCampaignInterceptors() -> [ClientInterceptor<Metro_Loyalty_V1_GetCampaignRequest, Metro_Loyalty_V1_GetCampaignResponse>]

  /// - Returns: Interceptors to use when invoking 'updateCampaign'.
  func makeUpdateCampaignInterceptors() -> [ClientInterceptor<Metro_Loyalty_V1_UpdateCampaignRequest, Metro_Loyalty_V1_UpdateCampaignResponse>]
}

public enum Metro_Loyalty_V1_LoyaltyPrivateClientMetadata {
  public static let serviceDescriptor = GRPCServiceDescriptor(
    name: "LoyaltyPrivate",
    fullName: "metro.loyalty.v1.LoyaltyPrivate",
    methods: [
      Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.setAccountStatus,
      Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.addAdminCorrection,
      Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getAccountsPaged,
      Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getAccountDetail,
      Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getPointMovementsPagedPrivate,
      Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getRewards,
      Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getRewardDetail,
      Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.setRewardDetail,
      Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.deleteReward,
      Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.getCampaign,
      Metro_Loyalty_V1_LoyaltyPrivateClientMetadata.Methods.updateCampaign,
    ]
  )

  public enum Methods {
    public static let setAccountStatus = GRPCMethodDescriptor(
      name: "SetAccountStatus",
      path: "/metro.loyalty.v1.LoyaltyPrivate/SetAccountStatus",
      type: GRPCCallType.unary
    )

    public static let addAdminCorrection = GRPCMethodDescriptor(
      name: "AddAdminCorrection",
      path: "/metro.loyalty.v1.LoyaltyPrivate/AddAdminCorrection",
      type: GRPCCallType.unary
    )

    public static let getAccountsPaged = GRPCMethodDescriptor(
      name: "GetAccountsPaged",
      path: "/metro.loyalty.v1.LoyaltyPrivate/GetAccountsPaged",
      type: GRPCCallType.unary
    )

    public static let getAccountDetail = GRPCMethodDescriptor(
      name: "GetAccountDetail",
      path: "/metro.loyalty.v1.LoyaltyPrivate/GetAccountDetail",
      type: GRPCCallType.unary
    )

    public static let getPointMovementsPagedPrivate = GRPCMethodDescriptor(
      name: "GetPointMovementsPagedPrivate",
      path: "/metro.loyalty.v1.LoyaltyPrivate/GetPointMovementsPagedPrivate",
      type: GRPCCallType.unary
    )

    public static let getRewards = GRPCMethodDescriptor(
      name: "GetRewards",
      path: "/metro.loyalty.v1.LoyaltyPrivate/GetRewards",
      type: GRPCCallType.unary
    )

    public static let getRewardDetail = GRPCMethodDescriptor(
      name: "GetRewardDetail",
      path: "/metro.loyalty.v1.LoyaltyPrivate/GetRewardDetail",
      type: GRPCCallType.unary
    )

    public static let setRewardDetail = GRPCMethodDescriptor(
      name: "SetRewardDetail",
      path: "/metro.loyalty.v1.LoyaltyPrivate/SetRewardDetail",
      type: GRPCCallType.unary
    )

    public static let deleteReward = GRPCMethodDescriptor(
      name: "DeleteReward",
      path: "/metro.loyalty.v1.LoyaltyPrivate/DeleteReward",
      type: GRPCCallType.unary
    )

    public static let getCampaign = GRPCMethodDescriptor(
      name: "GetCampaign",
      path: "/metro.loyalty.v1.LoyaltyPrivate/GetCampaign",
      type: GRPCCallType.unary
    )

    public static let updateCampaign = GRPCMethodDescriptor(
      name: "UpdateCampaign",
      path: "/metro.loyalty.v1.LoyaltyPrivate/UpdateCampaign",
      type: GRPCCallType.unary
    )
  }
}
