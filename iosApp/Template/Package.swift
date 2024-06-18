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
}

// MARK: - Products - external -

private extension Target.Dependency {
    static let nukeUI = product(name: "NukeUI", package: "Nuke")
}

// MARK: - Package -

let package = Package(
    name: "Template",
    platforms: [.iOS(.v16)],
    products: [
        .library(name: .solaris, targets: [.solaris])
    ],
    dependencies: [
        .package(path: "../Shared"),
        .package(url: "https://github.com/kean/Nuke.git", .upToNextMajor(from: Version(12, 0, 0)))
    ],
    targets: [
        .target(
            name: .solaris,
            dependencies: [
                .nukeUI,
                .shared
            ],
            path: "Sources/Solaris"
        )
    ]
)
