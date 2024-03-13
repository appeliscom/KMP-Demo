import SwiftUI
import SolarisTemplate
import Shared
import GrpcIOS

@main
struct iOSApp: App {
	var body: some Scene {
		WindowGroup {
			ContentView()
                .task {
                    try? await LeafletGrpcClientImpl().getLeaflets()
                }
		}
	}
}
