// break문을 사용해서 하나의 반복문 빠져나오기

#include <stdio.h>

void main()
{
	for (int i = 5; i < 7; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 5 && j == 1)
				break;
			printf("m(%d) - j(%d)\n", i, j);
		}
	}
}