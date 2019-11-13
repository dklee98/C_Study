#include <stdio.h>

void MaxAndMin(int**max_p, int**min_p, int *arr_p);

int main(void) {
	int * maxPtr = NULL;
	int * minPtr = NULL;
	int arr[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("정수 입력 %d : ", i+1);
		scanf("%d", &arr[i]);
	}

	MaxAndMin(&maxPtr, &minPtr, arr);
	printf("최대 : %d, 최소 : %d \n", *maxPtr, *minPtr);
	return 0;
}

void MaxAndMin(int**max_p, int**min_p, int *arr_p) {
	int i;
	int *max, *min;
	max = min = &arr_p[0];
	for (i = 0; i < 5; i++) {
		if (*max < arr_p[i]) {
			max = &arr_p[i];
		}
		if (*min > arr_p[i]) {
			min = &arr_p[i];
		}
	}
	*max_p = max;
	*min_p = min;
}