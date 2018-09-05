/*
c++数字
原始数据类型 int, short, long, float, double

数学运算：

<cmath>

double cos(double)
double sin(double)
double tan(double)
double log(double)
double pow(double, double)
double hypot(double, double) // 返回两个参数的总和平方根
double sqrt(double)
int abs(int)
double fabs(double) //返回任意一个十进制数的绝对值
double floor(double) //返回一个小于或者等于传入参数的最大整数


c++ 随机数
在生成随机数有两个相关函数  rand（） 返回一个伪随机数， 生成随机数之前， 必须先调用srand()函数 
  
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main () {
	
	int i, j;
	// 设置种子 
	srand( (unsigned) time(NULL) );
	
	for( i = 0; i < 10; i++) {
		j = rand();
		cout << "随机数: " << j << endl;
	}
	return 0;
} 

