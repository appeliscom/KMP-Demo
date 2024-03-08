// swift-tools-version: 5.10
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

private extension String {
    static let solaris = "SolarisTemplate"
}

// MARK: - Targets -

private extension Target.Dependency {
    static let solaris = target(name: .solaris)
}

// MARK: - Products - internal -

private extension Target.Dependency {
    // MARK: - Core
    
    static let shared = product(name: "Shared", package: "Shared")
    
    // MARK: - Feature

    private static let packageFeature = "Features"
    static let article = product(name: "Article", package: packageFeature)
}

// MARK: - Products - external -

private extension Target.Dependency {
    static let kingfisher = product(name: "Kingfisher", package: "Kingfisher")
}

// MARK: - Package -

let package = Package(
    name: "Template",
    platforms: [.iOS(.v16)],
    products: [
        .library(name: .solaris, targets: [.solaris])
    ],
    dependencies: [
        .package(path: "../Features"),
        .package(path: "../Shared"),
        .package(
            url: "https://github.com/onevcat/Kingfisher.git",
            .upToNextMajor(from: Version(7, 0, 0))
        )
    ],
    targets: [
        .target(
            name: .solaris,
            dependencies: [
                .kingfisher,
                .shared,
                .article
            ],
            path: "Sources/Solaris"
        )
    ]
)
