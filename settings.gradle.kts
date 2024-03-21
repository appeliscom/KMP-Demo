enableFeaturePreview("TYPESAFE_PROJECT_ACCESSORS")
pluginManagement {
    repositories {
        google()
        gradlePluginPortal()
        mavenCentral()
    }
}

dependencyResolutionManagement {
    repositories {
        google()
        mavenCentral()
    }
}

rootProject.name = "KMP-Demo"
include(":androidApp")
include(":shared")
//include(":featureA")
include(":GrpcTest")
include(":commonMain")
include(":homescreen:homescreen-ui-logic")
