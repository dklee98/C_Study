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
	printf("0이상 100이하의 정수 중 짝수의 합은 : %d\n", sum);
	return 0;
}