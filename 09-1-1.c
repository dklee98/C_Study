#include <stdio.h>

int Max(int a, int b, int c);
int Min(int a, int b, int c);

int main(void)
{
	int n1, n2, n3;

	printf("�� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("���� ū ���� %d �Դϴ�.\n", Max(n1, n2, n3));
	printf("���� ���� ���� %d �Դϴ�.\n", Min(n1, n2, n3));
	return 0;
}

int Max(int a, int b, int c) {
	if (a > b)
		return a > c ? a : c;
	else if (a <= b)
		return b > c ? b : c;
}

int Min(int a, int b, int c) {
	if (a > b)
		return b > c ? c : b;
	else if (a <= b)
		return a > c ? c : a;
}