//
//  IdentityGrpcClientImpl.swift
//
//
//  Created by Jan Maloušek on 13.05.2024.
//

import Foundation
import GRPC
import NIO
import Shared
import SwiftProtobuf

public class IdentityGrpcClientImpl: IdentityCallBackClient {
    private let registerDeviceClient: Appelis_Identity_V1_DeviceRegistrationAsyncClientProtocol
    private let identityServiceClient: Appelis_Identity_V1_IdentityServiceAsyncClientProtocol

    public init() {
        let processorCount = ProcessInfo.processInfo.processorCount
        let eventLoopGroup = PlatformSupport.makeEventLoopGroup(loopCount: processorCount)
        let channel = ClientConnection
            .usingTLS(with: .makeClientDefault(for: .best), on: eventLoopGroup)
            .connect(host: "dev.auth.appelis.app", port: 443)
        let callOptions = CallOptions(
            timeLimit: .timeout(.seconds(15))
        )

        self.registerDeviceClient = Appelis_Identity_V1_DeviceRegistrationAsyncClient(
            channel: channel,
            defaultCallOptions: callOptions
        )

        self.identityServiceClient = Appelis_Identity_V1_IdentityServiceAsyncClient(
            channel: channel,
            defaultCallOptions: callOptions
        )
    }

    public func registerDevice(request: RegisterDeviceRequest, responseCallBack: @escaping (RegisterDeviceResponse?, KotlinException?) -> Void) {
        Task {
            do {
                let response = try await registerDeviceClient.registerDevice(
                    .with {
                        $0.appKey = request.appKey
                        $0.uniqID = request.uniqId
                        $0.type = .registerIosV5
                    }
                )
                let (wireResponse, error) = response.toWireMessage(adapter: RegisterDeviceResponse.companion.ADAPTER)
                responseCallBack(wireResponse, error)
            } catch {
                responseCallBack(nil, KotlinException(message: error.localizedDescription))
            }
        }
    }

    public func createToken(request: CreateRequest, responseCallback: @escaping (CreateResponse?, KotlinException?) -> Void) {
        Task {
            do {
                let response = try await identityServiceClient.create(
                    .with {
                        $0.deviceKey = .with {
                            $0.appKey = request.deviceKey?.appKey ?? ""
                            $0.deviceUuid = request.deviceKey?.deviceUuid ?? ""
                        }
                    }
                )
                let (wireResponse, error) = response.toWireMessage(adapter: CreateResponse.companion.ADAPTER)
                responseCallback(wireResponse, error)
            } catch {
                responseCallback(nil, KotlinException(message: error.localizedDescription))
            }
        }
    }

    public func refreshToken(request: RefreshRequest, responseCallback: @escaping (RefreshResponse?, KotlinException?) -> Void) {
        Task {
            do {
                let response = try await identityServiceClient.refresh(
                    .with {
                        $0.refreshToken = request.refreshToken
                    }
                )
                let (wireResponse, error) = response.toWireMessage(adapter: RefreshResponse.companion.ADAPTER)
                responseCallback(wireResponse, error)
            } catch {
                responseCallback(nil, KotlinException(message: error.localizedDescription))
            }
        }
    }
}
