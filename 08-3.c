#include <stdio.h>

int main(void)
{
	int n;
	int i;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &n);
	i = n / 10;

	switch (i)
	{
	case 0:	
		printf("0�̻� 10�̸�");
		break;
	case 1:
		printf("10�̻� 20�̸�");
		break;
	case 2:
		printf("20�̻� 30�̸�");
		break;
	default:
		printf("30�̻�");
		break;
	}
	return 0;
}