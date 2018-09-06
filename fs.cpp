#include <iostream>
#include <fstream>
using namespace std;

/*
ofstream ����ļ���
ifstream �����ļ���
fstream �����ļ�������������Ϣ

void open (const char *filename, ios::openmode mode) 
open ��һ������ָ��Ҫ�򿪵��ļ������ƺ�λ�ã� �ڶ������������ļ����򿪵�ģʽ

ios::app  ׷��ģʽ�� ����д�붼׷�ӵ��ļ�ĩβ 
ios::ate  �ļ��򿪺�λ���ļ�ĩβ 
ios::in  ���ļ����ڶ�ȡ 
ios::out  ���ļ�����д�� 
ios::trunc  ������ļ��Ѿ����ڣ� �����ݽ��ڴ��ļ�֮ǰ���ضϣ� �����ļ���������Ϊ0 
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
	cin.ignore(); //ignore() ��������Ե�֮ǰ��������µĶ����ַ�
	
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
