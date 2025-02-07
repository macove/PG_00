#define _USE_MATH_DEFINES
#include <cmath>
#include <stdio.h>
#include <iostream>


using namespace std;

class IShape {
	virtual void Size() const = 0;
	virtual void Draw() const = 0;
	virtual ~IShape() {}
};
class Circle : public IShape {
public:
	



private:
	float radius;

};

int main(void) {
	
	
	

	return 0;

}