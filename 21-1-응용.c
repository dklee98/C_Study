#include <stdio.h>
#include <string.h>

int main(void) {
	char input[100];
	int len,i;

	printf("문자열을 입력하시오 : ");
	fgets(input, sizeof(input), stdin);
	len = strlen(input);
	for (i = 0; i < len-1; i++) {
		if (input[i] >= 'a' && input[i] <= 'z') {
			input[i] -= 'a' - 'A';
		}
		else if (input[i] >= 'A' && input[i] <= 'Z') {
			input[i] += 'a' - 'A';
		}
		else
		{
			puts("알파벳만 입력해라");
			return -1;
		}
	}
	fputs(input, stdout);
	return 0;
}
