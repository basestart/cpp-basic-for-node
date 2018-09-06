#include <iostream>
using namespace std;

/*
�ӿ������������Ϊ�͹��ܣ� ������Ҫ�������ض�ʵ��
c++�ӿ������ó�������ʵ�ֵģ� ����������ݳ��󻥲������� ���ݳ����ǰ�һ��ʵ��ϸ����ص����ݷ��뿪�ĸ���
�������������һ������������Ϊ���麯���� �������ǳ����࣬ ���麯����ͨ�����������á�=0����ָ����ָ����
 
�����಻������ʵ������ ֻ����Ϊ�ӿ����� 
*/

class Box {
	public:
		virtual double getVolume() = 0;
	
	private:
		double length;
		double breadth;
		double height;
};

// ����
class Shape 
{
public:
   // �ṩ�ӿڿ�ܵĴ��麯��
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
// ������
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
   // �����������
   cout << "Total Rectangle area: " << Rect.getArea() << endl;
 
   Tri.setWidth(5);
   Tri.setHeight(7);
   // �����������
   cout << "Total Triangle area: " << Tri.getArea() << endl; 
 	
	return 0;	
}
