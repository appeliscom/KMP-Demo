plugins {
    kotlin("multiplatform")
}

kotlin {
    // Targets configuration
    jvm()
    // Add more targets (iOS, Android, etc.) as needed

    sourceSets {
        val commonMain by getting {
            dependencies {
                // Add common dependencies here, e.g., Ktor, Serialization
            }
        }

        listOf(
            iosX64(),
            iosArm64(),
            iosSimulatorArm64()
        ).forEach {
            it.binaries.framework {
                baseName = "featureA"
                isStatic = true
            }
        }

        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val jvmMain by getting
        val jvmTest by getting {
            dependencies {
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13.2")
            }
        }
        // Add additional source sets for other targets
    }
}