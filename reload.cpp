#include <iostream>
using namespace std;

class printData {
	public:
		void print(int i) {
			cout << "����Ϊ��" << i << endl; 
		}
		
		void print(double f) {
			cout << "��������" << f << endl; 
		}
		
		void print(char c[]) {
			cout << "�ַ���Ϊ��" << c << endl;
		}
};

int main () {
	
	printData pd;
	pd.print(5);
	pd.print(100.2);
	pd.print("hello world");
	
	return 0;
}
