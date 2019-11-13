#include <stdio.h>

int main(void) {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr1 = arr;
	int i;

	for (i = 0; i < 5; i++) {
		*(ptr1 ++) += 2;
		printf("%d ", arr[i]);
	}
	return 0;
}