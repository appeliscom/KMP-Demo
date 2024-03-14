package com.appelis.kmp_demo.di

import org.koin.core.KoinApplication.Companion.init
import org.koin.core.module.Module
import org.koin.core.scope.Scope
import org.koin.dsl.module

typealias NativeInjectionFactory<T> = Scope.() -> T
fun makeNativeModule(
   // todo add services using native libs
): Module {
    return module {
        // todo register them into native module
    }
}

// example
//    fun makeNativeModule(
//        analytic: NativeInjectionFactory<Analytic>
//    ): Module {
//        return module {
//            single { analytic() }
//        }
//    }

//usage android
//class MainActivity : ComponentActivity() {
//    override fun onCreate(savedInstanceState: Bundle?) {
//        val nativeModule = makeNativeModule(
//            analytic = { AnalyticImpl( get() ) }
//        )
//        startDI(nativeModule) { androidContext(this@MainActivity) }
//    }
//}

//usage ios
//struct iOSApp: App {
//    init() {
//        let nativeModule: Koin_coreModule = MakeNativeModuleKt.makeNativeModule(
//            analytic: { scope in
//                return AnalyticImpl(logger: scope.get())
//        }
//        )
//
//        StartDIKt.startDI(
//            nativeModule: nativeModule,
//            appDeclaration: { _ in }
//        )
//    }
//}