#include <stdio.h>
#include <string.h>

void Palindrome(char* ptr, int length);

int main(void) {
	char word[100];
	int len;
	printf("문자열 입력 : ");
	scanf("%s", word);
	len = strlen(word);
	Palindrome(word, len);
	return 0;
}

void Palindrome(char* ptr, int length) {
	int i;
	int flag;
	for (i = 0; i < length; i++) {
		if (ptr[i] != ptr[length - 1 - i]) {
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
		}
	}
	if (flag) {
		printf("화문이 아닙니다.\n");
	}
	else if (!flag) {
		printf("화문 입니다.\n");
	}
}