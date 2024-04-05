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

        val VersionCode = System.getenv("BUILD_NUMBER")?.toInt() ?: 1
        val VersionName = System.getenv("VERSION_NAME") ?: "1.0.0"

        val JavaCompatibility = JavaVersion.VERSION_17
        const val KotlinJvmTarget = "17"
    }
}