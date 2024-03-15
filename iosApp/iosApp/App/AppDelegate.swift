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

class AppDelegate: NSObject, UIApplicationDelegate {
    var nativeModule: Koin_coreModule = NativeModuleKt.makeNativeModule()
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
        DI().doInitDI(nativeModule: nativeModule, appDeclaration: { _ in })
        return true
    }
}
