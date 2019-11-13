#include <stdio.h>

void Swap(int* n1, int* n2);

int main(void) {
	int num1 = 0, num2 = 0;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	printf("두 수를 입력하시오 : ");
	scanf("%d %d", &num1, &num2);


	printf("num1 : %d, num2 : %d\n", num1, num2);
	Swap(ptr1, ptr2);
	printf("num1 : %d, num2 : %d\n", num1, num2);
	return 0;
}

void Swap(int* n1, int* n2) {
	int temp;
	temp = *n2;
	*n2 = *n1;
	*n1 = temp;
}