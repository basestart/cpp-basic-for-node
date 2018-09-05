#include <iostream>
using namespace std;

class printData {
	public:
		void print(int i) {
			cout << "整数为：" << i << endl; 
		}
		
		void print(double f) {
			cout << "浮点数：" << f << endl; 
		}
		
		void print(char c[]) {
			cout << "字符串为：" << c << endl;
		}
};

int main () {
	
	printData pd;
	pd.print(5);
	pd.print(100.2);
	pd.print("hello world");
	
	return 0;
}
