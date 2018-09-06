#include <iostream>
using namespace std;

/*
ģ���Ƿ��ͱ�̵Ļ����� ���ͱ�̼���һ�ֶ������κ��ض����͵ķ�����д����
ģ���Ǵ����������������ͼ���߹�ʽ�� �����⣬ ������������㷨�� ���Ƿ����ͱ�̵����ӣ� ���Ƕ�ʹ����ģ��ĸ���
ÿ����������һ����һ�Ķ��壬 ���������� ���Զ��岻ͬ���͵������� ���� vector<int> ����vector<string>
����ʹ��ģ�������庯������

����ģ��
template <class type> ret-type func-name(parameter list) {
	//�������� 
}
 
*/

template <typename T>
inline T const& Max (T const& a, T const& b) {
	return a < b ? b : a;
} 

int main () {
	int i = 39;
	int j = 20;
	cout << "Max(i, j):" << Max(i, j) <<endl;
	
	double f1 = 13.5;
	double f2 = 20.7;
	cout << "Max(f1, f2):" << Max(f1, f2) << endl;
	
	string s1 = "hello";
	string s2 = "world";
	
	cout << "Max(s1, s2):" << Max(s1, s2) << endl; 
	
	return 0;
}
