#include <iostream>
#include <vector>
using namespace std;

/*
c++标准模板库包括三个组件
容器： containers 管理某一类对象的集合 deque， list， vector， map 
算法 algorithms  提供执行各种操作的方式， 包括对容器执行楚世家， 排序， 搜索， 转换等操作 
迭代器 iterators 用于遍历对象集合的元素

vector 与数组类似， 不同的是向量在需要扩展大小的时候， 会自动处理自己的存储需求
 
 
push_back( ) 成员函数在向量的末尾插入值，如果有必要会扩展向量的大小。
size( ) 函数显示向量的大小。
begin( ) 函数返回一个指向向量开头的迭代器。
end( ) 函数返回一个指向向量末尾的迭代器。
*/

int main () {
	
	vector<int> vec;
	int i;
	cout << "sizeof vector" << vec.size() << endl;
	
	for(i = 0; i < 5; i++) {
		vec.push_back(i);
	}
	
	cout << "extended vector size:" << vec.size() << endl;
	
	for(i = 0; i < 6; i++) {
		cout << "value of vex [" << i << "] = " << vec[i] << endl;
	}
	
	vector<int>::iterator v = vec.begin();
	while(v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}
	
	return 0; 
}
/*

C++ STL 之 vector 的 capacity 和 size 属性区别

size 是当前 vector 容器真实占用的大小，也就是容器当前拥有多少个容器。

capacity 是指在发生 realloc 前能允许的最大元素数，即预分配的内存空间。

当然，这两个属性分别对应两个方法：resize() 和 reserve()。

使用 resize() 容器内的对象内存空间是真正存在的。

使用 reserve() 仅仅只是修改了 capacity 的值，容器内的对象并没有真实的内存空间(空间是"野"的)。

此时切记使用 [] 操作符访问容器内的对象，很可能出现数组越界的问题。
*/

