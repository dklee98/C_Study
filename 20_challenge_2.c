#include <stdio.h>

void MakeSnail(int(*input)[20], int len);
void PrintSnail(int(*input)[20], int len);

int main(void) {
	int n;
	int arr[20][20] = { 0 };

	printf("숫자를 입력하시오 : ");
	scanf("%d", &n);

	MakeSnail(arr, n);
	PrintSnail(arr, n);

	return 0;
}

void MakeSnail(int(*input)[20], int len) {
	int i=0, j=-1;	//행렬
	int k;	//for문 인자
	int cnt = 1;
	int l = len;
	int direction = 1;
	while (1) {
		for (k = 0; k < l; k++) {
			j += direction;	//012345
			input[i][j] = cnt++;	//123456
		}

		l--;
		if (l < 0) {
			break;
		}

		for (k = 0; k < l; k++) {
			i += direction;	//012345
			input[i][j] = cnt++;	//123456
		}
		direction *= -1;
	}
}
void PrintSnail(int(*input)[20], int len) {
	int i, j;
	for (i = 0; i < len; i++) {
		for (j = 0; j < len; j++) {
			printf("%2d ", input[i][j]);
		}
		printf("\n");
	}
}