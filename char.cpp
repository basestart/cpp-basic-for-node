#include <iostream>
using namespace std;
/*
�ַ����õ��ĺ���
strcpy(s1, s2) // �����ַ���s2���ַ���s1
strcat(s1, s2) // �����ַ���s2���ַ���s1��ĩβ 
strlen(s1) // �����ַ���s1�ĳ���
strcmp(s1, s2) // ���s1�� s2��ͬ�� ����0�� ���s1 < s2 �� ����ֵС��0�� ��֮�� ����0��
strchr(s1, ch) // ����һ��ָ�룬ָ���ַ��� s1 ���ַ� ch �ĵ�һ�γ��ֵ�λ�á� 
strstr(s1, s2) // ����һ��ָ�룬ָ���ַ��� s1 ���ַ��� s2 �ĵ�һ�γ��ֵ�λ�á�
*/

int main () {
	char greet[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
	char hell[] = "fride";
	cout << greet << hell << endl;
	return 0;
} 
