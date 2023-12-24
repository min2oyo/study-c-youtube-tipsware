// 간접 주소 지정 방식(포인터)으로 변수 값 교환하기

#include <stdio.h>

void Swap(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void main()
{
	int start = 96;
	int end = 5;

	printf("before: start = %d, end = %d\n", start, end); // before: start = 96, end = 5

	if (start > end)
	{
		Swap(&start, &end);
	}

	printf("after: start = %d, end = %d\n", start, end); // after: start = 5, end = 96
}