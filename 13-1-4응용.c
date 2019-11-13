#include <stdio.h>

int main(void) {
	int arr[6] = { 6,5,3,4,2,1 };
	int* front = &arr[0];
	int* back = &arr[5];
	int i, temp;
	
	for (i = 0; i < 3; i++) {
		if (*front > *back) {
			temp = *back;
			*back = *front;
			*front = temp;
		}
		front++;
		back--;
	}

	for (i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}