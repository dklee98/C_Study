#include <stdio.h>

int main(void)
{
	int num;	//4byte
	printf("������ �Է��ϼ��� ");
	scanf("%d", &num);

	num = ~num;
	num += 1;
	printf("�Է��� ������ ��ȣ�� �ٲ� ���� %d �Դϴ�.\n", num);
	return 0;
}