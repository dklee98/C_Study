#include <stdio.h> 

int main()
{
	int arr[5];
	int i;
	int max=0, min=0, sum=0;

	for (i = 0; i < 5; i++) {
		printf("���� �Է�(%d) : ", i + 1);
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	min = arr[0];

	for (i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
		sum += arr[i];
	}

	printf("�Էµ� ���� �߿��� �ִ��� %d\n", max);
	printf("�Էµ� ���� �߿��� �ּڰ��� %d\n", min);
	printf("�Էµ� ������ �� ���� %d\n", sum);
	return 0;
}
