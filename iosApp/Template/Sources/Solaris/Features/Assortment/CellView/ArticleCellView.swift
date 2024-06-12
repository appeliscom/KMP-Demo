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
    @Environment(\.theme) private var theme: Theme
    
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
            
            Text(article.name)
                .multilineTextAlignment(.leading)
                .lineLimit(3)
                .fixedSize(horizontal: false, vertical: true)
                .font(theme.font(.titleSmall))
                .foregroundStyle(theme.color(.onSurfaceH))
                .frame(maxWidth: .infinity, minHeight: 60, alignment: .topLeading)
            
            Spacer()
        }
        .padding(Spacing.pt4)
        .background(
            RoundedRectangle(cornerRadius: CornerRadius.pt24)
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
                Image(resource: \.test_image)
                    .resizable()
                    .scaledToFit()
            }
        }
        .padding(Spacing.pt4)
        .frame(height: 158.0)
        .frame(maxWidth: .infinity, alignment: .center)
        
    }
}

public extension ArticleCellView {
    enum CellType {
        case articleHorizontal
        case articleVertical
    }
}
