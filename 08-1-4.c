#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result;

	printf("�� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &num1, &num2);

	result = (num1 > num2) ? num1 - num2 : num2 - num1;
	printf("�� ������ ���� %d �Դϴ�.\n", result);
	return 0;
}