/*
c++����
ԭʼ�������� int, short, long, float, double

��ѧ���㣺

<cmath>

double cos(double)
double sin(double)
double tan(double)
double log(double)
double pow(double, double)
double hypot(double, double) // ���������������ܺ�ƽ����
double sqrt(double)
int abs(int)
double fabs(double) //��������һ��ʮ�������ľ���ֵ
double floor(double) //����һ��С�ڻ��ߵ��ڴ���������������


c++ �����
�������������������غ���  rand���� ����һ��α������� ���������֮ǰ�� �����ȵ���srand()���� 
  
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main () {
	
	int i, j;
	// �������� 
	srand( (unsigned) time(NULL) );
	
	for( i = 0; i < 10; i++) {
		j = rand();
		cout << "�����: " << j << endl;
	}
	return 0;
} 

