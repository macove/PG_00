#include <stdio.h>
#include <iostream>
using namespace std;

class value {
public:
	virtual void Values() const {
		printf("Something I think is valuable ");
	}
	virtual ~value() {};
};
class peopleA : public value {
public:
	void Values() const override {
		printf("Money/");
	}

};
class peopleB : public value {
public:
	void Values() const override {
		printf("Family");
	}

};
class peopleC : public value {
public:
	void Values() const override {
		printf("Experience");
	}

};

int main(void) {
	
	
	value* peoples[3];


	peoples[0] = new peopleA();
	peoples[1] = new peopleB();
	peoples[2] = new peopleC();

	for (int i = 0; i < 3; i++) {
		peoples[i]->Values();
	}

	for (int i = 0; i < 3; i++) {
		delete peoples[i];
	}

	return 0;

}