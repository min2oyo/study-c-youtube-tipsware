// 관계 연산자를 사용하여 연산하기

#include <stdio.h>

void main()
{
	int data1 = 5;
	int data2 = 3;

	printf("%d\n", data1 > 7);			// 0
	printf("%d\n", data2 <= data1); // 1
	printf("%d\n", data2 == 7);			// 0
	printf("%d\n", data2 != data1); // 1
}