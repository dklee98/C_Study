#include <stdio.h> 
#include <math.h> 

int main()
{
	int n;
	int k;

	printf("��� n �Է� : ");
	scanf("%d", &n);

	for (k = 1; k < n; k++) {
		if (pow(2, k) > n) break;
	}
	printf("������ �����ϴ� k�� �ִ��� %d", k - 1);
	return 0;
}
