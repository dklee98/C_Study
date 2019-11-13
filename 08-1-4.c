#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result;

	printf("두 정수를 입력하시오 : ");
	scanf("%d %d", &num1, &num2);

	result = (num1 > num2) ? num1 - num2 : num2 - num1;
	printf("두 정수의 차는 %d 입니다.\n", result);
	return 0;
}