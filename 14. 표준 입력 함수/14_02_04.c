// gets 함수로 문자열 입력 받기

#include <stdio.h>

void main()
{
	char input_string[10]; // 마지막에 0을 포함해야 하므로 최대 9개의 문자까지 저장 가능
	gets(input_string);		 // 문자열을 일력 받아 input_string에 저장
	printf("input : %s\n", input_string);
}