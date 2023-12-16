// for 반복문을 사용ㅎ한 중첩 반복문 예제

#include <stdio.h>

void main()
{
	for (int m = 5; m < 7; m++)
	{
		for (int n = 0; n < 3; n++)
		{
			printf("m(%d) - n(%d)\n", m, n);
		}
	}
}