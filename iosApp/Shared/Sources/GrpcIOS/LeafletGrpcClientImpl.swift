// The Swift Programming Language
// https://docs.swift.org/swift-book

import Foundation
import GRPC
import NIO
import SwiftProtobuf
import Shared

public struct LeafletGrpcClientImpl {
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
        
        client = Metro_Leaflet_V1_PublicAsyncClient(
            channel: channel,
            defaultCallOptions: callOptions
        )
    }
    
    public func getLeaflets() async throws {
        let response = try await client.getLeaflets(
            .with {
                $0.token = .with { $0.data =  "eyJhbGciOiJIUzUxMiIsInR5cCI6IkpXVCJ9.eyJleHAiOjE3MTAzMzE1MjcsImlhdCI6MTcxMDMzMTIyNywiaXNzIjoiQXBwZWxpc0lkZW50aXR5UHJvdmlkZXIiLCJjbGFpbXMiOnsiYXBwZWxpcy5kZXZpY2VJZCI6IjE2NzYwIiwiYXBwZWxpcy5tb2JpbGVVc2VySWQiOiIxODU5MTcxOSIsImFwcGVsaXMucHJvamVjdElkIjoiMSJ9fQ.UsHLhOZ3pluhw9K_wIciNbqNYlIVwj_SGTPY-vkb2h3_qY0t2vvtxX2VCaR-P86UcS7RM9ITWsVjccmWP2Mieg"  }
                $0.business = "Brno"
            }
        )
        
        print(response)
    }
}


