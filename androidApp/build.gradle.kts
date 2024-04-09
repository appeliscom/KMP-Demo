plugins {
    id(libs.plugins.androidApplication.get().pluginId)
    id(libs.plugins.kotlinAndroid.get().pluginId)
}

android {
    namespace = "com.appelis.kmp_demo.android"
    compileSdk = ProjectSettings.Android.CompileSdkVersion

    defaultConfig {
        applicationId = ProjectSettings.Android.ApplicationId
        minSdk = ProjectSettings.Android.MinSdkVersion
        targetSdk = ProjectSettings.Android.TargetSdkVersion
        versionCode = ProjectSettings.Android.VersionCode
        versionName = ProjectSettings.Android.VersionName
    }

    buildFeatures {
        compose = true
    }
    composeOptions {
        kotlinCompilerExtensionVersion = libs.versions.compose.compiler.get()
    }
    packaging {
        resources {
            excludes += "/META-INF/{AL2.0,LGPL2.1}"
        }
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
    compileOptions {
        sourceCompatibility = ProjectSettings.Android.JavaCompatibility
        targetCompatibility = ProjectSettings.Android.JavaCompatibility
    }
    kotlinOptions {
        jvmTarget = ProjectSettings.Android.KotlinJvmTarget
    }
}

dependencies {
    implementation(project.dependencies.platform(libs.koin.bom))
    implementation(libs.koin.android)
    implementation(libs.koin.android.compose)

    implementation(projects.shared)
    implementation(libs.compose.ui)
    implementation(libs.compose.ui.tooling.preview)
    implementation(libs.compose.material3)
    implementation(libs.androidx.activity.compose)
    debugImplementation(libs.compose.ui.tooling)
    implementation(libs.decompose.compose.extensions)
}