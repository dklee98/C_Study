#include <stdio.h>

void MaxAndMin(int**max_p1, int**min_p1, int**max_p2, int**min_p2, int(*arr_p)[5]);

int main(void) {
	int * maxPtr1 = NULL;
	int * minPtr1 = NULL;
	int * maxPtr2 = NULL;
	int * minPtr2 = NULL;
	int arr[2][5] = { 0 };
	int i,j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("정수 입력 [%d][%d] : ",i+1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
	

	MaxAndMin(&maxPtr1, &minPtr1, &maxPtr2, &minPtr2, arr);
	printf("1열 최대 : %d, 1열 최소 : %d\n2열 최대 : %d, 2열 최소 : %d\n", *maxPtr1, *minPtr1, *maxPtr2, *minPtr2);
	return 0;
}

void MaxAndMin(int**max_p1, int**min_p1, int**max_p2, int**min_p2, int (*arr_p)[5]) {
	int i;
	int *max1, *max2, *min1, *min2;
	max1 = min1 = &arr_p[0][0];
	max2 = min2 = &arr_p[1][0];
	
	for (i = 0; i < 5; i++) {
		if (*max1 < arr_p[0][i]) {
			max1 = &arr_p[0][i];
		}
		if (*min1 > arr_p[0][i]) {
			min1 = &arr_p[0][i];
		}
	}
	for (i = 0; i < 5; i++) {
		if (*max2 < arr_p[1][i]) {
			max2 = &arr_p[1][i];
		}
		if (*min2 > arr_p[1][i]) {
			min2 = &arr_p[1][i];
		}
	}
	
	*max_p1 = max1;
	*min_p1 = min1;
	*max_p2 = max2;
	*min_p2 = min2;
}