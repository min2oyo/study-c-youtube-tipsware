// getchar 함수를 사용하여 키보드에서 문자 한 개 입력 받기

#include <stdio.h>

void main()
{
	int input_data = getchar(); // 표준 입력 함수를 사용하여 문자를 한 개 입력 받음

	printf("input : %c\n", input_data);
}