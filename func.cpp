#include <iostream>
using namespace std;

/*
函数参数：
两种传递参数的方式：
传值调用
	把参数的实际值赋值给函数的形式参数， 修改函数内的形式参数， 对实际参数没有影响 
指针调用
	把参数的地址复制给参数， 函数内， 该地址用于访问调用函数中要用到的实际参数， 修改形式参数会影响到实际参数 
引用调用 
	把参数的引用复制给形式参数， 在函数内， 该引用用于访问调用中要用到的实际参数， 意味着， 修改形式参数会影响到实际参数
	
lambda 函数与表达式
	lambda表达式可以像对象一样使用， 比如可以将其赋给变量或作为参数传递， 还可以像函数一样对其进行求值
	
[capture](parameters) -> return-type{body}
[](int x, int y) {return x < y}
[capture](parameters){body}
[]{++global_x}
[](int x, int y) -< int {int z = x + y; return z + x;}

[] 没有定义任何变量
[x, &y] x以传值方式传入， y以引用方式传入
[&] 任何被使用到的外部变量都隐式以引用方式加以引用
[=] 任何别使用到的外部变量都隐式以传值方式加以引用
[&， x] x显式以传值方式加以引用， 其余变量以引用方式加以引用
[=, &z] z显式以引用方式加以引用， 其余变量以传值方式加以引用  

需要注意： 对于[=] 或者[&] 的形式， lambda表达式可以直接使用this指针， 但是对于[]的形式， 如果要使用this指针， 必须显式引入
[this]() {this -> someFunc();}(); 
*/

int max (int, int);

int main () {
	int a = 100;
	int b = 200;
	int ret;
	
	ret = max(a, b);
	cout << "max value is: " << ret << endl;
	return 0;
}

int max (int a, int b) {
	if(a > b)
		return a;
	else
		return b;
}
