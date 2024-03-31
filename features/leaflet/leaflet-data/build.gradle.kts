plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    alias(libs.plugins.jetbrainsKotlinSerialization)
}

kotlin {
    // Targets configuration
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
            baseName = "LeafletData"
            isStatic = true
        }
    }

    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation(libs.decompose)
                implementation(libs.koin.core)
                implementation(libs.kotlinx.coroutines.core)
                api(projects.core)

                api(projects.features.leaflet.leafletDomain)
                implementation(projects.grpcProto)
                implementation(libs.wire.runtime)
                implementation(libs.wire.grpc.client)
            }
        }
    }
}

android {
    namespace = "com.appelis.kmm_demo.leaflet.leafletData"
    compileSdk = 34
    defaultConfig {
        minSdk = 26
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_11
        targetCompatibility = JavaVersion.VERSION_11
    }
}
dependencies {
    implementation(project(":GrpcProto"))
}
