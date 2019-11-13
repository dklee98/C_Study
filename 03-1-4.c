#include <stdio.h>

int main(void)
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);
	printf("두 수를 나눈 몫은 %d이고, 나머지는 %d입니다.", num1/num2, num1%num2);
	return 0;
}