// 무한 루프 형식의 for 반복문을 사용해 1부터 5까지 더하기

#include <stdio.h>

void main()
{
	int sum = 0;
	int num = 1;

	for (;;)
	{
		printf("num(%d) + sum(%d) = %d\n", num, sum, sum += num);
		num++;
		if (num > 5)
			break;
	}

	printf("\nResult : num = %d  sum = %d\n", num, sum);
}