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
include(":GrpcProto")
include(":commonMain")

include(":shared")
include(":features:homescreen:homescreen-ui-logic")

include(":features:startup:startup-ui-logic")

include(":features:assortment:assortment-ui-logic")
include(":features:leaflet")

include(":core")
