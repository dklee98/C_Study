#include <stdio.h>

int SquareByValue(int n);
void SquareByReference(int* n);

int main(void) {
	int input;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &input);

	printf("Call-by-value : %d\n", SquareByValue(input));
	SquareByReference(&input);
	printf("Call-by-reference : %d", input);
	return 0;
}

int SquareByValue(int n) {
	return n * n;
}

void SquareByReference(int* n) {
	*n = *n * *n;
}