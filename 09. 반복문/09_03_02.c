// for 반복문과 함수를 사용하여 구구단 2단 출력하기

#include <stdio.h>

void ShowMultiplication()
{
	for (int i = 1; i <= 9; i++)
	{
		printf("2 * %d = %d\n", i, 2 * i);
	}
}

void main()
{
	ShowMultiplication();
}