#include <stdio.h>

int main(void)
{
	int num;
	int sum = 0;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	sum = num;
	while (num != 0) {
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d", &num);
		sum += num;
	}
	printf("�Էµ� ��� ������ ���� %d �Դϴ�.\n", sum);
	return 0;
}