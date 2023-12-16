// for 반복문을 중첩 사용해서 구구단 전체를 출력하기

#include <stdio.h>

void main()
{
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
}