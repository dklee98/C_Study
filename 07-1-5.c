#include <stdio.h>

int main(void)
{
	int num,input;
	int sum = 0;
	float avg = 0.f;
	int i=0;
	printf("�� �Է��� ������ ���� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	if (num < i)	{
		printf("�ּ� 1 �̻��� �Է��ϼ���\n");
		return 0;
	}
	while (i < num) {
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d", &input);
		sum += input;
		i++;
	}
	avg = (float)sum/(float)i;
	printf("�Է��� ������ ����� : %f\n", avg);

	return 0;
}