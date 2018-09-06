#include <iostream>
using namespace std;

/*
��̬���������˼���Ƕ�����̬������֮����ڲ�νṹ��������֮����ͨ���̳й���ʱ���ͻ��õ���̬��

C++ ��̬��ζ�ŵ��ó�Ա����ʱ������ݵ��ú����Ķ����������ִ�в�ͬ�ĺ�����

���ú��� area() ������������Ϊ�����еİ汾���������ν�ľ�̬��̬��
��̬���� - ���������ڳ���ִ��ǰ��׼�����ˡ���ʱ����Ҳ����Ϊ��󶨣���Ϊ area() �����ڳ�������ڼ���Ѿ����ú��ˡ�

������������ָ������ݣ��������������͡���ˣ����� tri �� rec ��Ķ���ĵ�ַ�洢�� *shape �У����Ի���ø��Ե� area() ������

�������������ģ�ÿ�����඼��һ������ area() �Ķ���ʵ�֡�����Ƕ�̬��һ��ʹ�÷�ʽ�����˶�̬���������ж����ͬ���࣬
������ͬһ�����Ƶ����в�ͬʵ�ֵĺ����������Ĳ���������������ͬ�ġ�

�麯��

�麯�����ڻ�����ʹ�ùؼ���virtual�����ĺ����� �������������¶�������ж�����麯���� ���߱�������Ҫ��̬���ӵ��ú���
�ڳ�������һ����Ը��������õĶ����׶���ѡ����õĺ����� ���ֲ�������Ϊ��̬���ӣ� ���ߺ��ڰ�

���麯��

��������Ҫ�Ļ����ж����麯���� �Ա��������������¶���ú������õ������ڶ��� �����ڻ������ֲ��ܶ��麯�������������ʵ��
��ʱ��ͻ��õ����麯��
 


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
		virtual int area () = 0; // =0 ���߱������� ����û�����壬 ������麯���Ǵ��麯�� 
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
