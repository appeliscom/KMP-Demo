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
                    let leafletClient = LeafletGrpcClientImpl()
                    let leafletSuspendClient = LeafletSuspendClientImpl(callBackClient: leafletClient)
                    let repository = LeafletRepository(leafletClient: leafletSuspendClient)
                    let response = try? await repository.getLeafletsWithToken(token: "eyJhbGciOiJIUzUxMiIsInR5cCI6IkpXVCJ9.eyJleHAiOjE3MTAzNDU1OTYsImlhdCI6MTcxMDM0NTI5NiwiaXNzIjoiQXBwZWxpc0lkZW50aXR5UHJvdmlkZXIiLCJjbGFpbXMiOnsiYXBwZWxpcy5kZXZpY2VJZCI6IjE2NzYwIiwiYXBwZWxpcy5tb2JpbGVVc2VySWQiOiIxODU5MTcxOSIsImFwcGVsaXMucHJvamVjdElkIjoiMSJ9fQ.XqNiIkKUVXIfvBwD-fuHvU9XseF0MYbUjAGPlKDELIwMuonwV45RocZWskfI8kVu5fIKtQADxtHDeZqEJm6-5w")
                    print("Response from iOS \(response)")
                }
		}
	}
}

