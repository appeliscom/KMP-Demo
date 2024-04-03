//
//  GrpcClientFactory.swift
//
//
//  Created by Jan Maloušek on 31.03.2024.
//

import Foundation
import Shared

public enum GrpcClientFactory {
    public static func leafletClient() -> LeafletSuspendClient {
        let leafletClient = LeafletGrpcClientImpl()
        return LeafletSuspendClientImpl(callBackClient: leafletClient)
    }
}
