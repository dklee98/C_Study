#include <stdio.h>

int main(void)
{
	int num1, num2;
	int cube, squar;

	scanf("%d %d", &num1, &num2);
	cube = num1 * num1 * num1;
	squar = num2 * num2;
	printf("%d�� 3�� %d�� %d�� 2�� %d���� ���� ���� %d�̰�, �������� %d�̴�.\n",num1,num2,cube,squar,cube/squar,cube%squar);
	return 0;
}