#include <iostream>
#include <cstring>
using namespace std;

/*
struct type_name {
member_type1 member_name1;
member_type2 member_name2;
member_type3 member_name3;
.
.
} object_names;

type_name �ǽṹ�����͵����ƣ�member_type1 member_name1 �Ǳ�׼�ı������壬
���� int i; ���� float f; ����������Ч�ı������塣�ڽṹ�����ĩβ�����һ���ֺ�֮ǰ��
������ָ��һ�������ṹ���������ǿ�ѡ�ġ�����������һ���ṹ������ Books������Ϊ book��
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book;
*/

struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int main () {
	
	 Books Book1;        // ����ṹ������ Books �ı��� Book1
   Books Book2;        // ����ṹ������ Books �ı��� Book2
 
   // Book1 ����
   strcpy( Book1.title, "C++ �̳�");
   strcpy( Book1.author, "Runoob"); 
   strcpy( Book1.subject, "�������");
   Book1.book_id = 12345;
 
   // Book2 ����
   strcpy( Book2.title, "CSS �̳�");
   strcpy( Book2.author, "Runoob");
   strcpy( Book2.subject, "ǰ�˼���");
   Book2.book_id = 12346;
 
   // ��� Book1 ��Ϣ
   cout << "��һ������� : " << Book1.title <<endl;
   cout << "��һ�������� : " << Book1.author <<endl;
   cout << "��һ������Ŀ : " << Book1.subject <<endl;
   cout << "��һ���� ID : " << Book1.book_id <<endl;
 
   // ��� Book2 ��Ϣ
   cout << "�ڶ�������� : " << Book2.title <<endl;
   cout << "�ڶ��������� : " << Book2.author <<endl;
   cout << "�ڶ�������Ŀ : " << Book2.subject <<endl;
   cout << "�ڶ����� ID : " << Book2.book_id <<endl;
	return 0;
}
