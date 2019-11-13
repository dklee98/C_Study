#include <stdio.h>	

int main(void) {
	char input[100];
	int i, len = 0;
	char temp;
	printf("영단어를 입력하세요 : ");
	scanf("%s", input);
	while (input[len] != 0)	len++;

	for (i = 0; i < len/2; i++) {
		temp = input[len - 1 - i];
		input[len - 1 - i] = input[i];
		input[i] = temp;
	}
	printf("%s", input);
	return 0;
}