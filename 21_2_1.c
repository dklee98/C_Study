#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char input[100];
	int len;
	int i;
	int sum=0;

	printf("문자열을 입력하시오 : ");
	fgets(input, sizeof(input), stdin);
	len = strlen(input);
	for (i = 0; i < len; i++) {
		if (input[i] >= '0' && input[i] <= '9') {
			sum += input[i]+1-'1';
		}
	}
	printf("%d", sum);
	return 0;
}