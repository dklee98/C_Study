#include <stdio.h>

int main(void)
{
	int num1, num2;
	int sum = 0;
	int i;

	printf("두 개의 정수를 입력하시오 : ");
	scanf("%d %d", &num1, &num2);
	for (i = num1; i <= num2; i++) {
		sum += i;
	}
	printf("두 정수 사이의 정수들의 합은 %d 입니다.\n", sum);
	return 0;
}