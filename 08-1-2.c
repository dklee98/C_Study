#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("두 정수를 입력하시오 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 - num2 > 0)
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
	else 
		printf("%d - %d = %d\n", num2, num1, num2 - num1);
	return 0;
}