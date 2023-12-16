// 논리 연산자를 사용하여 연산하기

#include <stdio.h>

void main()
{
	int data1 = 5;
	int data2 = 3;

	printf("%d\n", 0 || 1);										// 1
	printf("%d\n", 3 && -1);									// 1
	printf("%d\n", data1 == 3 || data2 == 3); // 1
	printf("%d\n", data1 == 3 && data2 == 3); // 0
	printf("%d\n", !data1);										// 0
}