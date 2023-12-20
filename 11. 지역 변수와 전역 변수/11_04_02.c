// static + 지역 변수를 사용한 경우

#include <stdio.h>

void Test()
{
	static int data = 0;
	printf("%d, ", data++);
}

void main()
{
	int i;
	for (i = 0; i < 5; i++)
		Test(); // 0, 1, 2, 3, 4,
}