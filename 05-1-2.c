#include <stdio.h>

int main(void)
{
	double d_num1, d_num2;

	printf("�� ���� �Է��ϼ��� ");
	scanf("%lf %lf", &d_num1, &d_num2);
	printf("�� ���� ���� : %f \n",d_num1 + d_num2);
	printf("�� ���� ���� : %f \n", d_num1 - d_num2);
	printf("�� ���� ���� : %f \n", d_num1 * d_num2);
	printf("�� ���� ������ : %f \n", d_num1 / d_num2);
	return 0;
}