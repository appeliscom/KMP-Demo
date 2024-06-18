//
//  CategoryArticleCollectionView+CollectionOptions.swift
//
//
//  Created by Jan Maloušek on 13.06.2024.
//

import NukeUI
import Shared
import SwiftUI
import SwiftUICore

extension CategoryArticleCollectionView {
    var searchFilterWidget: some View {
        HStack{
            RoundedRectangle(cornerRadius: CornerRadius.pt28)
                .fill(theme.color(.surface), strokeBorder: theme.color(.dividerColor))
                .frame(maxWidth: .infinity)
                .frame(height: 56)
                .overlay(
                    Text("Search not implemented")
                        .font(theme.font(.bodyMedium))
                        .foregroundStyle(theme.color(.hintColor))
                )
            
            Circle()
                .fill(theme.color(.surface))
                .frame(size: 56.cgSize)
                .overlay(
                    Image(resource: \.ic_filter)
                        .resizable()
                        .scaledToFit()
                        .frame(size: IconSize.pt32)
                )
                .onTapGesture {
                    router.navigateTo(route: .Filter(filterSessionId: viewModel.assortmentFilterSessionId))
                }
        }
        .padding(Spacing.pt16)
    }
    
    var sortingWidget: some View {
        VStack {
//            HStack(alignment: .center, spacing: Spacing.pt16) {
//                if let itemCount = articlesPagingAdapter.itemCount {
//                    Text("\(itemCount) \(getItemsText(count: itemCount))")
//                        .font(theme.font(.bodyMedium))
//                        .foregroundColor(theme.color(.onSurfaceP))
//                }
//
//                Spacer()
//
//                Text(translations.available_at_all_stores.value)
//                    .font(theme.font(.bodyMedium))
//                    .foregroundColor(theme.color(.onSurfaceP))
//
//                Image(
//                    resource: viewState.searchedAvailability == nil
//                        ? \.ic_check_box_unchecked
//                        : \.ic_checkbox_checked
//                )
//                .resizable()
//                .scaledToFit()
//                .frame(size: IconSize.pt20)
//                .animation(.default, value: viewState.searchedAvailability)
//                .onTapGesture {
//                    viewModel.setSearchedAvailability(
//                        stockStatus: viewState.searchedAvailability == nil
//                            ? .available
//                            : nil
//                    )
//                }
//            }
//            .frame(height: 40, alignment: .center)

            sortingSegmentPicker
        }
        .padding(Spacing.pt16)
        .background(
            RoundedRectangle(cornerRadius: CornerRadius.pt16)
                .fill(theme.color(.surface))
        )
    }

    private var sortingSegmentPicker: some View {
        HStack(spacing: 0) {
            layoutSegmentedItem(text: translations.sorted_by_relevance.value, isSelected: viewState.sortedBy == .relevance)
                .onTapGesture { viewModel.setSortedBy(sortBy: .relevance) }

            Rectangle()
                .fill(theme.color(.secondary))
                .frame(width: 1)
                .frame(maxHeight: .infinity)

            layoutSegmentedItem(text: translations.sorted_by_price_desc.value, isSelected: viewState.sortedBy == .priceDesc)
                .onTapGesture { viewModel.setSortedBy(sortBy: .priceDesc) }

            Rectangle()
                .fill(theme.color(.secondary))
                .frame(width: 1)
                .frame(maxHeight: .infinity)

            layoutSegmentedItem(text: translations.sorted_by_price_asc.value, isSelected: viewState.sortedBy == .priceAsc)
                .onTapGesture { viewModel.setSortedBy(sortBy: .priceAsc) }
        }
        .animation(.default, value: viewState.sortedBy)
        .cornerRadius(CornerRadius.pt8)
        .clipped()
        .background(
            RoundedRectangle(cornerRadius: CornerRadius.pt8)
                .stroke(theme.color(.secondary))
        )
        .frame(height: 40, alignment: .center)
    }

    private func layoutSegmentedItem(text: String, isSelected: Bool) -> some View {
        HStack {
            Text(text)
                .font(theme.font(.labelLarge))
                .foregroundColor(
                    isSelected
                        ? theme.color(.onSecondary)
                        : theme.color(.onBackgroundH)
                )
        }
        .frame(maxWidth: .infinity)
        .frame(height: 40, alignment: .center)
        .background(isSelected ? theme.color(.secondary) : .clear)
    }
}
