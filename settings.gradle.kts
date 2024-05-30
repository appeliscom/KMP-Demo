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

include(":shared")

include(":features:homescreen")
include(":features:startup")
include(":features:assortment")
include(":features:leaflet")

include(":core")

//includeBuild("convention-plugins")

