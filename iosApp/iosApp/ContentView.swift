import SwiftUI
import shared
import TestPackage

struct ContentView: View {
	let greet = Greeting().greet()
    let hello = Test()
    let spmGreetings = Greeter().getGreetings()

	var body: some View {
        Text(spmGreetings)
	}
}

struct ContentView_Previews: PreviewProvider {
	static var previews: some View {
		ContentView()
	}
}
