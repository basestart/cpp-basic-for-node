#include <iostream>
using namespace std;

/*
iostream 该文件定义了 cin、cout、cerr 和 clog 对象，分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流
iomanip 该文件通过所谓的参数化的流操纵器（比如 setw 和 setprecision），来声明对执行标准化 I/O 有用的服务。
fstream 该文件为用户控制的文件处理声明服务
*/

int main () {
//	char name[50];
//	
//	cout << "请输入您的名称：";
//	cin >> name;
//	cout << "您的名字是： " << name << endl; 

	char str[] = "unable to read ...";
	cerr << "error message: " << str << endl; 
	return 0;
}
