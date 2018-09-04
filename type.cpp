#include <iostream>
using namespace std;

// 基本数据类型 bool, char, int, float, double, void, wchar_t
// 也可以定期其他数据类型 美剧， 指针， 数组， 引用， 数据结构， 类等
// 不带初始化的定义： 带有静态存储持续时间的变量会被隐式初始化为NULL（所有自己的值都是0）， 其他所有变量的初始值是未定义的

// c++两种类型的表达式
// 左值 指向内训位置的表达式被称为左值（lvalue）表达式， 左值可以出现在赋值符号的左边和右边
// 右值 右值（rvalue）值得是存储在内存中某些地址的数值， 右值是不能对其进行赋值的表达式， 也就是说， 右值可以出现在赋值符号的右边， 但是不能出现在赋值符号的左边。
// 变量时左值， 因此可以出现在赋值符号的左边， 数值类型的字面值是右值， 因此不能被赋值， 不能出现在赋值符号的左边 

extern int a, b;
extern int c;
extern float f;

//函数声明 
int func ();

int main () {
	int a, b;
	int c;
	float f;
	a = 10;
	b = 20;
	c = a + b;
	
	cout << c << endl;
	f = 70.0 / 3.0;
	cout << f << endl;
	
	int i = func();
	cout << i << endl;
	
	return 0;
} 

// 函数定义 
int func () {
	return 0;
}
 
