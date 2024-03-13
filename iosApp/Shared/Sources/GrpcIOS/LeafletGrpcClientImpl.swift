// The Swift Programming Language
// https://docs.swift.org/swift-book

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
