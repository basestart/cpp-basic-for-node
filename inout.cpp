#include <iostream>
using namespace std;

/*
iostream ���ļ������� cin��cout��cerr �� clog ���󣬷ֱ��Ӧ�ڱ�׼����������׼��������ǻ����׼�������ͻ����׼������
iomanip ���ļ�ͨ����ν�Ĳ��������������������� setw �� setprecision������������ִ�б�׼�� I/O ���õķ���
fstream ���ļ�Ϊ�û����Ƶ��ļ�������������
*/

int main () {
//	char name[50];
//	
//	cout << "�������������ƣ�";
//	cin >> name;
//	cout << "���������ǣ� " << name << endl; 

	char str[] = "unable to read ...";
	cerr << "error message: " << str << endl; 
	return 0;
}
