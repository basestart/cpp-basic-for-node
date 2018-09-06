#include <iostream>
using namespace std;

class Box {
	public:
		Box() {
			cout << "调用构造函数" <<endl; 
		}
		
		~Box () {
			cout << "调用析构函数" <<endl;
		}
};

int main () {
//	double* pvalue = NULL;
//	pvalue = new double;
//	
//	*pvalue = 12123.12;
//	cout << "value of pvalue is:" << *pvalue << endl;
//	
//	delete pvalue;

	/*如果要为一个包含四个 Box 对象的数组分配内存，构造函数将被调用 4 次，同样地，当删除这些对象时，析构函数也将被调用相同的次数（4次）。*/
	Box* myBoxArr = new Box[4];
	
	delete [] myBoxArr; 

	
	return 0;
}
