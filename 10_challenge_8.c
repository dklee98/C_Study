#include <stdio.h>

int main(void) {
	int input;

	printf("���� �Է� : ");
	scanf("%d", &input);

	printf("2�� %d���� %d", input, Pow(input));
	
	return 0;
}

int Pow(int n) {
	if (n == 0) {
		return 1;
	}
	
	return 2 * Pow(n - 1);
}