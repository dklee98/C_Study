#include <stdio.h>

int main(void)
{
	int num = 0;
	int sum = 0;

	do
	{
		if (num % 2 == 0) {
			sum += num;
			num++;
		}
		num++;
	} while (num <= 100);
	printf("0�̻� 100������ ���� �� ¦���� ���� : %d\n", sum);
	return 0;
}