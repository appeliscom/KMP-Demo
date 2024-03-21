import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    alias(libs.plugins.skie)
}

kotlin {
    androidTarget {
        compilations.all {
            kotlinOptions {
                jvmTarget = "1.8"
            }
        }
    }

    val xc = XCFramework(xcFrameworkName = "Shared")

    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName="Shared"
            isStatic = true
            export(projects.grpcTest)
            export(projects.homescreen.homescreenUiLogic)
            export(libs.essenty)
            export(libs.decompose)
            xc.add(this)
        }
    }

    sourceSets {
        commonMain.dependencies {
            api(projects.grpcTest)
            api(projects.homescreen.homescreenUiLogic)
            api(libs.essenty)
            implementation(libs.koin.core)
        }
        commonTest.dependencies {
            implementation(libs.kotlin.test)
        }

        commonTest.dependencies {
            
        }
    }
}

android {
    namespace = "com.appelis.kmp_demo"
    compileSdk = 34
    defaultConfig {
        minSdk = 26
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_11
        targetCompatibility = JavaVersion.VERSION_11
    }
}

val updateSharedFramework by tasks.registering(Copy::class) {
    dependsOn("assembleSharedDebugXCFramework")
    val sourceXCFrameworkDir = layout.buildDirectory.dir("XCFrameworks/debug")
    val targetDir = "$rootDir/iosApp/Shared"
    from(sourceXCFrameworkDir)
    into(targetDir)
}

val updateSharedFrameworkRelease by tasks.registering(Copy::class) {
    dependsOn("assembleSharedReleaseXCFramework")
    val sourceXCFrameworkDir = layout.buildDirectory.dir("XCFrameworks/release")
    val targetDir = "$rootDir/iosApp/Shared"
    from(sourceXCFrameworkDir)
    into(targetDir)
}