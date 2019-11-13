#include <stdio.h>

void DesSort(int* ptr, int len);

int main(void) {
	int arr[7];
	int i;
	for (i = 0; i < 7; i++) {
		printf("ют╥б : ");
		scanf("%d", &arr[i]);
	}
	
	DesSort(arr, sizeof(arr)/sizeof(int));
	for (i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}

void DesSort(int* ptr, int len) {
	int i, j;
	int temp;

	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - 1 - i; j++) {
			if (ptr[j] < ptr[j + 1]) {
				temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
}