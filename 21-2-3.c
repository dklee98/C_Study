#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Blank_Index(char * str);
int NameCompare(char * str1, char * str2);
int AgeCompare(char * str1, char * str2);

int main(void) {
	char person1[30];
	char person2[30];

	//문자열로 입력받기
	printf("첫 번째 사람의 이름과 나이를 입력하시오 : ");
	fgets(person1, sizeof(person1), stdin);
	person1[strlen(person1) - 1] = 0;

	printf("두 번째 사람의 이름과 나이를 입력하시오 : ");
	fgets(person2, sizeof(person2), stdin);
	person2[strlen(person2) - 1] = 0;
	if (NameCompare(person1, person2) == -1 || AgeCompare(person1, person2) == -1) {
		puts("공백이 없습니다.");
		return -1;
	}
	
	if (NameCompare(person1, person2)) {
		puts("이름이 동일합니다.");
	}
	else
	{
		puts("이름이 다릅니다.");
	}
	if (AgeCompare(person1, person2)) {
		puts("나이가 동일합니다.");
	}
	else
	{
		puts("나이가 다릅니다.");
	}
	
	return 0;
}

//공백의 index 찾기
int Blank_Index(char * str) {
	int i;
	int len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] == ' ') {
			return i;
		}
	}
	return -1;	//공백이 없는 경우
}

//공백index기준 앞의 내용 비교해서 이름 비교하기
int NameCompare(char * str1, char * str2) {	
	int blank1 = Blank_Index(str1);
	int blank2 = Blank_Index(str2);
	
	if (blank1 == -1 || blank2 == -1) {	//공백이 없으면 -1
		return -1;
	}

	if (blank1 != blank2) {	//공백 위치가 다르면 무조건 0
		return 0;
	}
	else
	{
		
		if (!strncmp(str1, str2, blank1)) {	//같으면 1, 다르면 0
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
//공백index기준 뒤의 내용 비교해서 나이 비교하기
int AgeCompare(char * str1, char * str2) {
	int blank1 = Blank_Index(str1);
	int blank2 = Blank_Index(str2);
	int age1, age2;

	if (blank1 == -1 || blank2 == -1) {	//공백이 없으면 -1
		return -1;
	}

	age1 = atoi(&str1[blank1] + 1);
	age2 = atoi(&str2[blank2] + 1);

	if (age1 == age2) {	//나이가 같으면 1
		return 1;
	}
	else
	{
		return 0;	//나이가 다르면 0
	}
}