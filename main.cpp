#define _USE_MATH_DEFINES
#include <cmath>
#include <stdio.h>
#include <iostream>


using namespace std;

class IShape {
public:
	virtual void Size() const = 0;
	virtual void Draw() const = 0;
	virtual ~IShape() {}
};
class Circle : public IShape {
public:
	Circle(float r) : radius(r) {}

	void Size() const override {
		printf("Circle Size: %.3f\n", M_PI * radius * radius);
	}

	void Draw() const override {
		printf("Drawing a Circle with radius: %.3f\n", radius);
	}


private:
	float radius;

};

class Rectangle : public IShape {

public:
	Rectangle(float w, float h) : width(w), height(h) {}

	void Size() const override {
		printf("Rectangle Size: %.3f\n", width * height);
	}

	void Draw() const override {
		printf("Drawing a Rectangle with width: %.3f, height: %.3f\n", width, height);
	}


private:
	float width, height;

};

int main(void) {
	Circle circle(7.31f);
	Rectangle rectangle(4.23f, 8.12f);
	
	circle.Size();
	circle.Draw();

	rectangle.Size();
	rectangle.Draw();

	return 0;

}