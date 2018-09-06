#include <iostream>
using namespace std;

/*
接口描述了类的行为和功能， 而不需要完成类的特定实现
c++接口是适用抽象类来实现的， 抽象类和数据抽象互补混淆， 数据抽象是把一个实现细节相关的数据分离开的概念
如果类中至少有一个函数被声明为纯虚函数， 这个类就是抽象类， 纯虚函数是通过生命中适用‘=0’的指令来指定的
 
抽象类不能用于实例化， 只能作为接口适用 
*/

class Box {
	public:
		virtual double getVolume() = 0;
	
	private:
		double length;
		double breadth;
		double height;
};

// 基类
class Shape 
{
public:
   // 提供接口框架的纯虚函数
   virtual int getArea() = 0;
   void setWidth(int w)
   {
      width = w;
   }
   void setHeight(int h)
   {
      height = h;
   }
protected:
   int width;
   int height;
};
// 派生类
class Rectangle: public Shape
{
public:
   int getArea()
   { 
      return (width * height); 
   }
};
class Triangle: public Shape
{
public:
   int getArea()
   { 
      return (width * height)/2; 
   }
};
int main () {
	  Rectangle Rect;
   Triangle  Tri;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
   // 输出对象的面积
   cout << "Total Rectangle area: " << Rect.getArea() << endl;
 
   Tri.setWidth(5);
   Tri.setHeight(7);
   // 输出对象的面积
   cout << "Total Triangle area: " << Tri.getArea() << endl; 
 	
	return 0;	
}
