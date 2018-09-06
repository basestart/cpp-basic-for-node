#include <iostream>
using namespace std;

/*
多态按字面的意思就是多种形态。当类之间存在层次结构，并且类之间是通过继承关联时，就会用到多态。

C++ 多态意味着调用成员函数时，会根据调用函数的对象的类型来执行不同的函数。

调用函数 area() 被编译器设置为基类中的版本，这就是所谓的静态多态，
或静态链接 - 函数调用在程序执行前就准备好了。有时候这也被称为早绑定，因为 area() 函数在程序编译期间就已经设置好了。

编译器看的是指针的内容，而不是它的类型。因此，由于 tri 和 rec 类的对象的地址存储在 *shape 中，所以会调用各自的 area() 函数。

正如您所看到的，每个子类都有一个函数 area() 的独立实现。这就是多态的一般使用方式。有了多态，您可以有多个不同的类，
都带有同一个名称但具有不同实现的函数，函数的参数甚至可以是相同的。

虚函数

虚函数是在基类中使用关键字virtual声明的函数， 在派生类中重新定义基类中定义的虚函数， 告诉编译器不要静态链接到该函数
在程序中任一点可以根据所调用的对象雷丁来选择调用的函数， 这种操作被称为动态链接， 或者后期绑定

纯虚函数

可以在想要的基类中定义虚函数， 以便在派生类中重新定义该函数更好地适用于对象， 但是在基类中又不能对虚函数给出有意义的实现
这时候就会用到纯虚函数
 


*/ 

class Shape {
	protected:
		int width, height;
	
	public:
		Shape(int a = 0, int b = 0) {
			width = a;
			height = b;
		}
		
//		virtual int area () {
//			cout << "parent class area: " << endl;
//			return 0;
//		}
		virtual int area () = 0; // =0 告诉编译器， 函数没有主体， 上面的虚函数是纯虚函数 
};

class Rectangle : public Shape {
	public:
		Rectangle (int a = 0, int b = 0) : Shape(a, b) {}
		
		int area () {
			cout << "reactangle class area :" << endl;
			return (width * height);
		} 
};

class Triangle : public Shape {
	public:
		Triangle(int a = 0, int b = 0) : Shape (a, b) {}
		
		int area () {
			cout << "triangle class area :" << endl;
			return (height * width) / 2;
		}
};

int main () {
	Shape *shape;
	Rectangle rec(10, 7);
	Triangle tri(10, 5);
	shape = &rec;
	shape->area();
	
	shape = &tri;
	shape->area();
	
	return 0;
}
