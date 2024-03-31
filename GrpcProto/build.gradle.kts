plugins {
    kotlin("multiplatform")
    alias(libs.plugins.wire)
    alias(libs.plugins.androidLibrary)
}

kotlin {
    androidTarget {
        compilations.all {
            kotlinOptions {
                jvmTarget = "11"
            }
        }
    }

    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName = "grpcProto"
            isStatic = true
        }
    }

    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation(libs.wire.runtime)
                implementation(libs.wire.grpc.client)
            }
        }
    }
}

wire {
    protoLibrary = true
    sourcePath {
        srcDir("src/proto")
    }

    kotlin {
        rpcCallStyle = "suspending"
        rpcRole = "client"
        singleMethodServices = false
        android = false
        javaInterop = false
    }
}

android {
    namespace = "com.appelis.kmm_demo.grpcTest"
    compileSdk = 34
    defaultConfig {
        minSdk = 26
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_11
        targetCompatibility = JavaVersion.VERSION_11
    }
}
