#include <iostream>
using namespace std;
/*
运算符重载
您可以重定义或重载大部分 C++ 内置的运算符。这样，您就能使用自定义类型的运算符。

重载的运算符是带有特殊名称的函数，函数名是由关键字 operator 和其后要重载的运算符符号构成的。
与其他函数一样，重载运算符有一个返回类型和一个参数列表。 

Box operator+(const Box&);

不可重载运算符
成员访问运算符  .
成员指针访问运算符 .*, ->*
域运算符 ::
长度运算符 sizeof
条件运算符 ? : 
预处理运算符 #
 
*/

class Box {
	
	public:
		double getVolume (void) {
			return length * breadth * height;
		}
		
		void setLength (double len) {
			length = len;
		}
		
		void setBreadth (double bre) {
			breadth = bre;
		}
		
		void setHeight (double hei) {
			height = hei;
		}
		
		Box operator+(const Box& b) {
			Box box;
			box.length = this->length + b.length;
			box.breadth = this->breadth + b.breadth;
			box.height = this->height;
			return box;
		}
	private:
		double length;
		double breadth;
		double height;
}; 

int main () {
	Box box1;
	Box box2;
	Box box3;
	
	double volume = 0.0;
	
	// Box1 详述
   box1.setLength(6.0); 
   box1.setBreadth(7.0); 
   box1.setHeight(5.0);
 
   // Box2 详述
   box2.setLength(12.0); 
   box2.setBreadth(13.0); 
   box2.setHeight(10.0);
   
    // Box1 的体积
   volume = box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // Box2 的体积
   volume = box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
 
   // 把两个对象相加，得到 Box3
   box3 = box1 + box2;
 
   // Box3 的体积
   volume = box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;
 
   return 0;
	
	return 0;
}
