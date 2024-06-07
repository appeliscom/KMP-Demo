//
//  CategoryGrpcDSImpl.swift
//
//
//  Created by Jan Maloušek on 05.06.2024.
//

import Foundation
import GRPC
import NIO
import Shared
import SwiftProtobuf

public class CategoryGrpcDSImpl: BaseGrpcDS, CategoryCallbackDS {
    let client: Appelis_Category_V1_CategoryCatalogAsyncClientProtocol
    
    public init(client: Appelis_Category_V1_CategoryCatalogAsyncClientProtocol) {
        self.client = client
    }
    
    public func getChildCategories(request: ChildCategoriesRequest, responseCallback: @escaping (ChildCategoriesResponse?, KotlinException?) -> Void) {
        fetch(
            responseCallback: responseCallback,
            wireAdapter: ChildCategoriesResponse.companion.ADAPTER
        ) { [client] in
            try await client.childCategories(
                .with{
                    $0.token = .with { $0.data = request.token?.data_ ?? "" }
                    $0.parentID = request.parentId
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
