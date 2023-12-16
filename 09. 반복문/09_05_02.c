// break문을 사용해서 반복문 모두 빠져나오기

#include <stdio.h>

void main()
{
	for (int i = 5; i < 7; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j == 1)
				break;
			printf("i(%d) - j(%d)\n", i, j);
		}
		if (i == 5)
			break;
	}
}