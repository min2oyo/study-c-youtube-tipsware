// getchar 함수를 사용하여 문자 한 개씩 두 번 입력 받기

#include <stdio.h>

void main()
{
	int input_data;

	input_data = getchar();
	getchar();
	printf("first input : %c\n", input_data);

	input_data = getchar();
	getchar();
	printf("second input : %c\n", input_data);
}