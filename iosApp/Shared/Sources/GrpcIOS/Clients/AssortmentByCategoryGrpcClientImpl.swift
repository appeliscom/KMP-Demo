//
//  AssortmentByCategoryGrpcClientImpl.swift
//
//
//  Created by Jan Maloušek on 28.04.2024.
//

import Foundation
import GRPC
import NIO
import Shared
import SwiftProtobuf

public class AssortmentByCategoryGrpcClientImpl: AssortmentByCategoryCallBackClient {
    let client: Metro_Assortment_V1_CatalogAsyncClientProtocol
    
    public init() {
        let processorCount = ProcessInfo.processInfo.processorCount
        let eventLoopGroup = PlatformSupport.makeEventLoopGroup(loopCount: processorCount)
        let channel = ClientConnection
            .usingTLS(with: .makeClientDefault(for: .best), on: eventLoopGroup)
            .connect(host: "dev.massortment.appelis.app", port: 443)
        let callOptions = CallOptions(
            timeLimit: .timeout(.seconds(15))
        )

        self.client = Metro_Assortment_V1_CatalogAsyncClient(
            channel: channel,
            defaultCallOptions: callOptions
        )
    }
    
    public func getArticles(request: GetAssortmentRequest, responseCallback: @escaping (GetAssortmentResponse?, KotlinException?) -> Void) {
        Task {
            let response = try await client.getAssortment(
                .with {
                    $0.token = .with { $0.data = request.token?.data_ ?? "" }
                    $0.filtering = .with {
                        $0.categoryID = request.filtering?.categoryId ?? ""
                        $0.flags = .with{
                            $0.businessID = request.filtering?.flags?.businessId ?? ""
                            $0.status = .available
                        }
                    }
                    $0.sorting = .with {
                        $0.field = .priceMunit
                        $0.type = .asc
                    }
                    $0.paging = .with {
                        $0.first = UInt32(request.paging?.first ?? 1)
                        if let cursor = request.paging?.after {
                            $0.after = .with { $0.value = cursor }
                        }
                    }
                }
            )
            
            let (wireResponse, error) = response.toWireMessage(adapter: GetAssortmentResponse.companion.ADAPTER)
            responseCallback(wireResponse, error)
        }
    }
}
