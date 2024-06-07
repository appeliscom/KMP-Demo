//
//  MainFlowNavigationView.swift
//  iosApp
//
//  Created by Jan Maloušek on 22.03.2024.
//  Copyright © 2024 orgName. All rights reserved.
//

import Foundation
import Shared
import SwiftUI
import SwiftUICore

struct MainFlowNavigationView: View {
    private let component: MainNavigationComponent

    init(component: MainNavigationComponent) {
        self.component = component
    }

    var body: some View {
        SheetStackView(
            stack: component.stack,
            popStackToIndex: { index in component.pop(toIndex: Int32(index)) }
        ) { mainFlowNavigationChild in
            switch onEnum(of: mainFlowNavigationChild) {
            case let .homescreen(child):
                HomescreenView(component: child.component)
            case let .category(child):
                CategoryCollectionView(component: child.component)
//                CategoryArticleCollectionView(component: child.component)
            case let .leafletCollection(child):
                LeafletCollectionView(component: child.component)
            case let .articleDetail(child):
                ArticleDetailView(component: child.component)
            }
        }
    }
}
