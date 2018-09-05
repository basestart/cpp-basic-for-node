# include <iostream>
using namespace std;
/*
c++ 存储类
auto, register, static, extern, mutable, thread_local

auto 用于两种情况： 声明变量根据初始表达式自动推断该变量的类型， 声明函数时， 函数返回值的占位符

register存储类
用于定义存储在寄存器中， 而不是RAM中的局部变量， 这意味着变量的最大尺寸等于寄存器的大小（通常是一个词）， 且不能对它应用一元
的&运算符（因为没有内存位置） 
{
	register int miles 
} 
寄存器只用于需要快速访问的变量， 比如计数器， 
定义register并不意味着变量呗存储在寄存器中， 它意味着变量可能存储在寄存器中， 这取决于硬件和实现的限制

static 存储类
指示编译器在程序的生命周期内保持局部变量的存在， 而不需要每次它进入和离开作用域时仅从创建和销毁， 因此， 使用static修饰的局部变量
可以在函数调用之间保持局部变量的值
static修饰符也可以应用于全局变量， 当static修饰全局变量时， 它会使变量的作用域限制在声明它的文件内
在c++中， 当static用在类数据成员上时， 会导致仅有一个该成员的副本被类所有对象共享。 

extern 存储用于提供一个全局变量的引用

mutable 存储类 
mutable说明符， 适用于类的对象

thread_local 存储类
声明的变量仅可在它在其上创建的线程访问， 变量在创建线程时创建， 并在销毁线程时销毁， 每个线程都有其自己的变量副本
 
*/

void func (void);
static int count = 10;

int main () {
	while(count-- ) {
		func();
	}
	return 0;
}
void func (void) {
	static int i = 5;
	i ++;
	cout << "变量i为 " << i;
	cout << ", 变量count 为 " << count << endl;	
}



