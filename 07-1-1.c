#include <stdio.h>

int main(void)
{
	int num;

	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &num);

	while (num > 0) {
		printf("Hello World!\n");
		num--;
	}
	return 0;
}