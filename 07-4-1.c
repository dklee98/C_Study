#include <stdio.h>

int main(void)
{
	int num1, num2;
	int sum = 0;
	int i;

	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &num1, &num2);
	for (i = num1; i <= num2; i++) {
		sum += i;
	}
	printf("�� ���� ������ �������� ���� %d �Դϴ�.\n", sum);
	return 0;
}