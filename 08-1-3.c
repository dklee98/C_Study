#include <stdio.h>

int main(void)
{
	int korean, english, math;
	float avg;
	printf("����, ����, ���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &korean, &english, &math);

	avg = (float)(korean + english + math) / 3.f;
	printf("�� �л��� ��������� %f �Դϴ�.\n", avg);
	if (avg >= 90)
		printf("�� �л��� ������ %c �Դϴ�.\n", 'A');
	else if (avg >= 80)
		printf("�� �л��� ������ %c �Դϴ�.\n", 'B');
	else if (avg >= 70)
		printf("�� �л��� ������ %c �Դϴ�.\n", 'C');
	else if (avg >= 50)
		printf("�� �л��� ������ %c �Դϴ�.\n", 'D');
	else
		printf("�� �л��� ������ %c �Դϴ�.\n", 'F');
	return 0;
}