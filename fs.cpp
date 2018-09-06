#include <iostream>
#include <fstream>
using namespace std;

/*
ofstream 输出文件流
ifstream 输入文件流
fstream 创建文件的输入和输出信息

void open (const char *filename, ios::openmode mode) 
open 第一个参数指定要打开的文件的名称和位置， 第二个参数定义文件被打开的模式

ios::app  追加模式， 所有写入都追加到文件末尾 
ios::ate  文件打开后定位到文件末尾 
ios::in  打开文件用于读取 
ios::out  打开文件用于写入 
ios::trunc  如果该文件已经存在， 其内容将在打开文件之前被截断， 即把文件长度设置为0 
*/

int main () {
	
	char data[100];
	ofstream outfile;
	outfile.open("afile.dat");
	
	cout << "writting to the file" << endl;
	cout << "enter your name";
	cin.getline(data, 100);
	
	outfile << data << endl;
	
	cout << "enter you age:" ;
	cin >> data;
	cin.ignore(); //ignore() 函数会忽略掉之前读语句留下的多余字符
	
	outfile << data << endl;
	
	outfile.close();
	
	ifstream infile;
	infile.open("afile.dat");
	
	cout << "reading from the file" << endl;
	infile >> data;
	
	cout << data << endl;
	
	infile >> data;
	cout << data << endl;
	
	infile.close();
	
	
	return 0;
}
