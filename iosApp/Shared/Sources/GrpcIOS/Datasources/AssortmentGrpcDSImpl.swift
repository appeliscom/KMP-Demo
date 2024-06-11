//
//  AssortmentGrpcDSImpl.swift
//
//
//  Created by Jan Maloušek on 28.04.2024.
//

import Foundation
import GRPC
import NIO
import Shared
import SwiftProtobuf

public class AssortmentGrpcDSImpl: BaseGrpcDS, AssortmentCallbackDS {
    let client: Metro_Assortment_V1_CatalogAsyncClientProtocol

    public init(client: Metro_Assortment_V1_CatalogAsyncClientProtocol) {
        self.client = client
        super.init()
    }
    
    public func getArticles(request: GetArticlesRequest, responseCallback: @escaping (GetArticleResponse?, KotlinException?) -> Void) {
        fetch(responseCallback: responseCallback, wireAdapter: GetArticleResponse.companion.ADAPTER) { [client] in
            try await client.getArticles(
                .with {
                    $0.token = .with { $0.data = request.token?.data_ ?? "" }
                    $0.articleIds = request.articleIds
                }
            )
        }
    }

    public func getArticlesPaged(request: GetAssortmentRequest, responseCallback: @escaping (GetAssortmentResponse?, KotlinException?) -> Void) {
        fetch(
            responseCallback: responseCallback,
            wireAdapter: GetAssortmentResponse.companion.ADAPTER
        ) { [client] in
            try await client.getAssortment(
                .with {
                    $0.token = .with { $0.data = request.token?.data_ ?? "" }
                    $0.filtering = .with {
                        $0.categoryID = request.filtering?.categoryId ?? ""
                        $0.flags = .with {
                            $0.businessID = request.filtering?.flags?.businessId ?? ""
                            $0.status = .available
                        }
                    }
                    $0.sorting = .with {
                        $0.field = .priceMunit
                        $0.type = .asc
                    }
                    $0.paging = .with {
                        $0.first = UInt32(request.paging?.first ?? 40)
                        if let cursor = request.paging?.after {
                            $0.after = .with { $0.value = cursor }
                        }
                    }
                }
            )
        }
    }
}
