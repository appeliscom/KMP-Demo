//
//  ArticleCellView.swift
//
//
//  Created by Jan Maloušek on 04.06.2024.
//

import Foundation
import SwiftUI
import Shared
import SwiftUICore
import NukeUI

@MainActor
public struct ArticleCellView: View {
    public let article: ArticlePreviewModel
    private let type: CellType
    var cellWidth: CGFloat {
        switch type {
        case .articleVertical:
            return (UIScreen.main.bounds.width - 40) / 2
        default:
            return UIScreen.main.bounds.size.width <= 375.0 ? 158.0 : 168.0
        }
    }

    var cellHeight: CGFloat {
        360.0
    }

    
    public init(
        article: ArticlePreviewModel,
        type: CellType = .articleVertical
    ) {
        self.article = article
        self.type = type
    }
    
    
    public var body: some View {
        VStack{
            imageSection
            
            Spacer()
            
            Text(article.name)
                .font(.title3)
            
            Spacer()
        }
        .padding(4.0)
        .background(
            RoundedRectangle(cornerRadius: 16.0)
                .fill(Color(\.surface))
        )
        .frame(width: cellWidth, height: cellHeight)
    }
    
    private var imageSection: some View {
        LazyImage(
            url: article.imageUrl?.url,
            transaction: .init(animation: .easeIn)
        ) { state in
            if let image = state.image {
                image
                    .resizable()
                    .scaledToFit()
            } else {
                Image(resource: \.img_article_placeholder)
                    .resizable()
                    .scaledToFit()
            }
        }
        .frame(maxWidth: .infinity, maxHeight: .infinity, alignment: .center)
        .frame(maxHeight: 164.0)
    }
}

public extension ArticleCellView {
    enum CellType {
        case articleHorizontal
        case articleVertical
    }
}
