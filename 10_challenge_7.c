#include <stdio.h> 
#include <math.h> 

int main()
{
	int n;
	int k;

	printf("상수 n 입력 : ");
	scanf("%d", &n);

	for (k = 1; k < n; k++) {
		if (pow(2, k) > n) break;
	}
	printf("공식을 만족하는 k의 최댓값은 %d", k - 1);
	return 0;
}
