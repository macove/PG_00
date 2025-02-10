#include <stdio.h>


template <typename T>
T Min(T a, T b) {
	return (a < b) ? a : b;
}
template <>
char Min<char>(char a, char b) {
	printf("数字以外は代入できません\n");
	return '\0';
}
int Recursive(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * Recursive(n - 1);
}

int main(void) {


	printf("%d\n", Min<int>(114, 150));
	printf("%f\n", Min<float>(1.5f, 10.0f));
	printf("%.9lf\n", Min<double>(9.544417156, 10.01215456));
	printf("%c\n", Min('f', 'a'));




	return 0;
}