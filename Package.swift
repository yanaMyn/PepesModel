// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "PepesModel",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "PepesModel",
            targets: ["PepesModel"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "PepesModel",
            path: "./PepesModel.xcframework"
        ),
    ]
)
