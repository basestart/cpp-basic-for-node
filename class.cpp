#include <iostream>
using namespace std;

class Box {
	public:
		double length;
		double breadth;
		double height;
};

int main () {
	Box box1;
	Box box2;
	double volume = 0.0;
	
	box1.height = 5.0;
	box1.breadth = 6.0;
	box1.length = 7.0;
	
	box2.height = 10.0;
	box2.breadth = 12.0;
	box2.length = 13.0;
	
	volume = box1.breadth * box1.height * box1.length;
	cout << volume << endl;
	volume = box2.breadth * box2.height * box2.length;
	cout << volume << endl;
	
	return 0;
}
