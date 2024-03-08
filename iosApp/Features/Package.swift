// swift-tools-version: 5.10
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

private extension String {
    static let article = "Article"
}

// MARK: - Products - internal -

private extension Target.Dependency {
    // MARK: - Core
    static let shared = product(name: "Shared", package: "Shared")
    
    
}

// MARK: - Products - external -

private extension Target.Dependency {
    static let asyncAlgorithms = product(name: "AsyncAlgorithms", package: "swift-async-algorithms")
    static let kingfisher = product(name: "Kingfisher", package: "Kingfisher")
}

let commonDependencies: [Target.Dependency] = [
    .kingfisher,
    .shared
]

// MARK: - Package -

let package = Package(
    name: "Features",
    platforms: [.iOS(.v16)],
    products: [
        .library(name: .article, targets: [.article]),
    ],
    dependencies: [
        .package(path: "../Shared"),
        .package(
            url: "https://github.com/onevcat/Kingfisher.git",
            .upToNextMajor(from: Version(7, 0, 0))
        )
    ],
    targets: [
        .target(
            name: .article,
            dependencies: commonDependencies,
            path: "Sources/Article"
        ),
    ]
)
