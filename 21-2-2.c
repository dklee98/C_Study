#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str1[20];
	char str2[20];
	char str3[40];

	printf("ù��° ���ڿ��� �Է��Ͻÿ� : ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;
	printf("�ι�° ���ڿ��� �Է��Ͻÿ� : ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;
	
	strcpy(str3, str1);
	strcat(str3, str2);
	puts(str3);
	return 0;
}