#include <stdio.h>

void OddPrint(int * ptr);
void EvenPrint(int * ptr);

int main(void) {
	int arr[10];
	int i;
	for (i = 0; i < 10; i++) {
		printf("ÀÔ·Â : ");
		scanf("%d", &arr[i]);
	}
	OddPrint(arr);
	EvenPrint(arr);
	return 0;
}

void OddPrint(int * ptr) {
	int i, cnt=0;
	int odd[10];
	for (i = 0; i < 10; i++) {
		if (ptr[i] % 2 == 1) {
			odd[cnt++] = ptr[i];
		}
	}
	printf("È¦¼ö Ãâ·Â : ");
	for (i = 0; i < cnt; i++) {
		if (i == cnt - 1) {
			printf("%d\n", odd[i]);
		}
		else {
			printf("%d, ", odd[i]);
		}
	}
}

void EvenPrint(int * ptr) {
	int i, cnt = 0;
	int even[10];
	for (i = 0; i < 10; i++) {
		if (ptr[i] % 2 == 0) {
			even[cnt++] = ptr[i];
		}
	}
	printf("Â¦¼ö Ãâ·Â : ");
	for (i = 0; i < cnt; i++) {
		if (i == cnt - 1) {
			printf("%d\n", even[i]);
		}
		else {
			printf("%d, ", even[i]);
		}
	}
}