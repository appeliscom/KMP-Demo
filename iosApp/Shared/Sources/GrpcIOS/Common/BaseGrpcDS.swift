//
//  BaseGrpcClient.swift
//
//
//  Created by Jan Maloušek on 16.05.2024.
//

import Foundation
import GRPC
import NIO
import Shared
import SwiftProtobuf

open class BaseGrpcDS {
    func fetch<SwiftResponse: SwiftProtobuf.Message, WireResponse>(
        responseCallback: @escaping (WireResponse?, KotlinException?) -> Void,
        wireAdapter: Wire_runtimeProtoAdapter<WireResponse>,
        requestBlock: @escaping () async throws -> SwiftResponse
    ) {
        Task {
            do {
                let response = try await requestBlock()
                let (wireResponse, error) = response.toWireMessage(adapter: wireAdapter)
                if let error {
                    responseCallback(nil, NetworkException(code: .unknown, msg: error.description()))
                } else {
                    responseCallback(wireResponse, nil)
                }
            } catch let error as GRPCStatusTransformable {
                switch error.makeGRPCStatus().code {
                case .deadlineExceeded:
                    responseCallback(nil, NetworkException(code: .connectionTimeout, msg: error.localizedDescription))
                case .unauthenticated:
                    responseCallback(nil, NetworkException(code: .unauthorized, msg: error.localizedDescription))
                case .unavailable:
                    responseCallback(nil, NetworkException(code: .serverDown, msg: error.localizedDescription))
                case .cancelled:
                    responseCallback(nil, NetworkException(code: .cancelledCall, msg: error.localizedDescription))
                default:
                    responseCallback(nil, NetworkException(code: .unknown, msg: error.localizedDescription))
                }
            } catch {
                responseCallback(nil, NetworkException(code: .unknown, msg: error.localizedDescription))
            }
        }
    }
}
