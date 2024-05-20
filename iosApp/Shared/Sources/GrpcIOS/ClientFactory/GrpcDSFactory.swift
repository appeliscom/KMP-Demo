//
//  GrpcDSFactory.swift
//
//
//  Created by Jan Maloušek on 31.03.2024.
//

import Foundation
import GRPC
import NIO
import Shared
import SwiftProtobuf
import SwiftUICore

public class GrpcDSFactoryImpl: GrpcDSFactory {
    private let callOptions = CallOptions(timeLimit: .timeout(.seconds(15)))
    private let eventLoopGroup = PlatformSupport.makeEventLoopGroup(loopCount: ProcessInfo.processInfo.processorCount)
    
    public init() {}
    
    public func leafletDS() -> LeafletSuspendDS {
        let apiUrlProvider: ApiUrlProvider = inject()
        let channel = ClientConnection
            .usingTLS(with: .makeClientDefault(for: .best), on: eventLoopGroup)
            .connect(host: apiUrlProvider.leafletConnection.hostUrl, port: Int(apiUrlProvider.leafletConnection.port))
        
        let client = Metro_Leaflet_V1_PublicAsyncClient(
            channel: channel,
            defaultCallOptions: callOptions
        )
        let dataSource = LeafletGrpcDSImpl(client: client)
        return LeafletSuspendDSImpl(callBackDS: dataSource)
    }
    
    public func assortmentByCategoryDS() -> AssortmentByCategorySuspendDS {
        let apiUrlProvider: ApiUrlProvider = inject()
        let channel = ClientConnection
            .usingTLS(with: .makeClientDefault(for: .best), on: eventLoopGroup)
            .connect(host: apiUrlProvider.assortmentConnection.hostUrl, port: Int(apiUrlProvider.assortmentConnection.port))
        
        let client = Metro_Assortment_V1_CatalogAsyncClient(
            channel: channel,
            defaultCallOptions: callOptions
        )
        let dataSource = AssortmentByCategoryGrpcDSImpl(client: client)
        return AssortmentByCategorySuspendDSImpl(callBackDS: dataSource)
    }
    
    public func identityDS() -> IdentitySuspendDS {
        let apiUrlProvider: ApiUrlProvider = inject()
        let channel = ClientConnection
            .usingTLS(with: .makeClientDefault(for: .best), on: eventLoopGroup)
            .connect(host: apiUrlProvider.authConnection.hostUrl, port: Int(apiUrlProvider.authConnection.port))
        
        let registerDeviceClient = Appelis_Identity_V1_DeviceRegistrationAsyncClient(
            channel: channel,
            defaultCallOptions: callOptions
        )
        
        let identityServiceClient = Appelis_Identity_V1_IdentityServiceAsyncClient(
            channel: channel,
            defaultCallOptions: callOptions
        )
        
        let dataSource = IdentityGrpcDSImpl(
            registerDeviceClient: registerDeviceClient,
            identityServiceClient: identityServiceClient
        )
        return IdentitySuspendDSImpl(callBackDS: dataSource)
    }
}
