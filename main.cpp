#include <stdio.h>
#include <iostream>
using namespace std;

class Value {
public:
	virtual void GetValue() const {
		printf("Something I think is valuable ");
	}
	virtual ~Value() {};
};
class PersonA : public Value {
public:
	void GetValue() const override {
		printf("Money\n");
	}

};
class PersonB : public Value {
public:
	void GetValue() const override {
		printf("Family\n");
	}

};
class PersonC : public Value {
public:
	void GetValue() const override {
		printf("Experience\n");
	}

};

int main(void) {
	
	
	Value* people[3];


	people[0] = new PersonA();
	people[1] = new PersonB();
	people[2] = new PersonC();

	for (int i = 0; i < 3; i++) {
		people[i]->GetValue();
	}

	for (int i = 0; i < 3; i++) {
		delete people[i];
	}

	return 0;

}