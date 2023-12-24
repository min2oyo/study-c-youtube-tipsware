// 직접 주소 지정 방식으로 변수 값 교환하기

#include <stdio.h>

void Swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void main()
{
	int start = 96;
	int end = 5;

	printf("before: start = %d, end = %d\n", start, end); // before: start = 96, end = 5

	if (start > end)
	{
		Swap(start, end);
	}

	printf("after: start = %d, end = %d\n", start, end); // after: start = 96, end = 5
}