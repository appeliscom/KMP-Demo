//
//  ArticleCellView.swift
//
//
//  Created by Jan Maloušek on 04.06.2024.
//

import Foundation
import NukeUI
import Shared
import SwiftUI
import SwiftUICore

@MainActor
public struct ArticleCellView: View {
    @Environment(\.theme) private var theme: Theme
    @Binding private var isWatchdog: Bool
    @Binding private var isFavorite: Bool

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
        type: CellType = .articleVertical,
        isFavorite: Binding<Bool>,
        isWatchdog: Binding<Bool>
    ) {
        self.article = article
        self.type = type
        self._isFavorite = isFavorite
        self._isWatchdog = isWatchdog
    }

    public var body: some View {
        VStack {
            imageSection
                .overlay(imageOverlay)

            Text(article.name)
                .multilineTextAlignment(.leading)
                .lineLimit(3)
                .fixedSize(horizontal: false, vertical: true)
                .font(theme.font(.titleSmall))
                .foregroundStyle(theme.color(.onSurfaceH))
                .frame(maxWidth: .infinity, minHeight: 60, alignment: .topLeading)

            Spacer()

            Text(
                String.localizedStringWithFormat("%.2f %@", article.prices.first(where: { $0.type == PriceType.unit })?.unit ?? 0, "Kč")
            )
            .font(theme.font(.labelLarge))
            .foregroundStyle(theme.color(.special1))
            .frame(maxWidth: .infinity, alignment: .leading)
            .padding(.bottom, Spacing.pt16)
        }
        .padding(Spacing.pt8)
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
                Image(resource: \.img_article_placeholder)
                    .resizable()
                    .scaledToFit()
            }
        }
        .padding(Spacing.pt4)
        .frame(height: 158.0)
        .frame(maxWidth: .infinity, alignment: .center)
    }

    private var imageOverlay: some View {
        HStack {
            Button(
                action: {
                    isFavorite.toggle()
                },
                label: {
                    Image(resource: isFavorite ? \.ic_favorite_active : \.ic_favorite_inactive)
                        .resizable()
                        .scaledToFit()
                        .frame(size: IconSize.pt24)
                }
            )

            Spacer()

            Button(
                action: {
                    isWatchdog.toggle()
                },
                label: {
                    Image(resource: isWatchdog ? \.ic_watchdog_active : \.ic_watchdog_inactive)
                        .resizable()
                        .scaledToFit()
                        .frame(size: IconSize.pt24)
                }
            )
        }
        .frame(maxHeight: .infinity, alignment: .top)
        .padding(Spacing.pt8)
    }
}

public extension ArticleCellView {
    enum CellType {
        case articleHorizontal
        case articleVertical
    }
}
