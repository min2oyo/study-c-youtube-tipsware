// strlen 함수를 사용하여 문자열 길이 출력하기

#include <stdio.h>
#include <string.h>

void main()
{
	char data[10] = {
			'h',
			'a',
			'p',
			'p',
			'y',
			0,
	};
	int data_length = strlen(data);

	printf("data length = %d\n", data_length); // data length = 5
}
