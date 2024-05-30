import com.android.build.gradle.internal.ide.kmp.KotlinAndroidSourceSetMarker.Companion.android

plugins {
    id(libs.plugins.kotlinMultiplatform.get().pluginId)
    id(libs.plugins.androidLibrary.get().pluginId)
    alias(libs.plugins.jetbrainsKotlinSerialization)
    id(libs.plugins.koin.annotations.plugin.get().pluginId)
    alias(libs.plugins.room)
    alias(libs.plugins.ksp)
}

kotlin {
    // Targets configuration
    androidTarget {
        compilations.all {
            kotlinOptions {
                jvmTarget = ProjectSettings.Android.KotlinJvmTarget
            }
        }
    }

    iosTargets()

    sourceSets {
        val commonMain by getting {
            kotlin.srcDir("build/generated/ksp/metadata/commonMain/kotlin")
            dependencies {
                implementation(project.dependencies.platform(libs.koin.bom))
                implementation(libs.bundles.common)
                implementation(libs.paging)
                implementation(projects.grpcProto)
                api(libs.room.runtime)
                implementation(libs.sqlite.bundled)
            }
        }

        iosMain {
            dependencies {
                implementation(libs.paging.ios)
            }
        }
    }
}

android {
    namespace = "com.appelis.kmm_demo.core"
    compileSdk = ProjectSettings.Android.CompileSdkVersion
    defaultConfig {
        minSdk = ProjectSettings.Android.MinSdkVersion
    }
    compileOptions {
        sourceCompatibility = ProjectSettings.Android.JavaCompatibility
        targetCompatibility = ProjectSettings.Android.JavaCompatibility
    }
}

room {
    schemaDirectory("$projectDir/schemas")
}

dependencies {
    implementation(libs.androidx.recyclerview)
    ksp(libs.room.compiler)
    ksp(libs.koin.ksp.compiler)
}
