#include <stdio.h>

int main(void) {
	int arr[10];
	int temp,i;
	int ecnt = 0, ocnt = 0;
	for (i = 0; i < 10; i++) {
		printf("�Է� : ");
		scanf("%d", &temp);
		if (temp % 2 == 0) {
			arr[9 - ecnt] = temp;
			ecnt++;
		}
		else if (temp % 2 == 1) {
			arr[ocnt] = temp;
			ocnt++;
		}
	}
	printf("�迭 ����� ��� : ");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}