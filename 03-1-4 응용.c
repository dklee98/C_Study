#include <stdio.h>

int main(void)
{
	int num1, num2;
	int cube, squar;

	scanf("%d %d", &num1, &num2);
	cube = num1 * num1 * num1;
	squar = num2 * num2;
	printf("%d의 3승 %d를 %d의 2승 %d으로 나눈 몫은 %d이고, 나머지는 %d이다.\n",num1,num2,cube,squar,cube/squar,cube%squar);
	return 0;
}