#include <iostream>
using namespace std;

class Box {
	public:
		Box() {
			cout << "���ù��캯��" <<endl; 
		}
		
		~Box () {
			cout << "������������" <<endl;
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

	/*���ҪΪһ�������ĸ� Box �������������ڴ棬���캯���������� 4 �Σ�ͬ���أ���ɾ����Щ����ʱ����������Ҳ����������ͬ�Ĵ�����4�Σ���*/
	Box* myBoxArr = new Box[4];
	
	delete [] myBoxArr; 

	
	return 0;
}
