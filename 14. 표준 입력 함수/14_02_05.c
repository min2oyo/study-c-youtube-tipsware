// gets 함수로 문자열을 입력 받을 때 입력 취소까지 처리하기

#include <stdio.h>

void main()
{
	char input_string[10];

	if (NULL != gets(input_string)) // 반환값이 NULL이 아니라 문자열을 입력 받아서 input_string에 저장함
	{
		printf("inpust: %s\n", input_string);
	}
	else
	{
		printf("input -> Canceled\n"); // 입력 중에 Ctrl + C 누르면 출력됨
	}
}