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
include(":GrpcTest")
include(":commonMain")
include(":features:homescreen:homescreen-ui-logic")
include(":features:startup:startup-ui-logic")
include(":features:category:category-ui-logic")
include(":core")
