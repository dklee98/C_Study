#include <stdio.h>

int main(void) {
	int arr[3][9];
	int i, j;
	for (i = 2; i < 5; i++) {
		for (j = 0; j < 9; j++) {
			arr[i - 2][j] = i *(j+1);
			printf("%2d ", arr[i - 2][j]);
		}
		printf("\n");
	}
	return 0;
}