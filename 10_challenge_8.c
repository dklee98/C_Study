#include <stdio.h>

int main(void) {
	int input;

	printf("정수 입력 : ");
	scanf("%d", &input);

	printf("2의 %d승은 %d", input, Pow(input));
	
	return 0;
}

int Pow(int n) {
	if (n == 0) {
		return 1;
	}
	
	return 2 * Pow(n - 1);
}