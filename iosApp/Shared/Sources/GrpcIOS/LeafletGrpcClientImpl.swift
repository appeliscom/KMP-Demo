// The Swift Programming Language
// https://docs.swift.org/swift-book

import Foundation
import GRPC
import NIO
import Shared
import SwiftProtobuf

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

        self.client = Metro_Leaflet_V1_PublicAsyncClient(
            channel: channel,
            defaultCallOptions: callOptions
        )
    }

    public func getLeaflets() async throws {
        let response = try await client.getLeaflets(
            .with {
                $0.token = .with { $0.data = "eyJhbGciOiJIUzUxMiIsInR5cCI6IkpXVCJ9.eyJleHAiOjE3MTAzMzE1MjcsImlhdCI6MTcxMDMzMTIyNywiaXNzIjoiQXBwZWxpc0lkZW50aXR5UHJvdmlkZXIiLCJjbGFpbXMiOnsiYXBwZWxpcy5kZXZpY2VJZCI6IjE2NzYwIiwiYXBwZWxpcy5tb2JpbGVVc2VySWQiOiIxODU5MTcxOSIsImFwcGVsaXMucHJvamVjdElkIjoiMSJ9fQ.UsHLhOZ3pluhw9K_wIciNbqNYlIVwj_SGTPY-vkb2h3_qY0t2vvtxX2VCaR-P86UcS7RM9ITWsVjccmWP2Mieg" }
                $0.business = "Brno"
            }
        )

        print(response)
    }
}

private extension SwiftProtobuf.Message {
    func toWireMessage<WireMessage, Adapter: Wire_runtimeProtoAdapter<WireMessage>>(adapter: Adapter) -> (WireMessage?, KotlinException?) {
        do {
            let data = try self.serializedData()
            let result = adapter.decode(bytes: data.toKotlinByteArray())

            if let nResult = result {
                return (nResult, nil)
            } else {
                return (nil, KotlinException(message: "Cannot parse message data"))
            }
        } catch let err {
            return (nil, KotlinException(message: err.localizedDescription))
        }
    }
}

fileprivate extension Data {
    func toKotlinByteArray() -> KotlinByteArray {
        let nsData = NSData(data: self)

        return KotlinByteArray(size: Int32(self.count)) { index -> KotlinByte in
            let byte = nsData.bytes.load(fromByteOffset: Int(truncating: index), as: Int8.self)
            return KotlinByte(value: byte)
        }
    }
}
