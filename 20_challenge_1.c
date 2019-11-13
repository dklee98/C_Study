#include <stdio.h>

void PrintArr(int (*input)[4]);
void Turn90(int(*input)[4]);

int main(void) {
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };

	PrintArr(arr);
	Turn90(arr);
	PrintArr(arr);
	Turn90(arr);
	PrintArr(arr);
	Turn90(arr);
	PrintArr(arr);
	return 0;
}

void PrintArr(int (*input)[4]) {
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%2d ", input[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void Turn90(int(*input)[4]) {
	int i, j;
	int temp[4][4];
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			temp[j][3 - i] = input[i][j];
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			input[i][j] = temp[i][j];
		}
	}
}