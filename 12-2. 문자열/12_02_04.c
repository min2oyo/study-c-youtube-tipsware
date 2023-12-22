// 두 개의 문자열 합치기

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 16

void main()
{
	char data[] = "abc";
	char result[MAX_LENGTH];

	strcpy(result, data);	 // data에 저장된 문자열을 result로 복사
	strcat(result, "def"); // result에 “def”를 덧붙임

	printf("%s + \"def\" = %s\n", data, result); // abc + "def" = abcdef
}