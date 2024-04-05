import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    id(libs.plugins.kotlinMultiplatform.get().pluginId)
    id(libs.plugins.androidLibrary.get().pluginId)
    alias(libs.plugins.skie)
    alias(libs.plugins.jetbrainsKotlinSerialization)
}

kotlin {
    androidTarget {
        compilations.all {
            kotlinOptions {
                jvmTarget = ProjectSettings.Android.KotlinJvmTarget
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

            export(projects.grpcProto)

            export(projects.core)
            export(projects.features.homescreen)
            export(projects.features.startup)
            export(projects.features.assortment)
            export(projects.features.leaflet)

            export(libs.essenty)
            export(libs.decompose)
            xc.add(this)
        }
    }

    sourceSets {
        commonMain.dependencies {
            api(projects.grpcProto)
            api(projects.core)

            api(projects.features.homescreen)
            api(projects.features.startup)
            api(projects.features.assortment)

            api(projects.features.leaflet)

            api(libs.essenty)
            api(libs.decompose)

            implementation(project.dependencies.platform(libs.koin.bom))
            implementation(libs.koin.core)
            implementation(libs.kotlinx.coroutines.core)
        }
    }
}

android {
    namespace = "com.appelis.kmp_demo"
    compileSdk = ProjectSettings.Android.CompileSdkVersion
    defaultConfig {
        minSdk = ProjectSettings.Android.MinSdkVersion
    }
    compileOptions {
        sourceCompatibility = ProjectSettings.Android.JavaCompatibility
        targetCompatibility = ProjectSettings.Android.JavaCompatibility
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