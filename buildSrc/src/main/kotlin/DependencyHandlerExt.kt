import org.gradle.api.artifacts.Dependency
import org.gradle.api.artifacts.dsl.DependencyHandler

fun DependencyHandler.implementation(dependency: String) {
    add("implementation", dependency)
}

fun DependencyHandler.implementation(dependency: Dependency) {
    add("implementation", dependency)
}

fun DependencyHandler.api(dependency: String) {
    add("implementation", dependency)
}

fun DependencyHandler.api(dependency: Dependency) {
    add("api", dependency)
}

fun DependencyHandler.ksp(dependency: String) {
    add("implementation", dependency)
}
