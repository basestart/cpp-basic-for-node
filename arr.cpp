#include <iostream>
using namespace std;

/*
type arrayname [arraysize]

*/

int main () {
	double balance[5] = {100.0, 2.0, 3.4, 7.0, 50.1};
	int i;
	int l = sizeof(balance) / sizeof(balance[0]);
//	cout << sizeof(balance) << endl;
//	cout << length(balance);
	for(i = 0; i < l; i++) {
		cout << balance[i] << endl;
	}
	return 0;
}
