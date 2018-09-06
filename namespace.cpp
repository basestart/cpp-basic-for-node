#include <iostream>
using namespace std;

namespace first {
	void func () {
		cout << "first namespace" << endl;
	}
}

namespace secon {
	void func () {
		cout << "second namespace" <<endl; 
	}
}

using namespace secon;
int main () {
//	first::func();
//	secon::func();
	func();
	return 0;
}
