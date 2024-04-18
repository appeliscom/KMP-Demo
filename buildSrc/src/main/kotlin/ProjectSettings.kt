import org.gradle.api.JavaVersion

object ProjectSettings {
    object Kotlin {
        const val JvmToolchainVersion = 17
    }

    object Android {
        const val MinSdkVersion = 29
        const val TargetSdkVersion = 34
        const val CompileSdkVersion = 34

        const val ApplicationId = "com.appelis.kmm_demo.android"

        val VersionCode = 1
        val VersionName = "1.0.0"

        val JavaCompatibility = JavaVersion.VERSION_17
        const val KotlinJvmTarget = "17"
    }

    object IOS {
        const val MokoBaseLocalizationRegion = "en"
    }
}