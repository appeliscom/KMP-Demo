plugins {
    kotlin("multiplatform")
    alias(libs.plugins.wire)
    id(libs.plugins.androidLibrary.get().pluginId)
}

kotlin {
    androidTarget {
        compilations.all {
            kotlinOptions {
                jvmTarget = ProjectSettings.Android.KotlinJvmTarget
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
    compileSdk = ProjectSettings.Android.CompileSdkVersion
    defaultConfig {
        minSdk = ProjectSettings.Android.MinSdkVersion
    }
    compileOptions {
        sourceCompatibility = ProjectSettings.Android.JavaCompatibility
        targetCompatibility = ProjectSettings.Android.JavaCompatibility
    }
}
