//
//  IdentityGrpcDSImpl.swift
//
//
//  Created by Jan Maloušek on 13.05.2024.
//

import Foundation
import GRPC
import NIO
import Shared
import SwiftProtobuf

public class IdentityGrpcDSImpl: BaseGrpcDS, IdentityCallBackDS {
    private let registerDeviceClient: Appelis_Identity_V1_DeviceRegistrationAsyncClientProtocol
    private let identityServiceClient: Appelis_Identity_V1_IdentityServiceAsyncClientProtocol

    public init(
        registerDeviceClient: Appelis_Identity_V1_DeviceRegistrationAsyncClientProtocol,
        identityServiceClient: Appelis_Identity_V1_IdentityServiceAsyncClientProtocol
    ) {
        self.registerDeviceClient = registerDeviceClient
        self.identityServiceClient = identityServiceClient
    }

    public func registerDevice(request: RegisterDeviceRequest, responseCallBack: @escaping (RegisterDeviceResponse?, KotlinException?) -> Void) {
        fetch(
            responseCallback: responseCallBack,
            wireAdapter: RegisterDeviceResponse.companion.ADAPTER
        ) { [registerDeviceClient] in
            try await registerDeviceClient.registerDevice(
                .with {
                    $0.appKey = request.appKey
                    $0.uniqID = request.uniqId
                    $0.type = .registerIosV5
                }
            )
        }
    }

    public func createToken(request: CreateRequest, responseCallback: @escaping (CreateResponse?, KotlinException?) -> Void) {
        fetch(
            responseCallback: responseCallback,
            wireAdapter: CreateResponse.companion.ADAPTER
        ) { [identityServiceClient] in
            try await identityServiceClient.create(
                .with {
                    $0.deviceKey = .with {
                        $0.appKey = request.deviceKey?.appKey ?? ""
                        $0.deviceUuid = request.deviceKey?.deviceUuid ?? ""
                    }
                }
            )
        }
    }

    public func refreshToken(request: RefreshRequest, responseCallback: @escaping (RefreshResponse?, KotlinException?) -> Void) {
        fetch(
            responseCallback: responseCallback,
            wireAdapter: RefreshResponse.companion.ADAPTER
        ) { [identityServiceClient] in
            try await identityServiceClient.refresh(
                .with {
                    $0.refreshToken = request.refreshToken
                }
            )
        }
    }
}
