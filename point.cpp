#include <iostream>
using namespace std;

int main () {
//	int var1;
//	char var2[10];
//	
//	cout << "var 1 变量的地址是： ";
//	cout << &var1 << endl;
//	
//	cout << "var 2 变量的地址是： ";
//	cout << &var2 << endl;

	int *p;
	int a = 12;
	p = &a;
	
	cout << *p << endl;
	
	return 0;
}
