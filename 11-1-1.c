#include <stdio.h> 

int main()
{
	int arr[5];
	int i;
	int max=0, min=0, sum=0;

	for (i = 0; i < 5; i++) {
		printf("정수 입력(%d) : ", i + 1);
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	min = arr[0];

	for (i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
		sum += arr[i];
	}

	printf("입력된 정수 중에서 최댓값은 %d\n", max);
	printf("입력된 정수 중에서 최솟값은 %d\n", min);
	printf("입력된 정수의 총 합은 %d\n", sum);
	return 0;
}
