#include <iostream>
using namespace std;
/*
字符串用到的函数
strcpy(s1, s2) // 复制字符串s2到字符串s1
strcat(s1, s2) // 连接字符串s2到字符串s1的末尾 
strlen(s1) // 返回字符串s1的长度
strcmp(s1, s2) // 如果s1， s2相同， 返回0， 如果s1 < s2 ， 返回值小于0， 反之， 大于0；
strchr(s1, ch) // 返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。 
strstr(s1, s2) // 返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。
*/

int main () {
	char greet[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
	char hell[] = "fride";
	cout << greet << hell << endl;
	return 0;
} 
