// swift-tools-version: 5.10
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

private extension String {
    static let shared = "Shared"
    static let grpcIOS = "GrpcIOS"
}

private extension Target.Dependency {
    static let grpc = product(name: "GRPC", package: "grpc-swift")
}


let package = Package(
    name: "Shared",
    platforms: [.iOS(.v16)],
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "Shared",
            targets: [.shared, .grpcIOS]),
    ],
    dependencies: [
        .package(url: "https://github.com/grpc/grpc-swift.git", exact: Version(1, 21, 0)),
    ],
    targets: [
        .binaryTarget(
            name: .shared,
            path: "Shared.xcframework"),
        .target(
            name: .grpcIOS,
            dependencies: [.grpc],
            path: "Sources/GrpcIOS"
        ),
    ])
