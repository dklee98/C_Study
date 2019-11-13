#include <stdio.h>

int main(void)
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);
	printf("두 수의 차는 %d입니다.\n", num1 - num2);
	printf("두 수의 곱은 %d입니다.\n", num1 * num2);
	return 0;
}