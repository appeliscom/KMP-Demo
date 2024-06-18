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
        return LeafletSuspendDSImpl(callBackDS: LeafletGrpcDSImpl(client: client))
    }
    
    public func assortmentDS() -> AssortmentSuspendDS {
        let apiUrlProvider: ApiUrlProvider = inject()
        let channel = ClientConnection
            .usingTLS(with: .makeClientDefault(for: .best), on: eventLoopGroup)
            .connect(host: apiUrlProvider.assortmentConnection.hostUrl, port: Int(apiUrlProvider.assortmentConnection.port))
        
        let client = Metro_Assortment_V1_CatalogAsyncClient(
            channel: channel,
            defaultCallOptions: callOptions
        )
        return AssortmentSuspendDSImpl(callBackDS: AssortmentGrpcDSImpl(client: client))
    }
    
    public func categoryDS() -> CategorySuspendDS {
        let apiUrlProvider: ApiUrlProvider = inject()
        
        let channel = ClientConnection
            .usingTLS(with: .makeClientDefault(for: .best), on: eventLoopGroup)
            .connect(host: apiUrlProvider.categoryConnection.hostUrl, port: Int(apiUrlProvider.categoryConnection.port))
        
        let client = Appelis_Category_V1_CategoryCatalogAsyncClient(
            channel: channel,
            defaultCallOptions: callOptions
        )
        return CategorySuspendDSImpl(callBackDS: CategoryGrpcDSImpl(client: client))
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
