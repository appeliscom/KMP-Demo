plugins {
    alias(libs.plugins.jetbrainsKotlinJvm)
    alias(libs.plugins.wire)
}

kotlin {
    dependencies {
        implementation(libs.wire.runtime)
        implementation(libs.wire.grpc.client)
    }
}

wire {
    protoLibrary = true
    sourcePath {
        srcDir("src/main/proto")
    }

    kotlin {
        rpcCallStyle = "suspending"
        rpcRole = "client"
        singleMethodServices = false
        android = false
        javaInterop = false
    }
}
