#include <stdio.h>

int main(void) {
	int arr[6] = { 1,2,3,4,5,6 };
	int* front = arr;
	int* back = &arr[5];
	int temp;
	int i;
	
	for (i = 0; i < 3; i++) {
		temp = *(back-i);
		*(back-i) = *(front+i);
		*(front+i) = temp;
	}
	for (i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}