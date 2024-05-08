//
//  LeafletGrpcClientImpl.swift
//
//
//  Created by Jan Maloušek on 28.04.2024.
//

import Foundation
import GRPC
import NIO
import Shared
import SwiftProtobuf

public class LeafletGrpcClientImpl: LeafletCallBackClient {
    let client: Metro_Leaflet_V1_PublicAsyncClientProtocol

    public init() {
        let processorCount = ProcessInfo.processInfo.processorCount
        let eventLoopGroup = PlatformSupport.makeEventLoopGroup(loopCount: processorCount)
        let channel = ClientConnection
            .usingTLS(with: .makeClientDefault(for: .best), on: eventLoopGroup)
            .connect(host: "dev.leaflet.appelis.app", port: 443)
        let callOptions = CallOptions(
            timeLimit: .timeout(.seconds(15))
        )

        self.client = Metro_Leaflet_V1_PublicAsyncClient(
            channel: channel,
            defaultCallOptions: callOptions
        )
    }
    
    public func getLeaflets(request: GetLeafletsRequest, responseCallback: @escaping (GetLeafletsResponse?, KotlinException?) -> Void) {
        Task {
            let response = try await client.getLeaflets(
                .with {
                    $0.token = .with { $0.data = request.token?.data_ ?? "" }
                    $0.business = request.business
                }
            )
            print(response)
            
            let (wireResponse, error) = response.toWireMessage(adapter: GetLeafletsResponse.companion.ADAPTER)
            responseCallback(wireResponse, error)
        }
    }
}
