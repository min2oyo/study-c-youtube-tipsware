// continue문을 사용해서 반복문의 실행 흐름 변경하기

#include <stdio.h>

void main()
{
	for (int i = 5; i < 8; i++)
	{
		if (i == 6)
			continue;
		printf("i(%d)\n", i);
	}
}