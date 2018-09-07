#include <iostream>
#include <pthread.h> 
using namespace std;
/*
多线程是多任务处理的一种特殊形式， 多任务处理与匈奴电脑同时进行两个或者两个以上的程序， 一般情况下， 两种类型的多任务处理： 基于
即从和基于线程

基于进程的多任务处理时程序的并发执行
基于线程的多任务处理时同一个程序的片段的bingfzhx

多线程程序包含以同时运行的两或多个部分， 这样的程序中的每一个部分被称为一个线程， 每个线程定义了一个单独的执行路径

 
*/
#define NUM_THREADS 5

void* say_hello (void* args) {
	cout << "hello run" << endl;
	return 0;
}

int main () {
	pthread_t tids[NUM_THREADS];
	for(int i = 0; i < NUM_THREADS; i++) {
		int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
		if(ret != 0) {
			cout << "pthread_create error : error_code=" << ret << endl;
		}
	}
	pthread_exit(NULL);
	return 0;
}
