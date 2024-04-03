import SwiftUI
import SolarisTemplate
import Shared
import GrpcIOS

@main
struct iOSApp: App {
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate
    
	var body: some Scene {
		WindowGroup {
            RootNavigationView(appDelegate.rootComponent)
		}
	}
}

