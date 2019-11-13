#include <stdio.h>

int main(void) {
	char word[100];
	int len = 0;
	int i;
	int max = 0;
	
	printf("영단어를 입력하시오 : ");
	scanf("%s", word);
	while (word[len] != 0)	len++;

	for (i = 0; i < len; i++) {
		if (word[i] > max) {
			max = word[i];
		}
	}
	printf("아스키값이 가장 큰 문자는 : %c", max);
	return 0;
}