import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    alias(libs.plugins.skie)
    alias(libs.plugins.jetbrainsKotlinSerialization)
}

kotlin {
    androidTarget {
        compilations.all {
            kotlinOptions {
                jvmTarget = "11"
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

            export(projects.core)
            export(projects.features.homescreen.homescreenUiLogic)
            export(projects.features.startup.startupUiLogic)
            export(projects.features.category.categoryUiLogic)


            export(libs.essenty)
            export(libs.decompose)
            xc.add(this)
        }
    }

    sourceSets {
        commonMain.dependencies {
            api(projects.grpcTest)
            api(projects.core)

            api(projects.features.homescreen.homescreenUiLogic)
            api(projects.features.startup.startupUiLogic)
            api(projects.features.category.categoryUiLogic)

            api(libs.essenty)
            api(libs.decompose)
            implementation(libs.koin.core)
            implementation(libs.kotlinx.coroutines.core)
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