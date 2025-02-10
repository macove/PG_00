#include <stdio.h>
#include <iostream>
#include <thread>
using namespace std;

void AddTwo1(int num) {
	num -= 2;
	printf("thread %d\n", num);
}
void AddTwo2(int num) {
	num -= 1;
	printf("thread %d\n", num);
}
void AddTwo3(int num) {
	num -= 0;
	printf("thread %d\n", num);
}
int main() {
	int num = 3;

	std::thread th1(AddTwo1, num);
	th1.join();
	std::thread th2(AddTwo2, num);
	th2.join();
	std::thread th3(AddTwo3, num);
	th3.join();



	return 0;
}