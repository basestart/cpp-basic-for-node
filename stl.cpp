#include <iostream>
#include <vector>
using namespace std;

/*
c++��׼ģ�������������
������ containers ����ĳһ�����ļ��� deque�� list�� vector�� map 
�㷨 algorithms  �ṩִ�и��ֲ����ķ�ʽ�� ����������ִ�г����ң� ���� ������ ת���Ȳ��� 
������ iterators ���ڱ������󼯺ϵ�Ԫ��

vector ���������ƣ� ��ͬ������������Ҫ��չ��С��ʱ�� ���Զ������Լ��Ĵ洢����
 
 
push_back( ) ��Ա������������ĩβ����ֵ������б�Ҫ����չ�����Ĵ�С��
size( ) ������ʾ�����Ĵ�С��
begin( ) ��������һ��ָ��������ͷ�ĵ�������
end( ) ��������һ��ָ������ĩβ�ĵ�������
*/

int main () {
	
	vector<int> vec;
	int i;
	cout << "sizeof vector" << vec.size() << endl;
	
	for(i = 0; i < 5; i++) {
		vec.push_back(i);
	}
	
	cout << "extended vector size:" << vec.size() << endl;
	
	for(i = 0; i < 6; i++) {
		cout << "value of vex [" << i << "] = " << vec[i] << endl;
	}
	
	vector<int>::iterator v = vec.begin();
	while(v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}
	
	return 0; 
}
/*

C++ STL ֮ vector �� capacity �� size ��������

size �ǵ�ǰ vector ������ʵռ�õĴ�С��Ҳ����������ǰӵ�ж��ٸ�������

capacity ��ָ�ڷ��� realloc ǰ����������Ԫ��������Ԥ������ڴ�ռ䡣

��Ȼ�����������Էֱ��Ӧ����������resize() �� reserve()��

ʹ�� resize() �����ڵĶ����ڴ�ռ����������ڵġ�

ʹ�� reserve() ����ֻ���޸��� capacity ��ֵ�������ڵĶ���û����ʵ���ڴ�ռ�(�ռ���"Ұ"��)��

��ʱ�м�ʹ�� [] ���������������ڵĶ��󣬺ܿ��ܳ�������Խ������⡣
*/

