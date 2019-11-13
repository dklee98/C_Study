#include <stdio.h> 

int main()
{
	char arr[100];
	int len = 0;

	printf("영단어를 입력하시오 : ");
	scanf("%s", arr);
	
	while (arr[len] != 0) {
		len++;
	}
	printf("이 단어의 길이는 %d ", len);
	return 0;
}
