import SwiftUI
import shared

struct ContentView: View {
	let greet = Greeting().greet()
    let hello = Test()

	var body: some View {
        Text(hello.sayHello())
	}
}

struct ContentView_Previews: PreviewProvider {
	static var previews: some View {
		ContentView()
	}
}
