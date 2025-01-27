#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <iostream>
using namespace std;

template <typename  T1, typename T2>
class MinClass {

private:

	T1 value1;
	T2 value2;

public:

	MinClass(T1 v1, T2 v2) : value1(v1), value2(v2) {}

	auto Min() -> decltype(value1 < value2 ? value1 : value2) {
		return (value1 < value2) ? value1 : value2;
	}

	void display() {
		cout << "Comparing " << value1 << " and " << value2 << ": Min = " << Min() << endl;
	}



};

int main(void) {
	
	MinClass<int, int> num1(3, 5);
	MinClass<int, float> num2(7, 6.2f);
	MinClass<int, double> num3(8, 9.15);
	MinClass<float, float> num4(2.3f, 2.2f);
	MinClass<float, double> num5(3.7f, 3.2);
	MinClass<double, double> num6(5.7, 9.1);

	num1.display();
	num2.display();
	num3.display();
	num4.display();
	num5.display();
	num6.display();

	return 0;

}