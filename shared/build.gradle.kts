import dev.icerock.gradle.MRVisibility
import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    id(libs.plugins.kotlinMultiplatform.get().pluginId)
    id(libs.plugins.androidLibrary.get().pluginId)
    alias(libs.plugins.skie)
    alias(libs.plugins.jetbrainsKotlinSerialization)
    alias(libs.plugins.ksp)
    alias(libs.plugins.moko.resources)
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

    iosTargets {
        it.binaries.framework {
            baseName = "Shared"
            isStatic = true

            export(projects.grpcProto)

            export(projects.core)
            export(projects.features.homescreen)
            export(projects.features.startup)
            export(projects.features.assortment)
            export(projects.features.leaflet)

            export(libs.essenty)
            export(libs.decompose)

            export(libs.moko.resources)
            export(libs.moko.graphics)

            xc.add(this)
        }
    }

    sourceSets {
        val commonMain by getting {
            kotlin.srcDir("build/generated/ksp/metadata/commonMain/kotlin")
            dependencies {
                api(projects.grpcProto)
                api(projects.core)

                api(projects.features.homescreen)
                api(projects.features.startup)
                api(projects.features.assortment)
                api(projects.features.leaflet)

                api(libs.essenty)
                api(libs.decompose)
                api(libs.moko.resources)

                implementation(project.dependencies.platform(libs.koin.bom))
                implementation(libs.bundles.common)
                implementation(libs.room.runtime)
                implementation(libs.sqlite.bundled)
            }
        }
    }
}

android {
    namespace = libs.versions.namespace.shared.get()
    compileSdk = ProjectSettings.Android.CompileSdkVersion
    defaultConfig {
        minSdk = ProjectSettings.Android.MinSdkVersion
    }
    compileOptions {
        sourceCompatibility = ProjectSettings.Android.JavaCompatibility
        targetCompatibility = ProjectSettings.Android.JavaCompatibility
    }
}

dependencies {
    ksp(libs.koin.ksp.compiler)
}

multiplatformResources {
    configureCopyXCFrameworkResources("Shared")
    resourcesClassName = "R"
    iosBaseLocalizationRegion = ProjectSettings.IOS.MokoBaseLocalizationRegion
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