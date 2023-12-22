// 배열의 각 요소에 값 합하기

#include <stdio.h>

void main()
{
	char data[5] = {1, 2, 3, 4, 5};
	int result = 0;

	for (int i = 0; i < 5; i++)
		result += data[i];

	printf("data 배열의 각 요소의 합은 %d입니다\n", result); // data 배열의 각 요소의 합은 15입니다
}