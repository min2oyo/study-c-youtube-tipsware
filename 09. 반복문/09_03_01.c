// for 반복문을 사용하여 구구단 2단 출력하기

#include <stdio.h>

void main()
{
	for (int i = 1; i <= 9; i++)
	{
		printf("2 * %d = %d\n", i, 2 * i);
	}
}