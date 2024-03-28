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
include(":GrpcTest")
include(":commonMain")

include(":shared")
include(":features:homescreen:homescreen-ui-logic")

include(":features:startup:startup-ui-logic")

include(":features:assortment:assortment-ui-logic")

include(":features:leaflet:leaflet-ui-logic")
include(":features:leaflet:leaflet-domain")
include(":features:leaflet:leaflet-data")

include(":core")
