#include <iostream>
using namespace std;

/*
模板是泛型编程的基础， 泛型编程即以一种独立于任何特定类型的方法编写代码
模板是创建泛型类或函数的蓝图或者公式， 容器库， 比如迭代器和算法， 都是反泛型编程的例子， 他们都使用了模板的概念
每个容器都有一个单一的定义， 比如向量， 可以定义不同类型的向量， 比如 vector<int> 或者vector<string>
可以使用模板来定义函数和类

函数模板
template <class type> ret-type func-name(parameter list) {
	//函数主体 
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
