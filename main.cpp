#include <stdio.h>

int Recursive(int n) {
	if (n <= 1) {
		return 1;
	}
	return (n * Recursive)
}

int main(void) {

	

	printf("%d\n", Min<int>(114, 150));
	printf("%f\n", Min<float>(1.5f, 10.0f));
	printf("%.9lf\n", Min<double>(9.544417156, 10.01215456));
	printf("%c\n", Min('f', 'a'));

	return 0;
}