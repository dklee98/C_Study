#include <stdio.h>

int main(void)
{
	int num;
	int i = 1;

	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &num);

	while (num > 0) {
		printf("%d ", 3 * i);
		num--;
		i++;
	}
	return 0;
}