import org.jetbrains.kotlin.gradle.dsl.KotlinMultiplatformExtension
import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget

fun KotlinMultiplatformExtension.iosTargets(
    targets: List<KotlinNativeTarget> = listOf(
//        iosX64(),
        iosArm64(),
//        iosSimulatorArm64(),
    ),
    configure: (KotlinNativeTarget) -> Unit = {},
) {
    targets.forEach {
        configure(it)
    }
}