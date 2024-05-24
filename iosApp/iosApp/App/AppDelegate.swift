//
//  AppDelegate.swift
//  iosApp
//
//  Created by Jan Maloušek on 15.03.2024.
//  Copyright © 2024 orgName. All rights reserved.
//

import Foundation
import SwiftUI
import Shared
import SwiftUICore
import GrpcIOS

class AppDelegate: NSObject, UIApplicationDelegate {
    let nativeModule: Koin_coreModule
    
    lazy var rootComponent: RootNavigationComponent = RootNavigationComponentImpl(
        componentContext: DefaultComponentContext(lifecycle: ApplicationLifecycle())
    )
    
    override init() {
        self.nativeModule = NativeModuleKt.makeNativeModule(
            nativeTestDependency: { resolver in TestSwiftDependency(greetings: resolver.get()) }
        )
    }
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
        KmpApplication().doInitSharedModule(
            nativeModule: nativeModule,
            platformModule: makePlatformModule(
                grpcDsFactory: GrpcDSFactoryImpl(),
                database: getDatabase()
            )
        )
        return true
    }
}
