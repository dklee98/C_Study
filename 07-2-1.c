#include <stdio.h>

int main(void)
{
	int num, i=0;
	int sum = 0;
	while (i < 5) {
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d", &num);
		while (num < 1) {
			printf("1�̻��� ������ �Է��Ͻÿ� : ");
			scanf("%d", &num);
		}
		sum += num;
		i++;
	}
	printf("5���� ������ ���� %d �Դϴ�. \n", sum);
	return 0;
}