#include <stdio.h>

int Recursive(int n) {
	
	if (n == 1) {
		return 100;
	}
		
	return (Recursive(n - 1) * 2 - 50) ;
	
}

int common(int n) {
	int result = 1072 * n;
	return result;
}

int main(void) {

	int n = 5;
	int recursiveResult;
	int commonResult;

	recursiveResult = Recursive(n);
	commonResult = common(n);

	printf("%d時間働いた時の賃金\n",n);
	printf("再帰的: %d\n", recursiveResult);
	printf("一般的: %d\n", commonResult);
	

	return 0;
}