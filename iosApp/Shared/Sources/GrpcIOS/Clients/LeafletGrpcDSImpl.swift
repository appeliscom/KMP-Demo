//
//  LeafletGrpcDSImpl.swift
//
//
//  Created by Jan Maloušek on 28.04.2024.
//

import Foundation
import GRPC
import NIO
import Shared
import SwiftProtobuf

public class LeafletGrpcDSImpl: BaseGrpcDS, LeafletCallBackDS {
    let client: Metro_Leaflet_V1_PublicAsyncClientProtocol

    public init(client: Metro_Leaflet_V1_PublicAsyncClientProtocol) {
        self.client = client
    }
    
    public func getLeaflets(request: GetLeafletsRequest, responseCallback: @escaping (GetLeafletsResponse?, KotlinException?) -> Void) {
        fetch(
            responseCallback: responseCallback,
            wireAdapter: GetLeafletsResponse.companion.ADAPTER
        ) { [client] in
            try await client.getLeaflets(
                .with {
                    $0.token = .with { $0.data = request.token?.data_ ?? "" }
                    $0.business = request.business
                }
            )
        }
    }
}
