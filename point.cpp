#include <iostream>
using namespace std;

int main () {
//	int var1;
//	char var2[10];
//	
//	cout << "var 1 �����ĵ�ַ�ǣ� ";
//	cout << &var1 << endl;
//	
//	cout << "var 2 �����ĵ�ַ�ǣ� ";
//	cout << &var2 << endl;

	int *p;
	int a = 12;
	p = &a;
	
	cout << *p << endl;
	
	return 0;
}
